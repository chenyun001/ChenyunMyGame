//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020/12/27 22:42:14
//Description: 
//=========================================

using System;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using Game.Modules.Message;
using GameBase;
using MailingJoy.Core.Utils;
using MailingJoy.Game;
using MailingJoy.Game.Modules.Message;
using MailingJoy.Game.Modules.Tips;
using UnityEngine;

namespace MailingJoy.Core.Net
{
    public class NetClient
    {
        public bool IsConnected { get; private set; }

        private Socket _socket;
        private NetPacket _netPacket = new NetPacket();

        /// <summary>
        /// 连接成功事件
        /// </summary>
        public OnConnectedDelegate OnConnected;

        /// <summary>
        /// 收到消息事件
        /// </summary>
        public OnReceiveDelegate OnReceive;

        public delegate void OnConnectedDelegate();

        public delegate void OnReceiveDelegate(ProtoBufNetData msg);

        public NetClient()
        {
            _socket = new Socket(SocketType.Stream, ProtocolType.Tcp);
            
        }

        public void Connect(string addr, int port)
        {
            try
            {
                _socket.Connect(addr, port);
                IsConnected = true;
                //触发连接成功事件
                OnConnected?.Invoke();
                Debugger.Log("连接服务器成功");

                StartReceiveHead();
            }
            catch (Exception exception)
            {
                IsConnected = false;
                Debugger.Log($"连接服务器失败: {exception}");
                ActionPoolManager.Instance.Enqueue((() =>
                {
                    
                    AppFacade.GetInstance().SendNotification(NotifyConst.SendToLua,0, NotifyTypeConst.NetWorkError);

                })); 
            }
        }

        /// <summary>
        /// 开始接受消息头
        /// </summary>
        private void StartReceiveHead()
        {
            
            //接受4个字节的包长度
            _socket.BeginReceive(_netPacket.HeadBuffer, 0, NetPacket.HeadLength, SocketFlags.None, ReceiveHeadAsync,
                null);
        }

        private void ReceiveHeadAsync(IAsyncResult ar)
        {
            if (!IsConnected)
            {
                return;
            }

            try
            {
                var len = _socket.EndReceive(ar);
                if (len > 0)
                {
                    _netPacket.HeadIndex += len;

                    //分包了
                    if (_netPacket.HeadIndex < NetPacket.HeadLength)
                    {
                        _socket.BeginReceive(_netPacket.HeadBuffer, _netPacket.HeadIndex,
                            NetPacket.HeadLength - _netPacket.HeadIndex, SocketFlags.None, ReceiveHeadAsync, null);
                    }
                    else
                    {
                        //设置包长度
                        _netPacket.SetPackLen();
                        //接收数据
                        _socket.BeginReceive(_netPacket.PacketBuffer, 0, _netPacket.PacketBufferLength,
                            SocketFlags.None,
                            ReceiveBody, null);
                    }
                }
                else //啥都没接收到 开始新的一次接受消息头
                {
                    _netPacket.PacketBuffer = new byte[NetPacket.HeadLength];
                    StartReceiveHead();
                }
            }
            catch (Exception e)
            {
                
                ShutDown();
                ActionPoolManager.Instance.Enqueue((() =>
                {
                    
                    AppFacade.GetInstance().SendNotification(NotifyConst.SendToLua,0, NotifyTypeConst.NetWorkError);

                }));
                Debugger.LogError(e);
            }
        }

        /// <summary>
        /// 接受数据消息体
        /// </summary>
        /// <param name="ar"></param>
        private void ReceiveBody(IAsyncResult ar)
        {
            try
            {
                var len = _socket.EndReceive(ar);
                if (len > 0)
                {
                    _netPacket.PacketIndex += len;

                    //没达到消息体长度 分包了 继续获取内容
                    if (_netPacket.PacketIndex < _netPacket.PacketBufferLength)
                    {
                        _socket.BeginReceive(_netPacket.PacketBuffer, _netPacket.PacketIndex,
                            _netPacket.PacketBufferLength - _netPacket.PacketIndex,
                            SocketFlags.None,
                            ReceiveBody, null);
                    }
                    else
                    {
                        //收到消息体反序列化解析
                        OnReceiveData(_netPacket.PacketBuffer);

                        //开始接受下一条新消息
                        _netPacket.Refresh();
                        _socket.BeginReceive(_netPacket.PacketBuffer, _netPacket.HeadIndex,
                            NetPacket.HeadLength - NetPacket.HeadLength, SocketFlags.None, ReceiveHeadAsync, null);
                    }
                }
                else
                {
                    Debugger.LogError("len == 0");
                }
            }
            catch (Exception e)
            {
                ActionPoolManager.Instance.Enqueue((() =>
                {
                    
                    AppFacade.GetInstance().SendNotification(NotifyConst.SendToLua,0, NotifyTypeConst.NetWorkError);

                }));

                NetManager.Instance.CheckNetwork();
                Debugger.LogError(e);
            }
        }

        /// <summary>
        /// 接受到消息 处理
        /// </summary>
        /// <param name="packetBuff"></param>
        private void OnReceiveData(byte[] packetBuff)
        {
            var byteBuffer = new ByteBuffer(packetBuff);
            //协议号
            var protoId = byteBuffer.ReadInt();

            //协议体
            var protoBody = byteBuffer.ReadNumBytes(_netPacket.PacketBufferLength - 4);
            var packet = new ProtoBufNetData
            {
                Cmd = protoId,
                ProtoBytes = protoBody,
            };


            Debugger.Log($"收到协议 {protoId}");

            OnReceive?.Invoke(packet);
        }


        private bool first = false;

        public void SendMessage(ProtoBufNetData msg)
        {
            if (!IsConnected)
            {
                Debugger.Log("未连接服务器...");
                return;
            }

            var msgBody = msg.PackNetData();
            try
            {
                // _socket.Send(msgBody, 0, msgBody.Length, SocketFlags.None);
                _socket.SendAsync(msgBody, SocketFlags.None);
                // _socket.BeginSend(msgBody, 0, msgBody.Length, SocketFlags.None, SendMessageAsync, null);
            }
            catch (Exception e)
            {
                //数据放失败 断开连接
                ShutDown();
                ActionPoolManager.Instance.Enqueue((() =>
                {
                    
                    AppFacade.GetInstance().SendNotification(NotifyConst.SendToLua,0, NotifyTypeConst.NetWorkError);

                }));
                Debugger.LogError(e);
            }
        }

        public void SendMessage(byte[] bytes)
        {
        }

       
        private void SendMessageAsync(IAsyncResult ar)
        {

            _socket.EndSend(ar);

        }


        /// <summary>
        /// 主动断开连接
        /// </summary>
        public void ShutDown()
        {
            
            IsConnected = false;

            _socket?.Close();
          

        }

        public void SendEmpty(int cmdId)
        {
            var protoIdBytes = BitConverter.GetBytes(cmdId).Reverse().ToArray();

            var msgBody = protoIdBytes.PackNetDataLen();
            try
            {
                _socket.SendAsync(msgBody, SocketFlags.None);
            }  catch (Exception e)
            {
                //数据放失败 断开连接
                ShutDown();

                Debugger.LogError(e);
            }
        }
    }
}