using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;

public class ResUpdate : MonoBehaviour
{
	public AsyncOperationHandle downloadhandle;
	public static ResUpdate Instance;
	private bool UseUpdate = false;
	private float downloadSize = 0;
	private void Awake()
    {
        Instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
		Execute();

	}

    // Update is called once per frame
    void Update()
    {
        if(UseUpdate==true)
        {
			string content = (downloadhandle.PercentComplete * downloadSize).ToString()+"M.../"+ downloadSize.ToString()+"M";
			StartGame.Instance.SetProgerssText(content);
			StartGame.Instance.SetProgerss(downloadhandle.PercentComplete);
		}
    }

	void GameStart()
    {
		StartGame.Instance.GameStart();
	}

	public async void Execute()
	{
		StartGame.Instance.SetProgerssText("开始资源检测");
		var initHandle = Addressables.InitializeAsync();
		await initHandle.Task;
		var handler = Addressables.CheckForCatalogUpdates(false);
		await handler.Task;
		var catalogList = handler.Result;
		if (handler.Status != AsyncOperationStatus.Succeeded)
		{
			StartGame.Instance.SetProgerssText("资源检测失败");
			return;
		}
		StartGame.Instance.SetProgerssText("资源检测成功");
		if (catalogList.Count > 0)
		{
			var updateHandle = Addressables.UpdateCatalogs(false, catalogList, false);
			await updateHandle.Task;
			var locators = updateHandle.Result;
			if (updateHandle.Result == null)
			{
				GameStart();
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
			downloadSize = handle.Result;
			downloadSize = downloadSize / 1024;
			Debug.Log(downloadSize + "下载大小");
			if (downloadSize > 0)
			{
				UseUpdate = true;
				downloadhandle = Addressables.DownloadDependenciesAsync(keys, Addressables.MergeMode.Union);
				downloadhandle.Completed +=
					downloadHandle =>
					{

						if (downloadHandle.Status == AsyncOperationStatus.Succeeded)
						{
							StartGame.Instance.SetProgerssText("资源下载完成");
							UseUpdate = false;
							Addressables.Release(updateHandle);
							GameStart();
						}
						else
						{
						}
					};
			}
		}
		else
		{
			StartGame.Instance.SetProgerssText("开始进入游戏");
			GameStart();
			Addressables.Release(handler);
		}
	}
}
