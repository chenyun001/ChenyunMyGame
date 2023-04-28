using HybridCLR;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.Networking;
using UniRx;
using UnityEngine.SceneManagement;

public class LoadDll : MonoBehaviour
{
    private AsyncOperationHandle downloadhandle;

    void Start()
    {
        // 使用BetterStreamingAssets插件，即使在Android平台也可以直接读取StreamingAssets下内容，简化演示
        BetterStreamingAssets.Initialize();
        StartGame();
    }

    void EnityGame()
    {
        Observable.Timer(TimeSpan.FromSeconds(0.1)).Subscribe(_ =>
        {
            var loadSceneHandler =
                   Addressables.LoadSceneAsync("StartScene.unity", LoadSceneMode.Single, true);
            loadSceneHandler.Completed += handle =>
            {
                Debug.Log("---------切换场景成功了--------");
            };

        });
    }

	void StartGame()
    {
        LoadMetadataForAOTAssembliesEx();

#if !UNITY_EDITOR
        Addressables.LoadAssetAsync<TextAsset>("Assembly-CSharp.dll").Completed += handle =>
        {
            if (handle.Status == AsyncOperationStatus.Succeeded)
            {
                byte[] dllBytes = handle.Result.bytes;
                System.Reflection.Assembly.Load(dllBytes);
                Debug.Log("Assembly-CSharp.dll--------------加载成功------------");
                EnityGame();
            }
        };
#else
        EnityGame();
#endif

        //var handler = Addressables.LoadAssetAsync<GameObject>("HotUpdatePrefab");
        //handler.Completed += handle =>
        //{
        //    if (handle.Status == AsyncOperationStatus.Succeeded)
        //    {
        //        var prefab = handle.Result;
        //        var go = GameObject.Instantiate(prefab);
        //    }
        //};


    }



    /// <summary>
    /// 为aot assembly加载原始metadata， 这个代码放aot或者热更新都行。
    /// 一旦加载后，如果AOT泛型函数对应native实现不存在，则自动替换为解释模式执行
    /// </summary>
    private static void LoadMetadataForAOTAssemblies()
    {
        List<string> aotMetaAssemblyFiles = new List<string>()
        {
            "mscorlib.dll",
            "System.dll",
            "System.Core.dll",
        };
        /// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
        /// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in aotMetaAssemblyFiles)
        {
            byte[] dllBytes = BetterStreamingAssets.ReadAllBytes(aotDllName + ".bytes");
            // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }



    /// <summary>
    /// 为aot assembly加载原始metadata， 这个代码放aot或者热更新都行。
    /// 一旦加载后，如果AOT泛型函数对应native实现不存在，则自动替换为解释模式执行
    /// </summary>
    private static void LoadMetadataForAOTAssembliesEx()
    {
        List<string> aotMetaAssemblyFiles = new List<string>()
        {
            "mscorlib.dll",
            "System.dll",
            "System.Core.dll",
        };
        /// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
        /// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;


        Addressables.LoadAssetAsync<TextAsset>("mscorlib.dll").Completed += handle =>
        {
            if (handle.Status == AsyncOperationStatus.Succeeded)
            {
                Debug.Log("-----1111111111111111111111111--");
                byte[] dllBytes = handle.Result.bytes;
                LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
                Debug.Log($"LoadMetadataForAOTAssembly:mscorlib.dll. mode:{mode} ret:{err}");

            }
        };

        Addressables.LoadAssetAsync<TextAsset>("System.dll").Completed += handle =>
        {
            if (handle.Status == AsyncOperationStatus.Succeeded)
            {
                byte[] dllBytes = handle.Result.bytes;
                LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
                Debug.Log($"LoadMetadataForAOTAssembly:System.dll.mode:{mode} ret:{err}");

            }
        };


        Addressables.LoadAssetAsync<TextAsset>("System.Core.dll").Completed += handle =>
        {
            if (handle.Status == AsyncOperationStatus.Succeeded)
            {
                byte[] dllBytes = handle.Result.bytes;
                LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
                Debug.Log($"LoadMetadataForAOTAssembly:System.Core.dll:{mode} ret:{err}");

            }
        };

        //foreach (var aotDllName in aotMetaAssemblyFiles)
        //{
        //    try
        //    {
        //        TextAsset textAsset = Addressables.LoadAssetAsync<TextAsset>(aotDllName).WaitForCompletion();
        //        byte[] dllBytes = textAsset.bytes;
        //        // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
        //        LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
        //        Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        //    }
        //    catch (Exception exception)
        //    {
        //        Debug.Log("exception"+ exception);
        //        return;
        //    }

        //}
    }

}
