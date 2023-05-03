//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-17 14:36:38
//Description: 
//=========================================

using System;
using System.Collections.Generic;
using System.Threading;
using MailingJoy.Core;
using MailingJoy.Core.Enums;
using MailingJoy.Core.PluginsExtensions;
using MailingJoy.Core.UIFramework;
using MailingJoy.Core.Utils;
using MailingJoy.Game.Commands;
using MailingJoy.Game.DataContext;
using MailingJoy.Game.Models;
using MailingJoy.Game.Modules.Message;
using MailingJoy.Game.Notify;
using PureMVC.Interfaces;
using PureMVC.Patterns.Command;
using UniRx;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceProviders;
using UnityEngine.SceneManagement;
using SceneManager = MailingJoy.Core.SceneManager;
using MailingJoy.Game.Start;


namespace MailingJoy.Game
{
	public class StartCommand : SimpleCommand
	{
		public override void Execute(INotification notification)
		{
			base.Execute(notification);
			//资源更新在StartGame中已经完成了 已经改了资源更新逻辑 这边直接进入游戏
			Observable.Timer(TimeSpan.FromSeconds(1)).Subscribe(_ => { EnterGame(); });
#if UNITY_ANDROID && !UNITY_EDITOR
			// BuglyAgent.ConfigDebugMode (true);
			// BuglyAgent.InitWithAppId("dfb501a132");
			// BuglyAgent.EnableExceptionHandler ();
#endif
		}

		public void UpdateComplete(float x)
		{			
			if (x >= 1)
			{
				StartScene.Instance.SetProgerssText("更新成功");
				Observable.Timer(TimeSpan.FromSeconds(1)).Subscribe(_ => { EnterGame(); });
			}
		}

		private void EnterGame()
		{
			//Debug.Log(UnityEngine.SystemInfo.deviceUniqueIdentifier+ "--------UnityEngine.SystemInfo.deviceUniqueIdentifier--");
			Debug.Log(AppConst.deviceUniqueIdentifier + "--------UnityEngine.SystemInfo.deviceUniqueIdentifier--");
			//加载所有 load 文件
			var preloadLuaHandler = Addressables.LoadResourceLocationsAsync("lua");
			preloadLuaHandler.Completed += handle =>
			{
				var luaAddressList = handle.Result;
				Addressables.Release(preloadLuaHandler);

				var taskCount = luaAddressList.Count;
				foreach (var luaAddressLocation in luaAddressList)
				{
					var loadLuaHandle = Addressables.LoadAssetAsync<TextAsset>(luaAddressLocation);
					loadLuaHandle.Completed += operationHandle =>
					{
						if (loadLuaHandle.Status == AsyncOperationStatus.Succeeded)
						{
							Managers.LuaFrameworkEntry.AddCache(luaAddressLocation, loadLuaHandle);

							Addressables.Release(loadLuaHandle);
							taskCount--;
							//所有任务都完成
							if (taskCount == 0)
							{
								//开始LuaFramework
								Managers.LuaFrameworkEntry.StartLuaFramework();

								// todo  先这样屏蔽掉
								//初始化网络系统
								//NetManager.Instance.Init();
								
								// todo  先这样做
								//SoundManager.Instance.PlayBackgroundSound("bgm.mp3");
								GameUIManager.Instance.OpenUI("PlayGame.prefab");

								//加载主场景
								SceneManager.Instance.ChangeScene(SceneType.Game, LoadSceneMode.Additive, scene =>
								{
									//entitas开启
									//BattleManager.Instance.Start();
									//延时一段时间
									Observable.Timer(TimeSpan.FromMilliseconds(500)).Subscribe(_ =>
									{
										//卸载 Loading 场景
										RemoveStartScene(scene);
										GC.Collect();
									});
								}, false);
							}
						}
					};
				}
			};
		}

		private void RemoveStartScene(SceneInstance scene)
		{
			var currentScene = UnityEngine.SceneManagement.SceneManager.GetActiveScene();
			scene.ActivateAsync().completed += s =>
			{
				UnityEngine.SceneManagement.SceneManager.UnloadSceneAsync(currentScene);

				PluginManager.Instance.LoginRequest();
			};

		}

		private void ForceUpdate(string url)
		{
			MessageBox.Show(MessageBoxType.Ok | MessageBoxType.Cancel, "检测到有新版本\n为防止游戏过程中产生影响体验的BUG\n请前往更新最新版本",
				x =>
				{
					Application.OpenURL(url);
					ForceUpdate(url);
				}, "前往");
		}
	}
}