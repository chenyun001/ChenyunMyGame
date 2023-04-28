//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-11-30 13:37:06
//Description: 
//=========================================

using System;
using System.Collections.Generic;
using MailingJoy.Core.Enums;
using MailingJoy.Core.PluginsExtensions;
using MailingJoy.Core.Utils;
using MailingJoy.Game.DataContext;
using MailingJoy.Modules.MessageBox;
using PureMVC.Patterns.Proxy;
using Spine;
using UniRx;
using UnityEngine;

namespace MailingJoy.Game.Models
{
	public abstract class Platform : Proxy
	{
		public string PlatformName => AppConst.PlatformName;

		protected Platform(string proxyName, object data = null) : base(proxyName, data)
		{
		}

		public abstract void Login(params object[] args);

		public abstract void LoginCallback(LoginResult loginResult);
		public abstract void Init(params object[] args);

		public virtual void CreateRole(string roleName, int serverId)
		{
		}

		protected TReturnType CallAndroid<TReturnType>(string funcName, string str)
		{
			if (Application.platform == RuntimePlatform.Android)
			{
				using (AndroidJavaClass jc = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
				{
					using (AndroidJavaObject jo = jc.GetStatic<AndroidJavaObject>("currentActivity"))
					{
						if (string.IsNullOrEmpty(str))
						{
							return jo.Call<TReturnType>(funcName);
						}
						else
						{
							return jo.Call<TReturnType>(funcName, str);
						}
					}
				}
			}

			return default(TReturnType);
		}

		protected void CallAndroid(string funcName, string str)
		{
			if (Application.platform == RuntimePlatform.Android)
			{
				using (AndroidJavaClass jc = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
				{
					using (AndroidJavaObject jo = jc.GetStatic<AndroidJavaObject>("currentActivity"))
					{
						if (string.IsNullOrEmpty(str))
						{
							jo.Call(funcName);
						}
						else
						{
							jo.Call(funcName, str);
						}
					}
				}
			}
		}

		/// <summary>
		/// 复制文本到剪贴板
		/// </summary>
		/// <param name="str">文本内容</param>
		public void Copy2Clipboard(string str)
		{
#if UNITY_ANDROID
			CallAndroid("copyTextToClipboard", str);
#endif
		}
	}
}