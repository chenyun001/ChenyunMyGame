//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-19 00:23:32
//Description: 
//=========================================

using MailingJoy.Core.UIFramework.ScreenBase;

namespace MailingJoy.Game.Modules.Tips
{
	public class TipsUIOpenScreenParameter : UIOpenScreenParameterBase
	{
		/// <summary>
		/// 消息内容
		/// </summary>
		public string Message;

		/// <summary>
		/// 显示时常
		/// </summary>
		public int Time;
	}
}