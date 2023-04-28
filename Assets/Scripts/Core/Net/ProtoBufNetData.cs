//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-12-28 16:43:08
//Description: 
//=========================================

using System;
using MSocketLib;

namespace MailingJoy.Core.Net
{
	[Serializable]
	public class ProtoBufNetData:MNetData
	{
		public object ProtoBufObject;
		public byte[] ProtoBytes;
		public bool IsByteData;
	}
}