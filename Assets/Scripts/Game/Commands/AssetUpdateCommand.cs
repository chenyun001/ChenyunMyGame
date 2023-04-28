//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-12-04 00:09:35
//Description: 
//=========================================

using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using MailingJoy.Core;
using MailingJoy.Core.Lua.Bridge;
using MailingJoy.Core.Utils;
using MailingJoy.Game.Start;
using PureMVC.Interfaces;
using PureMVC.Patterns.Command;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace MailingJoy.Game.Commands
{
	public class AssetUpdateCommand : SimpleCommand
	{

		private Timer _timer;
		private AsyncOperationHandle downloadhandle;
		
		private Action<float> completeCallback;
		public override async void Execute(INotification notification)
		{
			StartScene.Instance.SetProgerssText("检测更新");
			completeCallback = (Action<float>)notification.Body;
			var initHandle = Addressables.InitializeAsync();
			await initHandle;
			var handler = Addressables.CheckForCatalogUpdates(false);
			await handler;
			var catalogList = handler.Result;
			if (handler.Status != AsyncOperationStatus.Succeeded)
			{
				StartScene.Instance.SetProgerssText("检测失败");
				completeCallback.Invoke(1f);
				return;
			}
			if (catalogList.Count > 0)
			{

				var updateHandle = Addressables.UpdateCatalogs(true, catalogList, true);
				await updateHandle;
				var locators = updateHandle.Result;
				if (updateHandle.Result == null)
				{
					completeCallback.Invoke(1f);
					return;
				}
				var keylist = new List<object>();
				foreach (var locator in locators)
				{
					foreach (var key in locator.Keys)
					{
						keylist.Add(key);
					}
				}
				var keys = keylist.Distinct();
				var handle = Addressables.GetDownloadSizeAsync(keylist);
				long downloadSize = handle.Result;
				Debug.LogError(downloadSize+"下载长度");
				
				if (downloadSize > 0)
				{
					StartScene.Instance.OpenDownLoad();
					DoTweenBridge.To(0, 40, 1, (float a) => {
					   a =	MathF.Floor(a);
						StartScene.Instance.SetProgerssText(a.ToString() + "%");
						StartScene.Instance.SetProgerss(a/100);
					}, () => {
						downloadhandle = Addressables.DownloadDependenciesAsync(keys, Addressables.MergeMode.Union);
						_timer = TimerManager.Instance.Register(0.05f, TimerType.FIXED_UPDATE, UpdateProgress, -1);
						downloadhandle.Completed +=
							downloadHandle =>
							{

								if (downloadHandle.Status == AsyncOperationStatus.Succeeded)
								{
									completeCallback.Invoke(1f);
									TimerManager.Instance.Cancel(_timer);
									StartScene.Instance.SetProgerssText("更新成功");
								}
								else
								{
									TimerManager.Instance.Cancel(_timer);
									StartScene.Instance.SetProgerssText("更新失败");
									completeCallback.Invoke(-1f);
								}
							};
					});	
				}else
                {
					StartScene.Instance.SetProgerssText("木有更新");
					completeCallback.Invoke(1f);
					Addressables.Release(handler);
				}
			}
			else
			{
				StartScene.Instance.SetProgerssText("木有更新");
				completeCallback.Invoke(1f);
				Addressables.Release(handler);
			}
		}
        private void UpdateProgress(float f)
		{
			f = MathF.Round(f,2);
			StartScene.Instance.SetProgerssText(downloadhandle.PercentComplete+"%");
			StartScene.Instance.SetProgerss(downloadhandle.PercentComplete);
			// completeCallback.Invoke(f);
		}
	}
}