//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-11-30 13:37:01
//Description: 
//=========================================

using MailingJoy.Core;
using MailingJoy.Core.PluginsExtensions;
using MailingJoy.Game.Notify;

namespace MailingJoy.Game.Models
{
	public class TaptapPlatform : Platform
	{
		public TaptapPlatform(string proxyName, object data = null) : base(proxyName, data)
		{
		}

		public override void Login(params object[] args)
		{
			LoginCallback(new LoginResult
			{
				code = 1001,
				openUid = 0,
			});
		}

		public override void LoginCallback(LoginResult loginResult)
		{
			if (loginResult.code == 1001)
			{
				AppFacade.GetInstance().SendNotification(GameNotify.LOGIN_SUCCESS, loginResult);
			}
		}

		public override void Init(params object[] args)
		{
		}
	}
}