using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;

/// <summary>
/// 滑动页面效果 目前只实现了固定页数的《 动态的可以后面优化》
/// </summary>
public class PageView : MonoBehaviour, IBeginDragHandler, IEndDragHandler
{
    private ScrollRect rect;
    private float targethorizontal = 0;
    private List<float> posList = new List<float>();//存四张图片的位置(0, 0.333, 0.666, 1) 
    private bool isDrag = true;
    private float startTime = 0;
    private float startDragHorizontal;
    private int curIndex = 0;
    public float speed = 4;      //滑动速度  
    public Action<int> EndDragCallBack;
    public float sensitivity = 20;
    public float offsetSensitivity = 0.5f;

    void Start()
    {
        rect = GetComponent<ScrollRect>();
        float horizontalLength = rect.content.rect.width - GetComponent<RectTransform>().rect.width;
        var _rectWidth = GetComponent<RectTransform>().rect.width;
        for (int i = 0; i < rect.content.transform.childCount; i++)
        {
            posList.Add(_rectWidth * i / horizontalLength);   //存四张图片的位置(0, 0.333, 0.666, 1) 
        }
        curIndex = 0;
    }

    void Update()
    {
        if (!isDrag)
        {
            startTime += Time.deltaTime;
            float t = startTime * speed;
            //加速滑动效果
            rect.horizontalNormalizedPosition = Mathf.Lerp(rect.horizontalNormalizedPosition, targethorizontal, t);
        }
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        isDrag = true;
        //开始拖动
        startDragHorizontal = rect.horizontalNormalizedPosition;  //horizontalNormalizedPosition这个参数是scrollRect滑动期间变化的x坐标值，在（0， 1）之间
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        //Debug.Log("OnEndDrag");
        float posX = rect.horizontalNormalizedPosition;
        Debug.Log(rect.velocity.x+ "rect.velocity.x");
       
        if (rect.velocity.x < -sensitivity)
        {
            if(curIndex < rect.content.transform.childCount-1)
            {
                curIndex = curIndex + 1;
            }
        }
        else  if(rect.velocity.x > sensitivity)
        {
            if (curIndex > 0)
            {
                curIndex = curIndex - 1;
            }

        }
        else
        {
            int index = 0;
            float offset = Mathf.Abs(posList[index] - posX) * offsetSensitivity;  //计算当前位置与第一页的偏移量，初始化offect
            for (int i = 1; i < posList.Count; i++)
            {    //遍历页签，选取当前x位置和每页偏移量最小的那个页面
                float temp = Mathf.Abs(posList[i] - posX);
                if (temp < offset)
                {
                    index = i;
                    offset = temp;
                }
            }
            curIndex = index;
        }
        startTime = 0;
        isDrag = false;
        if (posList[curIndex]!= null)
        {
            targethorizontal = posList[curIndex]; //设置当前坐标，更新函数进行插值  
            EndDragCallBack?.Invoke(curIndex);
        }
    }

    public void SetEndDragCallBack(Action<int> action)
    {
        EndDragCallBack = action;
    }
    public void pageTo(int index)
    {
        curIndex = index;
        targethorizontal = posList[curIndex]; //设置当前坐标，更新函数进行插值  
        isDrag = false;
        startTime = 0;
    }
}
