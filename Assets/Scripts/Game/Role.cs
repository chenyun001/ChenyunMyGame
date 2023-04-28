using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System;
using UnityEngine.UI;
using TMPro;
using MailingJoy.Core.Lua.Bridge;
using Spine.Unity;
public class Role : MonoBehaviour
{
    private SkeletonAnimation skeleton;
    public Transform role_spine;
    float timer;
    /// <summary>
    /// 能跳多远由这个值决定
    /// </summary>
    public float maxChargeTime ;
    /// <summary>
    /// 速度
    /// </summary>
    public float jumpPower;
    bool doJump;
    /// <summary>
    /// 屏幕中间到边框的宽度
    /// </summary>
    public float Winth = 4;
    /// <summary>
    /// 用于碰撞到边界的值
    /// </summary>
    public float leftLength = 10;
    /// <summary>
    /// 用于碰撞到边界的值
    /// </summary>
    public float rightLength = 10;
    public float JumpTimeSpeed = 150;
    public GameBattle gameBattle;
    public GameClick gameClick;
    private Vector3[] controlPoints; //曲线的控制点 ，最少三个，起点，弧度点，终点
    private Vector3[] localScaleV;
    public Vector3 lastPos = new Vector3();
    public Vector3 raton = new Vector3(0, 0, 0);
    private int _segmentNum = 50; //运动物体过程分的段数
    public TextMeshProUGUI role_Text;
    public bool isOnClick = false;
    public bool isGround = true;
    private float angelEx = 0;
    private int numIndex = 1;
    public int countP = 1;
    int count = 0;
    public Image slider;
    public float progerss = 1;
    public int HpValue = 5;// 玩家血量
    private float jumpLgenth = 0;
    public bool isGameStart = false;
    public bool isNotJmup = false;
    /// <summary>
    /// toto 
    /// </summary>
    public GameObject[] Map_planes;

   
    void Start()
    {
        controlPoints = new Vector3[3];
        localScaleV = new Vector3[3];
        localScaleV[0] = new Vector3(1, 1, 1);
        localScaleV[1] = new Vector3(2, 2, 2);
        localScaleV[2] = new Vector3(1, 1, 1);
        skeleton = role_spine.GetComponent<SkeletonAnimation>();
        //skeleton.
    }

    public void SetGameClick(GameClick _gameClick)
    {
        gameClick = _gameClick;
        gameClick.SetCallBackDown(() => { OnClickDown(); });
        gameClick.SetCallBackUp(() => { OnClickUp(); });
    }
    public void SetStepSlect()
    {
        foreach (GameObject obj in gameBattle.MapObjects)
        {
            Vector3 objPosition = obj.transform.position;
            GameObject sprite_select = obj.transform.Find("sprite_select").transform.gameObject;
            if (objPosition == transform.position)
            {
                sprite_select.SetActive(true);
            } else
            {
                sprite_select.SetActive(false);
            }
        }
    }

    public void SetGameBattle(GameBattle _gameBattle)
    {
        gameBattle = _gameBattle;
    }
    public void GameResSet()
    {
        isGameStart = false;
        Map_planes[0].transform.position = new Vector3(0,0, 24.32f);
        Map_planes[1].transform.position = new Vector3(0, 0, 0);
        Map_planes[2].transform.position = new Vector3(0, 0, -24.23f);
        transform.position = new Vector3(0, 0, -20);
    }
    public void OnClickDown()
    {
        if (doJump)
        {
            return;
        }
        countP = 1;
        progerss = 0;
        isOnClick = true;
        slider.transform.parent.gameObject.SetActive(true);
    }

    public void OnClickUp()
    {
        if (doJump)
        {
            return;
        }
        slider.transform.parent.gameObject.SetActive(false);
        isOnClick = false;
        doJump = true;
        timer = 0;
        Jump();
    }
    // Update is called once per frame
    void Update()
    {
        if (!isGameStart|| HpValue <= 0)
            return;
        if (isOnClick)
        {
            if (countP == 0)
            {
                progerss = progerss - 1;
                if (progerss == 0)
                {
                    countP = 1;
                }
            } else
            {
                progerss = progerss + 1;
                if (progerss == 100)
                {
                    countP = 0;
                }
            }
            slider.fillAmount = progerss / 100;
        }
        else
        {
            if (doJump != true)
            {
                if (count == 0)
                {
                    raton = raton + new Vector3(0, 1, 0);
                    if (raton.y == 90)
                    {
                        count = 1;
                    }
                }
                else
                {
                    raton = raton - new Vector3(0, 1, 0);
                    if (raton.y == -90)
                    {
                        count = 0;
                    }
                }
                transform.localRotation = Quaternion.Euler(raton);

            }

        }
    }

    private void LateUpdate()
    {
        slider.transform.parent.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z + 0.76f);// 跟随人物
        role_Text.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z + 0.5f);// 跟随人物
    }
    float GetSpeed(Vector3 dir, float lgenth)
    {
        Vector3 shuiPingDir = new Vector3(dir.x, 0, dir.z).normalized;
        float angle = Vector3.Angle(dir, shuiPingDir);
        float shuiPingSpeed = MathF.Cos(angle / 180 * MathF.PI);
        return lgenth / shuiPingSpeed;
    }
    /// <summary>
    /// 检测结果
    /// </summary>
    void CheckResoult()
    {
        skeleton.AnimationState.SetAnimation(0, "idle",
                   false);
        doJump = false;
        slider.fillAmount = 0;
        if (isGround)
        {
            if(isNotJmup== false)
            {
                HpValue = HpValue - 1;
                JumpFail();
            }else
            {
                // todo
            }
        }
        else
        {
            JumpSuccess();
            CheckMapMove();
            gameBattle.CheckCreateNextStep();
        }
        gameBattle.JumpEnd();
    }

    public void GameStartAnimation(Action callback)
    {
        transform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
        transform.position = new Vector3(0,0,gameBattle.obj_step.transform.position.z-5);
        DoTweenBridge.DoMoveJump(gameObject, gameBattle.obj_step.transform.position, 1, 1, 1.5f, callback);
    }


    void CheckMapMove()
    {
        GameObject moveObj = null;
        Vector3 MaxPos = Map_planes[0].transform.position;
        foreach (GameObject obj in Map_planes)
        {
            float lgenth = gameBattle.cremaGameObject.transform.position.z - obj.transform.position.z;
            if (lgenth>=24.23f)
            {
                moveObj = obj;
            }
            if(MaxPos.z < obj.transform.position.z)
            {
                MaxPos = obj.transform.position;
            }
        }
        if(moveObj)
        {
            moveObj.transform.position = new Vector3(0, 0, MaxPos.z + 24.23f);
        }
    }


    void JumpFail()
    {
        gameBattle.LianXuStep = 0;
        transform.position = lastPos;
    }
    void JumpSuccess()
    {
        gameBattle.LianXuStep = gameBattle.LianXuStep + 1;
        int getCount = (int)MathF.Floor(gameBattle.jumpCount * jumpLgenth * gameBattle.stepCount * gameBattle.LianXuStep);
        gameBattle.resoultCount = gameBattle.resoultCount + getCount;
        role_Text.text = "+" + getCount.ToString();
        role_Text.gameObject.SetActive(true);
        DoTweenBridge.DoTextScale(role_Text.gameObject, new Vector3(0.05f, 0.05f, 0), 1.5f, () => {
            role_Text.gameObject.SetActive(false);
        });
        SetStepSlect();
        gameBattle.MoveStepRoot(1, null);
    }

    void Jump()
    {
        skeleton.AnimationState.SetAnimation(0,"tiao1" ,
                   false);
        isNotJmup = false;
        timer = (progerss / 100) * maxChargeTime;
        Vector3 dir = transform.forward;
        Vector3 pos = dir * timer * jumpPower;

        foreach (GameObject obj in gameBattle.MapObjects)
        {
            Step step = obj.transform.GetComponent<Step>();
            Vector3 objPosition = obj.transform.position;
            Vector3 rolePosition = transform.position;
            objPosition.y = rolePosition.y;
            Vector3 vector31 = objPosition - rolePosition;
            float value = Vector3.Dot(vector31.normalized, transform.forward.normalized);

            if (value >= 0.95f) //判断方向是否一样
            {
                Vector3 vector33 = (transform.position + pos) - objPosition;
               
                if (vector33.magnitude <= step.radius+1)
                {
                    isGround = false;
                    jumpLgenth = (objPosition - transform.position).magnitude;
                     
                    DoJump(transform.position, objPosition);
                    return;
                }
            }
        }
        isGround = true;
        GetEndPos();
    }

    void GetEndPos()
    {
        Vector3 dir = transform.forward * timer * jumpPower;
        Vector3 endPos = transform.position + dir;
        if (dir.magnitude < 1.5)
        {
            isNotJmup = true;
            //todo 
            lastPos = transform.position;
            CheckResoult();
        }
        else
        {
            endPos.y = 0;
            DoJump(transform.position, endPos);
        }
        return;

        // 先屏蔽掉撞墙
        #region 撞墙
        //Vector3 leftDir = new Vector3(-1, 0, 0);
        //float dot = Vector3.Dot(transform.forward.normalized, leftDir.normalized);
        //if (dot > 0)
        //{
        //    float angle = Vector3.Angle(transform.forward.normalized, leftDir.normalized);
        //    float a = MathF.Abs(transform.position.x + Winth);
        //    float c = a / Mathf.Cos(angle * Mathf.Deg2Rad);
        //    if (dir.magnitude > c)
        //    {
        //        float b = c * Mathf.Sin(angle * Mathf.Deg2Rad);
        //        Vector3 midPos = new Vector3();
        //        midPos.x = -leftLength;
        //        midPos.y = 0;
        //        midPos.z = (transform.position.z + b);
        //        Vector3 endPosEx = new Vector3();
        //        float legnth = dir.magnitude - c;
        //        angelEx = (90 - angle);
        //        endPosEx.z = midPos.z + legnth * MathF.Cos(angelEx * Mathf.Deg2Rad);
        //        endPosEx.x = legnth * MathF.Sin(angelEx * Mathf.Deg2Rad) - Winth;
        //        endPosEx.y = 0;
        //        DoJump(transform.position, midPos, endPosEx);
        //    } else
        //    {
        //        if (dir.magnitude < 1.5)
        //        {

        //            //todo 
        //            lastPos = transform.position;
        //            CheckResoult();
        //        }
        //        else
        //        {
        //            endPos.y = 0;
        //            DoJump(transform.position, endPos);
        //        }

        //    }
        //}
        //else if (dot < 0)
        //{
        //    Vector3 rightDir = new Vector3(1, 0, 0);
        //    float angle = Vector3.Angle(transform.forward.normalized, rightDir.normalized);
        //    float a = MathF.Abs(transform.position.x - Winth);
        //    float c = a / Mathf.Cos(angle * Mathf.Deg2Rad);
        //    if (dir.magnitude > c)
        //    {
        //        float b = c * Mathf.Sin(angle * Mathf.Deg2Rad);
        //        Vector3 midPos = new Vector3();
        //        midPos.x = rightLength;
        //        midPos.y = 0;
        //        midPos.z = (transform.position.z + b);
        //        Vector3 endPosEx = new Vector3();
        //        float legnth = dir.magnitude - c;
        //        angelEx = (90 - angle);
        //        endPosEx.z = midPos.z + legnth * MathF.Cos(angelEx * Mathf.Deg2Rad);
        //        endPosEx.x = Winth - legnth * MathF.Sin(angelEx * Mathf.Deg2Rad);
        //        endPosEx.y = 0;
        //        DoJump(transform.position, midPos, endPosEx);
        //    } else
        //    {
        //        if (dir.magnitude < 1.5)
        //        {

        //            //todo 
        //            lastPos = transform.position;
        //            CheckResoult();
        //        }
        //        else
        //        {
        //            endPos.y = 0;
        //            DoJump(transform.position, endPos);
        //        }
        //    }
        //}
        //else
        //{
            
        //}
        #endregion
    }

    #region Jump
    Vector3 GetMidPosition(Vector3 startPos, Vector3 endPos)
    {
        Vector3 midPos = (startPos + endPos) / 2;
        midPos.y = (endPos - startPos).magnitude;
        return midPos;
    }

    void DoJump(Vector3 startPos, Vector3 endPos)
    {
        doJump = true;
        slider.transform.parent.gameObject.SetActive(false);
        lastPos = startPos;
        Vector3 endpos = endPos;
        endpos.y = 0;
        Vector3 role = transform.position;
        role.y = 0;
        Vector3 dir = (endpos - role).normalized;
        Vector3 forard = transform.forward;
        forard.y = 0;
        float angle = Vector3.Angle(forard.normalized, dir.normalized);
        Debug.Log(angle+ "----111-----angle----------------");
        float dot = Vector3.Angle(new Vector3(-1, 0, 0), dir.normalized);
        float dot1 = Vector3.Angle(new Vector3(-1, 0, 0), forard.normalized);
        Debug.Log(dot + "-----------dot---------------------");
        if ( dot > dot1)
        {
            transform.Rotate(new Vector3(0, angle, 0));
        }
        else
        {
            transform.Rotate(new Vector3(0, -angle, 0));

        }
        controlPoints[0] = startPos;
        controlPoints[1] = GetMidPosition(startPos, endPos);
        controlPoints[2] = endPos;
        moveGameObject(1);

    }

    void DoJump(Vector3 startPos, Vector3 midPos, Vector3 endPos)
    {
        doJump = true;
        foreach (GameObject obj in gameBattle.MapObjects)
        {
            Vector3 objPosition = obj.transform.position;
            Vector3 vector33 = endPos - objPosition;
            if (vector33.magnitude <= 2)
            {
                isGround = false;
                endPos = objPosition;
                jumpLgenth = (endPos - transform.position).magnitude;
                break;
            }
        }
        Vector3 endpos = midPos;
        endpos.y = 0;
        Vector3 role = transform.position;
        role.y = 0;
        Vector3 dir = (endpos - role).normalized;
        Vector3 forard = transform.forward;
        forard.y = 0;
        float angle = Vector3.Angle(forard.normalized, dir.normalized);
        Debug.Log(angle + "----111-----angle----------------");

        transform.Rotate(new Vector3(0, angle, 0));
        slider.transform.parent.gameObject.SetActive(false);
        lastPos = startPos;
        controlPoints[0] = startPos;
        controlPoints[1] = midPos;
        controlPoints[2] = endPos;
        moveGameObject(1);

    }

    void moveGameObject(float time)
    {
        numIndex = 1;
        time = 0.5f + MathF.Floor((progerss / 100) * 2);
        //progerss = 0;
        InvokeRepeating("setInterval", 0, time /JumpTimeSpeed);
    }
    void JumpEnd()
    { 
        if (isGround == true)
        {
            Invoke("CheckResoult", 0.5f);
        } else
        {
            Invoke("CheckResoult", 0.1f);
        }  
    }



    void setInterval()
    {
        int nodeIndex = 0;
        float t = numIndex / (float)_segmentNum;

        Vector3 pixel = CalculateCubicBezierPoint(t, controlPoints[nodeIndex],
            controlPoints[nodeIndex + 1], controlPoints[nodeIndex + 2]);

        Vector3 localScale = CalculateCubicBezierPoint(t, localScaleV[nodeIndex],
            localScaleV[nodeIndex + 1], localScaleV[nodeIndex + 2]);
        
        if(t >= 0.3f&& t <= 0.7f)
        {
            skeleton.AnimationState.SetAnimation(0, "tiao2",
                   false);

        }else
        {
            skeleton.AnimationState.SetAnimation(0, "tiao3",
                   false);
        }

        // 先屏蔽掉
        //if (t == 0.5f && (controlPoints[nodeIndex + 1].x == -leftLength || controlPoints[nodeIndex + 1].x == rightLength))
        //{
        //    Vector3 endpos = controlPoints[nodeIndex + 2];
        //    endpos.y = 0;
        //    Vector3 role = transform.position;
        //    role.y = 0;
        //    Vector3 dir = (endpos - role).normalized;
        //    Vector3 forard = transform.forward;
        //    forard.y = 0;
        //    float angle = Vector3.Angle(forard.normalized,dir.normalized);
        //    float dot = Vector3.Angle(new Vector3(-1,0,0), dir.normalized);
           
        //    if (angle>0)
        //    {
        //        if (dot < 90)
        //        {
        //            transform.Rotate(new Vector3(0, -2*angelEx, 0));
        //        }
        //        else
        //        {
        //            transform.Rotate(new Vector3(0,2* angelEx, 0));

        //        }
                
        //    }
        //}

        transform.position = pixel;
        transform.localScale = localScale;
        numIndex++;
        if (numIndex > _segmentNum)
        {
            JumpEnd();
            CancelInvoke("setInterval");
        }
    }

    Vector3 CalculateCubicBezierPoint(float t, Vector3 p0, Vector3 p1, Vector3 p2)
    {
        float u = 1 - t;
        float tt = t * t;
        float uu = u * u;
        Vector3 p = uu * p0;
        p += 2 * u * t * p1;
        p += tt * p2;
        return p;
    }
    #endregion

}
