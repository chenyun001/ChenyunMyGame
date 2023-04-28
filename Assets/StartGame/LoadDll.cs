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
        // ʹ��BetterStreamingAssets�������ʹ��Androidƽ̨Ҳ����ֱ�Ӷ�ȡStreamingAssets�����ݣ�����ʾ
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
                Debug.Log("---------�л������ɹ���--------");
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
                Debug.Log("Assembly-CSharp.dll--------------���سɹ�------------");
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
    /// Ϊaot assembly����ԭʼmetadata�� ��������aot�����ȸ��¶��С�
    /// һ�����غ����AOT���ͺ�����Ӧnativeʵ�ֲ����ڣ����Զ��滻Ϊ����ģʽִ��
    /// </summary>
    private static void LoadMetadataForAOTAssemblies()
    {
        List<string> aotMetaAssemblyFiles = new List<string>()
        {
            "mscorlib.dll",
            "System.dll",
            "System.Core.dll",
        };
        /// ע�⣬����Ԫ�����Ǹ�AOT dll����Ԫ���ݣ������Ǹ��ȸ���dll����Ԫ���ݡ�
        /// �ȸ���dll��ȱԪ���ݣ�����Ҫ���䣬�������LoadMetadataForAOTAssembly�᷵�ش���
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in aotMetaAssemblyFiles)
        {
            byte[] dllBytes = BetterStreamingAssets.ReadAllBytes(aotDllName + ".bytes");
            // ����assembly��Ӧ��dll�����Զ�Ϊ��hook��һ��aot���ͺ�����native���������ڣ��ý������汾����
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }



    /// <summary>
    /// Ϊaot assembly����ԭʼmetadata�� ��������aot�����ȸ��¶��С�
    /// һ�����غ����AOT���ͺ�����Ӧnativeʵ�ֲ����ڣ����Զ��滻Ϊ����ģʽִ��
    /// </summary>
    private static void LoadMetadataForAOTAssembliesEx()
    {
        List<string> aotMetaAssemblyFiles = new List<string>()
        {
            "mscorlib.dll",
            "System.dll",
            "System.Core.dll",
        };
        /// ע�⣬����Ԫ�����Ǹ�AOT dll����Ԫ���ݣ������Ǹ��ȸ���dll����Ԫ���ݡ�
        /// �ȸ���dll��ȱԪ���ݣ�����Ҫ���䣬�������LoadMetadataForAOTAssembly�᷵�ش���
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
        //        // ����assembly��Ӧ��dll�����Զ�Ϊ��hook��һ��aot���ͺ�����native���������ڣ��ý������汾����
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
