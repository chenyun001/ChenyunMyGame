using MailingJoy.Game.Models;
using MailingJoy.Game.Notify;
using UnityEngine;

namespace MailingJoy.Core.PluginsExtensions
{
	public class PluginManager : MonoSingleton<PluginManager>
	{
		private int _openUid;
		private string _token;

		private Platform _proxy;

		public void LoginRequest()
		{
			Proxy.Init();
			Proxy.Login();
		}

		public void OnLoginResponse(string result)
		{
			var resultObject = JsonUtility.FromJson<LoginResult>(result);

			_openUid = resultObject.openUid;
			_token = resultObject.token;

			Proxy.LoginCallback(resultObject);
		}

		public Platform Proxy
		{
			get
			{
				if (_proxy == null)
				{
					_proxy = AppFacade.GetInstance().RetrieveProxy("PlatformProxy") as Platform;
				}

				return _proxy;
			}
		}
	}
}