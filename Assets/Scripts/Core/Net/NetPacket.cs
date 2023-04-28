//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-12-28 00:36:52
//Description: 
//=========================================

using System;
using System.Linq;
using Proto.Cmd;

namespace MailingJoy.Core.Net
{
	public class NetPacket
	{
		/// <summary>
		/// 消息内容
		/// </summary>
		public byte[] PacketBuffer;


		/// <summary>
		/// 消息头长度
		/// </summary>
		public static int HeadLength = 4;


		/// <summary>
		/// 消息长度
		/// </summary>
		public byte[] HeadBuffer = new byte[HeadLength];


		/// <summary>
		/// 数据包的长度
		/// </summary>
		public int PacketBufferLength { get; private set; }

		#region 已经接收的部分

		/// <summary>
		/// 已经收到了多少消息长度
		/// </summary>
		public int HeadIndex;

		/// <summary>
		/// 收到的包长度
		/// </summary>
		public int PacketIndex;

		#endregion

		/// <summary>
		/// 设置消息体长度 & 初始化消息体结构
		/// </summary>
		public void SetPackLen()
		{
			PacketBufferLength = BitConverter.ToInt32(HeadBuffer.Reverse().ToArray(), 0)-4;
			PacketBuffer = new byte[PacketBufferLength];
			
		}

		public void Refresh()
		{
			PacketBuffer = new byte[HeadLength];
			PacketIndex = 0;
			HeadIndex = 0;
		}
	}
}