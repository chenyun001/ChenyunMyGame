//=========================================
//Author: 洪金敏
//Create Date: 2019/01/03 15:46:18
//Description: 
//=========================================

using System;
using System.Collections.Generic;
using MailingJoy.Core;
using MailingJoy.Game.DataContext;
using MailingJoy.Manager;
using Spine.Unity;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using XLua;

namespace MailingJoy.Core
{
	public class SpineManager : SingletonBase<SpineManager>
	{
		//public AsyncOperationHandle Load(int generalId, Action<SkeletonDataAsset> completeHandler)
		//{
			
		//	var excel = GeneralDataContext.GetGeneralData(generalId);
		//	var spineName = $"WJ_{GeneralDataContext.GetGeneralData(generalId).skinId}";
		//	AnimationDataContext.GetSkinById(excel.skinId, out var skeletonData, out var skeletonSkin, out var prefab);
		//	return GetSpineDataFromAb(skeletonData, skeletonSkin, completeHandler);
		//}

		public AsyncOperationHandle GetSpineDataFromAb(string address, string spineName,
			Action<SkeletonDataAsset> completeHandler)
		{
			var handle = Addressables.LoadAssetAsync<SkeletonDataAsset>(address);
			handle.Completed += handler =>
			{
				var skAssetData = handler.Result;
				completeHandler?.Invoke(skAssetData);
			};
			return handle;
		}
	}
}