//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-17 14:53:36
//Description: 
//=========================================

using System;
using MailingJoy.Core.Enums;
using MailingJoy.Utils;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.ResourceProviders;
using UnityEngine.SceneManagement;
using XLua;

namespace MailingJoy.Core
{
	[LuaCallCSharp]
	public class SceneManager : SingletonBase<SceneManager>
	{
		/// <summary>
		/// 更换场景
		/// </summary>
		public void ChangeScene(SceneType sceneType, LoadSceneMode loadSceneMode, Action<SceneInstance> cb = null,
			bool isActive = true)
		{
			var sceneName = string.Empty;
			switch (sceneType)
			{
				case SceneType.Start:
					sceneName = "Start";
					break;
				case SceneType.Game:
					sceneName = "Game";
					break;
			}

			var loadSceneHandler =
				Addressables.LoadSceneAsync(sceneName, loadSceneMode, isActive);
			loadSceneHandler.Completed += handle => { cb?.Invoke(loadSceneHandler.Result); };

			ModulesManager.Instance.ChangeScene(sceneName);
		}
	}
}