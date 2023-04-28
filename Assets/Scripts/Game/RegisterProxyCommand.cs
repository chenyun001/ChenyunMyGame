//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-17 14:36:13
//Description: 
//=========================================

using MailingJoy.Game.Models;
using PureMVC.Interfaces;
using PureMVC.Patterns.Command;

namespace MailingJoy.Game
{
	public class RegisterProxyCommand : SimpleCommand
	{
		public override void Execute(INotification notification)
		{
			base.Execute(notification);
#if TAPTAP
			Facade.RegisterProxy(new TaptapPlatform("PlatformProxy"));
#elif WUFUN
			Facade.RegisterProxy(new WuFunPlatform("PlatformProxy"));
#elif KUAIBAO
			Facade.RegisterProxy(new KuaiBaoPlatform("PlatformProxy"));
#else
			Facade.RegisterProxy(new DefaultPlatform("PlatformProxy"));
#endif
			// Facade.RegisterProxy(new ChatService());
		}
	}
}