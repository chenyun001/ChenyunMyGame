//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-04 21:38:20
//Description: 
//=========================================

namespace MailingJoy.Core.UIFramework.ScreenBase
{
	public class SubScreenBase
	{
		protected UISubCtrlBase CtrlBase;

		public SubScreenBase(UISubCtrlBase ctrlBase)
		{
			CtrlBase = ctrlBase;
			Init();
		}

		protected virtual void Init()
		{
		}

		protected virtual void Dispose()
		{
		}
	}
}