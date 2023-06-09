﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;
using MyGame;
using MailingJoy.Core;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
/// <summary>
/// 基类
/// </summary>
public class HumanCache:Cache
{
    //怪物类型
    public E_EnemyType EnemyType = E_EnemyType.None;
}
/// <summary>
/// 存活的怪物模型资源
/// </summary>
[System.Serializable]
public class LiveHumanCache : HumanCache
{
    private List<GameObject> Cache = new List<GameObject>();
    private string prefabName = "";
    public override void Init()
    {
        switch (EnemyType)
        {
            case E_EnemyType.SwordsMan:
                //Prefab = Resources.Load<GameObject>("Enemies/EnemySwordsMan");
                //Prefab = ResourceManager.LoadAsset("Assets/Game/Prefabs/Enemies/EnemySwordsMan.prefab", typeof(UnityEngine.Object)) as GameObject ;
                prefabName = "EnemySwordsMan.prefab";
                break;
            case E_EnemyType.Peasant:
                //Prefab = Resources.Load<GameObject>("Enemies/EnemyPeasantEx");
                //Prefab = ResourceManager.LoadAsset("Assets/Game/Prefabs/Enemies/EnemyPeasantEx.prefab", typeof(UnityEngine.Object)) as GameObject ;
                prefabName = "EnemyPeasantEx.prefab";
                break;
            case E_EnemyType.TwoSwordsMan:
                //Prefab = Resources.Load<GameObject>("Enemies/EnemyDoubleSwordsman");
                //Prefab = ResourceManager.LoadAsset("Assets/Game/Prefabs/Enemies/EnemyDoubleSwordsman.prefab", typeof(UnityEngine.Object)) as GameObject ;
                prefabName = "EnemyDoubleSwordsman.prefab";
                break;
            case E_EnemyType.Bowman:
                //Prefab = Resources.Load<GameObject>("Enemies/EnemyBowman");
                //Prefab = ResourceManager.LoadAsset("Assets/Game/Prefabs/Enemies/EnemyBowman.prefab", typeof(UnityEngine.Object)) as GameObject ;
                prefabName = "EnemyBowman.prefab";
                break;
            case E_EnemyType.PeasantLow:
                //Prefab = Resources.Load<GameObject>("Enemies/EnemyPeasantEasy");
                //Prefab = ResourceManager.LoadAsset("Assets/Game/Prefabs/Enemies/EnemyPeasantEasy.prefab", typeof(UnityEngine.Object)) as GameObject ;
                prefabName = "EnemyPeasantEasy.prefab";
                break;
            case E_EnemyType.MiniBoss01:
                //Prefab = Resources.Load<GameObject>("Enemies/EnemyMiniBoss");
                //Prefab = ResourceManager.LoadAsset("Assets/Game/Prefabs/Enemies/EnemyMiniBoss.prefab", typeof(UnityEngine.Object)) as GameObject ;
                prefabName = "EnemyMiniBoss.prefab";
                break;
            case E_EnemyType.SwordsManLow:
                //Prefab = Resources.Load<GameObject>("Enemies/EnemySwordsManEasy");
                //Prefab = ResourceManager.LoadAsset("Assets/Game/Prefabs/Enemies/EnemySwordsManEasy.prefab", typeof(UnityEngine.Object)) as GameObject ;
                prefabName = "EnemySwordsmanEasy.prefab";
                break;
            case E_EnemyType.BossOrochi:
                //Prefab = Resources.Load<GameObject>("Enemies/EnemyBossOrochi");
                //Prefab = ResourceManager.LoadAsset("Assets/Game/Prefabs/Enemies/EnemyBossOrochi.prefab", typeof(UnityEngine.Object)) as GameObject ;
                prefabName = "EnemyBossOrochi.prefab";
                break;
            default:
                Debug.LogError("HumanCache::Init -  Unknow enemy type");
                break;
         }
        AssetsManager.Instance.GetAsset(prefabName, (GameObject obj, object[] objs) => {
            Prefab = obj;
            for (int i = 0; i < MaxCount; i++)
            {
                GameObject go;
                go = GameObject.Instantiate(Prefab);
                //todo 指定怪物类型
                go.name = go.name + Cache.Count.ToString();
                go.transform.parent = AutoElementManager.Instance.transform;
                go.gameObject.SetActive(false);
                go.layer = cache_free;
                Cache.Add(go);
            }
        });
        
    }
    public GameObject Get()
    {
        int len = Cache.Count;
        GameObject go;
        for (int i = 0; i < len; i++)
        {
            go = Cache[i];
            if (go.layer == cache_free)
            {
                go.SetActive(true);
                go.transform.position = new Vector3(0,0,1000);
                go.layer = cache_inuse;
                return go;
            }
        }
        return null;
    }
    public override bool Return(GameObject enemy)
    {
        int len = Cache.Count;
        GameObject go;
        for (int i = 0; i < len; i++)
        {
            go = Cache[i];
            if (go == enemy)
            {
                MissionZone.Instance.StartCoroutine(Hide(enemy));
                return true;
            }
        }
        return false;
    }
    public override void Destroy()
    {
        base.Destroy();
        for (int i = 0; i < Cache.Count; i++)
        {
            GameObject.Destroy(Cache[i]);
        }
    }
}
/// <summary>
/// 怪物死亡模型资源
/// </summary>
[System.Serializable]
public class DeadHumanCache : HumanCache
{
    private List<GameObject>[] Cache = new List<GameObject>[(int)E_DeadBodyType.Max];
    private string mainPath = "Assets/Game/Prefabs/";
    public override void Init()
    {
        //Legs = 0, Beheaded, HalfBody, SliceFrontBack, SliceLeftRight
        //SwordsMan=0, Peasant = 1, TwoSwordsMan = 2, Bowman = 3, PeasantLow = 4, MiniBoss01=5, SwordsManLow = 6
        //7种怪有死亡模型，每个怪有5种死亡模型
        string[][] resources = {
            new string[] {"DeadSwordsmanHLegs.prefab",
                "DeadSwordsmanHHead.prefab",
                "DeadSwordsmanHBody.prefab",
                "DeadSwordsmanVFront.prefab",
                "DeadSwordsmanVSide.prefab"
            }, //E_EnemyType.SwordsMan
			new string[] { "DeadPeasantHLegs.prefab",
                "DeadPeasantHHead.prefab",
                "DeadPeasantHBody.prefab",
                "DeadPeasantVFront.prefab",
                "DeadPeasantVSide.prefab"
            }, //E_EnemyType.Peasant
			new string[] { "DeadTwoSwordsmanHLegs.prefab",
                "DeadTwoSwordsmanHHead.prefab",
                "DeadTwoSwordsmanHBody.prefab",
                "DeadTwoSwordsmanVFront.prefab",
                "DeadTwoSwordsmanVSide.prefab"
            }, //E_EnemyType.TwoSwordsMan
			new string[] { "DeadBowmanH.prefab",
                "DeadBowmanH.prefab",
                "DeadBowmanH.prefab",
                "DeadBowmanV.prefab",
                "DeadBowmanV.prefab"
            }, //E_EnemyType.Bowman
			new string[] { "DeadPeasantLowHLegs.prefab",
                "DeadPeasantLowHHead.prefab",
                "DeadPeasantLowHBody.prefab",
                "DeadPeasantLowVFront.prefab",
                "DeadPeasantLowVSide.prefab"
            }, //E_EnemyType.PeasantLow
			new string[] { }, // MiniBoss01
			new string[] { "DeadSwordsmanLowHLegs.prefab",
                "DeadSwordsmanLowHHead.prefab",
                "DeadSwordsmanLowHBody.prefab",
                "DeadSwordsmanLowVFront.prefab",
                "DeadSwordsmanLowVSide.prefab"
            }, //E_EnemyType.SwordsManLow
		};
        //GameObject go;
        //for (int i = 0; i < (int)E_DeadBodyType.Max; i++)
        //{
        //    Cache[i] = new List<GameObject>();
        //    string prefabPath =  Path.Combine(mainPath,resources[(int)EnemyType][i]);
        //    prefabPath = prefabPath + ".prefab";
        //    //非上述7种怪跳过
        //    Prefab = ResourceManager.LoadAsset(prefabPath,typeof(UnityEngine.Object)) as GameObject; 
        //    for (int ii = 0; ii < MaxCount; ii++)
        //    {
        //        go = GameObject.Instantiate<GameObject>(Prefab);
        //        go.name = go.name + ii.ToString();
        //        go.transform.parent = AutoElementManager.Instance.transform;
        //        go.SetActive(false);
        //        go.layer = cache_free;
        //        Cache[i].Add(go);
        //    }
        //}

        

        int taskCount = 0 ;
        GameObject go;
        foreach (var prefabName in resources[(int)EnemyType])
        {

            //Addressables.LoadAssetAsync<GameObject>(prefabName).Completed += (handle) =>
            //{
            //    // 预设物体
            //    GameObject result = handle.Result;
            //    //// 实例化
            //    //GameObject alpha = GameObject.Instantiate(result);
            //    taskCount++;
            //    for (int ii = 0; ii < MaxCount; ii++)
            //    {
            //        go = GameObject.Instantiate<GameObject>(result);
            //        go.name = go.name + ii.ToString();
            //        go.transform.parent = AutoElementManager.Instance.transform;
            //        go.SetActive(false);
            //        go.layer = cache_free;
            //        Cache[taskCount].Add(go);
            //    }
            //};


            var loadLuaHandle = Addressables.LoadAssetAsync<GameObject>(prefabName);
            loadLuaHandle.Completed += (operationHandle) =>
            {
                if (loadLuaHandle.Status == AsyncOperationStatus.Succeeded)
                {
                    Cache[taskCount] = new List<GameObject>();
                    GameObject result = operationHandle.Result;
                    for (int ii = 0; ii < MaxCount; ii++)
                    {
                        go = GameObject.Instantiate<GameObject>(result);
                        go.name = go.name + ii.ToString();
                        go.transform.parent = AutoElementManager.Instance.transform;
                        go.SetActive(false);
                        go.layer = cache_free;
                        Cache[taskCount].Add(go);
                    }
                    Addressables.Release(loadLuaHandle);
                    taskCount++;
                    //所有任务都完成
                    if (taskCount == (int)E_DeadBodyType.Max)
                    {
                        return;
                    }
                }
            };
        }
    }
    public GameObject Get(E_DeadBodyType type)
    {
        List<GameObject> list = Cache[(int)type];
        GameObject obj;
        for(int i=0;i<list.Count;i++)
        {
            obj = list[i];
            if(obj.layer == cache_free)
            {
                obj.SetActive(true);
                obj.transform.position = new Vector3(0,0,10000);
                obj.layer = cache_inuse;
                return obj;
            }
          
        }

        return null;
    }
    public override bool Return(GameObject enemy)
    {
        for(int i=0;i<Cache.Length;i++)
        {
            for (int k = 0; k < Cache.Length; k++)
            {
                if(Cache[i][k]==enemy)
                {
                    MissionZone.Instance.StartCoroutine(Hide(enemy));
                    return true;
                }
            }

        }
        return false;
    }

    public override void Destroy()
    {
        base.Destroy();
        for (int i = 0; i < Cache.Length; i++)
        {
            for (int k = 0; k < Cache.Length; k++)
            {
                GameObject.Destroy(Cache[i][k]);
            }

        }
    }

}