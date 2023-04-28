//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-11-30 13:36:27
//Description: 
//=========================================

using MailingJoy.Core;
using MailingJoy.Core.PluginsExtensions;
using MailingJoy.Game.Notify;
using UnityEngine;

namespace MailingJoy.Game.Models
{
	public class WuFunPlatform : Platform
	{
		public WuFunPlatform(string proxyName, object data = null) : base(proxyName, data)
		{
		}

		public override void Login(params object[] args)
		{
			CallAndroid("login", null);
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
			CallAndroid("init", null);
		}

		public override void CreateRole(string roleName, int serverId)
		{
			base.CreateRole(roleName, serverId);
			var args = new CreateRoleArgs();
			args.roleName = roleName;
			args.server = serverId;
			string json = JsonUtility.ToJson(args);
			CallAndroid("createRole", json);
		}
	}
}