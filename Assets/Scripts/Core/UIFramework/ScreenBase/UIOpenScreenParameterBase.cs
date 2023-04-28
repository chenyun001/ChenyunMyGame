//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-04 14:54:41
//Description: 
//=========================================

namespace MailingJoy.Core.UIFramework.ScreenBase
{
	public class UIOpenScreenParameterBase
	{
		public bool IsOpen;
		public object Obj;

		public static UIOpenScreenParameterBase Create()
		{
			return new UIOpenScreenParameterBase();
		}
	}
	
}