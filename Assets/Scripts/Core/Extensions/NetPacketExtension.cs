//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-12-28 16:51:55
//Description: 
//=========================================

using System;
using System.Linq;
using MailingJoy.Core.Utils;

namespace MailingJoy.Core.Net
{
	public static class NetPacketExtension
	{
		public static byte[] PackNetData<T>(this T netData) where T : ProtoBufNetData
		{
			//protoId
			var protoId = netData.Cmd;

			
			var protoIdBytes = BitConverter.GetBytes(protoId).Reverse();

			byte[] protoContent;
			if (!netData.IsByteData)
			{
				protoContent = ProtoBufUtil.Serialize(netData.ProtoBufObject);
			}
			else
			{
				protoContent = netData.ProtoBytes;
			}

			//length + pkgId + protoId + protoLength + content
			var msgBody = protoIdBytes.Concat(protoContent).ToArray();

			// len(proto) + proto id + proto body
			return msgBody.PackNetDataLen();
		}

		/// <summary>
		/// 为消息包前增加消息长度
		/// </summary>
		/// <param name="data"></param>
		/// <returns></returns>
		public static byte[] PackNetDataLen(this byte[] data)
		{
			return BitConverter.GetBytes(data.Length+4).Reverse().Concat(data).ToArray();
		}
	}
}