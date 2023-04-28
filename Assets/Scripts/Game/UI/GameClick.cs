using System.Collections;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using UnityEngine;
using System;
public class GameClick : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    public float Ping = 2.0f;
    private bool IsStart = false;
    private float LastTime = 0;
    private Action ActionDown;
    private Action ActionUp;
    public void OnPointerDown(PointerEventData eventData)
    {

        ActionDown?.Invoke();
        LongPress(true);
        Debug.Log("按下");
    }
    public void OnPointerUp(PointerEventData eventData)
    {
        if (IsStart)
        {
            LongPress(false);
            Debug.Log("抬起");
        }
        ActionUp?.Invoke();
    }
    void Update()
    {
        if (IsStart && Time.time - LastTime > Ping)
        {
            //Debug.Log("长按");
        }
    }

    public void LongPress(bool bStart)
    {
        IsStart = bStart;
        LastTime = Time.time;
    }
    public void SetCallBackDown(Action action)
    {
        ActionDown += action;
    }

    public void SetCallBackUp(Action action)
    {
        ActionUp += action;
    }

    void destory()
    {
        // todo
    }
}
