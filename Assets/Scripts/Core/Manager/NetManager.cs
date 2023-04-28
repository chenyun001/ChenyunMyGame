//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-10 16:18:48
//Description: 
//=========================================

using System;
using MailingJoy.Core.Net;
using MailingJoy.Lua;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using XLua;

namespace MailingJoy.Core
{
	[LuaCallCSharp]
	public class NetManager : SingletonBase<NetManager>
	{
		private NetClient _client = new NetClient();



		
		
		[CSharpCallLua]
		public delegate void OnReceivedMessage(int cmd, byte[] byteBody, int errorCode);

		[CSharpCallLua]
		public delegate void InitPB(byte[] fileContent);

		[CSharpCallLua]
		public delegate void ConnectdSuccess();

		private OnReceivedMessage _onReceivedMessageLua;
		private InitPB _initPB;
		private ConnectdSuccess _connectdSuccess;
		
		
		
		public void Init()
		{
			
			AssetsManager.Instance.GetAsset<TextAsset>("proto.bytes").Completed += OnLoadProtobufFileComplete;
		}

		private void OnLoadProtobufFileComplete(AsyncOperationHandle<TextAsset> handler)
		{
			if (handler.Status == AsyncOperationStatus.Succeeded)
			{
				var pbAsset = handler.Result;
				if (_initPB == null)
				{
					_initPB =
						LuaEnvSingleton.LuaEnv.Global.GetInPath<InitPB>("network.init_network_pb");
				}

				Addressables.Release(handler);

				_initPB.Invoke(pbAsset.bytes);
			}
		}

	
		public void Connect(string addr, int port)
		{
			_client.OnConnected += OnConnected;
			_client.OnReceive += OnReceive;
			_client.Connect(addr, port);
		}

		public void LogOut()
		{
			_client.ShutDown();
			_client.OnConnected -= OnConnected;
			_client.OnReceive -= OnReceive;
			_client = new NetClient();
		}

		private void OnReceive(ProtoBufNetData msg)
		{
			if (_onReceivedMessageLua == null)
			{
				_onReceivedMessageLua =
					LuaEnvSingleton.LuaEnv.Global.GetInPath<OnReceivedMessage>("network.on_receive");
			}

			ActionPoolManager.Instance.Enqueue(() =>
			{
				
				
				_onReceivedMessageLua?.Invoke(msg.Cmd, msg.ProtoBytes, msg.ProtoBytes.Length);
			});
		}

		public void SendLua(int cmd, byte[] bytes)
		{
			if (_onReceivedMessageLua == null)
			{
				_onReceivedMessageLua =
					LuaEnvSingleton.LuaEnv.Global.GetInPath<OnReceivedMessage>("network.on_receive");
			}
			_onReceivedMessageLua?.Invoke(cmd,bytes,bytes.Length);
		}

		private void OnConnected()
		{
			if (_connectdSuccess == null)
			{
				_connectdSuccess =
					LuaEnvSingleton.LuaEnv.Global.GetInPath<ConnectdSuccess>("network.connected_success");
			}

			ActionPoolManager.Instance.Enqueue(() => { _connectdSuccess?.Invoke(); });
		}

		/// <summary>
		/// 发送到服务器
		/// </summary>
		/// <param name="cmdId"></param>
		/// <param name="messageBody"></param>
		public void Send(int cmdId, byte[] messageBody)
		{
			var msg = new ProtoBufNetData
			{
				Cmd = cmdId,
				ProtoBytes = messageBody,
				IsByteData = true
			};
			_client.SendMessage(msg);
		}

		public void SendEmpty(int cmdId)
		{
			_client.SendEmpty(cmdId);
		}

		public void CheckNetwork()
		{
			
			
		}
		
		
	}
}