//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-13 20:28:00
//Description: 
//=========================================

using System;
using MailingJoy.Core.UIFramework.ScreenBase;

namespace MailingJoy.Game.Modules.Message
{
	public class MessageBoxUIOpenScreenParameter : UIOpenScreenParameterBase
	{
		public int MessageBoxType;
		public string Message;
		public string OkField;
		public string CancelField;
		public Action<int> CallbackHandle;
	}
}