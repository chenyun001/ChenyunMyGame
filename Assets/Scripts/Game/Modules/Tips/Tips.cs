//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-19 00:18:04
//Description: 
//=========================================

using MailingJoy.Core.UIFramework;
using MailingJoy.Core.UIFramework.ScreenBase;
using XLua;

namespace MailingJoy.Game.Modules.Tips
{
	public class Tips : ScreenBase
	{
		public Tips(UIOpenScreenParameterBase param = null) : base("Tips.prefab", param)
		{
		}

		[LuaCallCSharp]
		public static void Show(string message, int existTime = 2)
		{
			var p = new TipsUIOpenScreenParameter
			{
				Message = message, Time = existTime,
			};
			GameUIManager.Instance.OpenUI(typeof(Tips), p);
		}
	}
}