using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using DG.Tweening;
using MailingJoy.Core.Lua.Bridge;
using UnityEngine.UI;
using MailingJoy.Game.DataContext.Excel;
using MailingJoy.Game.DataContext;
public class GameBattle : MonoBehaviour
{
    public GameObject CloneCell;
    private HashSet<GameObject> keyValuePairs;
    public GameObject bottomPosition;
    public GameObject GameRoot;
    public GameObject localPosition;
    public GameObject role;
    public GameObject cremaGameObject;
    public GameObject plane;
    public GameObject obj_step;
    public GameClick gameClick;
    public HashSet<GameObject> MapObjects;
    public Action JumpEndLua;
    public int resoultCount = 0;
    bool isRight = false;
    public Vector3[] MapPos ;
    public int nowMapId = 0;
    public float jumpCount = 1; //跳一次获得的积分
    public float stepCount = 1;//每一步荷花获得的积分
    public int LianXuStep = 0;//连续跳

    public int crateCurrentStep=0; //目前已经创建的步数
    public int MapLgenth = 0;
    private Vector3 lastpos = new Vector3();

    public int nowAge = 0;

    int count = 0;
    void Start()
    {
        MapObjects = new HashSet<GameObject>();
        keyValuePairs = new HashSet<GameObject>();
    }
    public void SetStepToCache(GameObject obj)
    {

        keyValuePairs.Add(obj);
    }
    public void SetJumpEnd(Action action)
    {
        JumpEndLua = action;
    }

    public void JumpEnd()
    {
        JumpEndLua?.Invoke();
    }
    public void SetGameClick(GameClick click)
    {
        gameClick = click;
        gameClick.SetCallBackDown(() => {
        });

        gameClick.SetCallBackUp(() => {

        });
    }

    public void  CheckCreateNextStep()
    {
        if(lastpos.z - cremaGameObject.transform.position.z <12.5)
        {
            if (nowMapId == MapLgenth)
            {
                nowMapId = nowMapId - 1;

            }
            else
            {
                nowMapId = nowMapId + 1;
            }
            SetMapData(nowMapId);
            CreateMap();
        }
        
    }
    /// <summary>
    /// 从缓存中获取
    /// </summary>
    /// <returns></returns>
    public GameObject GetStep()
    {
        foreach (GameObject obj in keyValuePairs)
        {

            if (cremaGameObject.transform.position.z - obj.transform.position.z >15 )
            {
                return obj;
            }
        }
        return null;
    }

    public void SetMapData(int id)
    {
        nowAge = nowAge + 1;
        MapDataExcel mapDataExcel =  MapDataContext.GetmapData(id);
        Mapp1Excel[] mapp1Excels = MapPiecesContent.GetMapPiecesData(mapDataExcel.pieces[0]);
        MapPos = new Vector3[mapp1Excels.Length];
       for (int i = 0;i< mapp1Excels.Length-1;i++)
       {
            MapPos[i] = new Vector3(mapp1Excels[i].x, mapp1Excels[i].y, mapp1Excels[i].z+(nowAge-1)*32) ;
       }

    }
    public void  GameResSet()
    {
        cremaGameObject.transform.position = new Vector3(0, 16.02f, -2.9f);
        foreach (GameObject obj in MapObjects)
        {
            obj.transform.position = new Vector3(0,0,-20);
        }
        crateCurrentStep = 0;
    }
    public void CreateMap()
    {
        //MapObjects.Clear();
        for (int i = 0;i< MapPos.Length-1; i++)
        {
            crateCurrentStep = crateCurrentStep + 1;
            GameObject step = CreateStep(MapPos[i], 0);
            lastpos = step.transform.position;
            if (i == 0)
            {
                obj_step = step;
             }
            SpriteRenderer sp = step.GetComponent<SpriteRenderer>();
            if(nowAge==1)
            {
                sp.color = new Color(sp.color.r, sp.color.g, sp.color.b, 0);
            }
            
            MapObjects.Add(step);
        }

    }


    public void PlayAnimation(Action callBack)
    {
        int i = 0;
        foreach (GameObject obj in MapObjects)
        {
            i = i + 1;
            SpriteRenderer sp = obj.GetComponent<SpriteRenderer>();
            DoTweenBridge.To(0, 1, 1, (float a) => {
                Color color = sp.color;
                color.a = a;
                sp.color = color;
            }, () => {
                if(i== MapObjects.Count)
                {
                    callBack?.Invoke();
                }
            });
        }
    }

    public float NextDouble(System.Random ran, float minValue, float maxValue)
    {
        return (float)(ran.NextDouble() * (maxValue - minValue) + minValue);
    }

    public Vector3 GetNextPosition(int step)
    {
        Vector3 pos1 = new Vector3();
        float z = UnityEngine.Random.Range(step, step + 2);
        float x = UnityEngine.Random.Range(-2,2);
        float y = 0;

        pos1.x = x;
        pos1.z = z-4;
        return pos1;
    }



    /// <summary>
    /// 创建下一步需要跳跃的地方
    /// </summary>
    /// <param name="vector3"></param>
    /// <param name="type"></param>
    /// <returns></returns>
    public GameObject CreateStep(Vector3 vector3 ,int type)
    {
        GameObject obj = GetStep();
        if(obj==null)
        {
            obj = Instantiate(CloneCell, GameRoot.transform);
            keyValuePairs.Add(obj);
        }
        vector3.y = 1;// todo
        // todo 这边需要一个出场动画
        obj.transform.position = vector3;
        obj.transform.localScale = new Vector3(1, 1, 1);
        obj.SetActive(true);    
        return obj;
    }

    /// <summary>
    /// 移动根节点
    /// </summary>
    /// <param name="vector3"></param>
    /// <param name="duration"></param>
    /// <param name="completeHandle"></param>
    public void MoveStepRoot( float duration,Action completeHandle)
    {
        Sequence quence = DOTween.Sequence();
        Vector3 _vector31 = cremaGameObject.transform.position;
        _vector31.z = role.transform.position.z+5.1f;
        quence.Append(cremaGameObject.transform.DOMove(_vector31, duration)).OnComplete(() => { completeHandle?.Invoke(); });
    }

    /// <summary>
    /// 判断物体是否在相机范围内（准备来说，是判断一个点是否在相机范围内）
    /// </summary>
    /// <param name="testCamera">相机</param>
    /// <param name="testGo">物体</param>
    /// <returns>是否在相机范围内</returns>
    private bool IsCameraVisible(Camera testCamera, GameObject testGo)
    {
        Vector3 viewPos = testCamera.WorldToViewportPoint(testGo.transform.position);
        if (viewPos.x > 0 && viewPos.x < 1)
        {
            if (viewPos.y > 0 && viewPos.y < 1)
            {
                if (viewPos.z >= testCamera.nearClipPlane && viewPos.z <= testCamera.farClipPlane)
                {
                    return true;
                }
            }
        }
        return false;
    }
}
