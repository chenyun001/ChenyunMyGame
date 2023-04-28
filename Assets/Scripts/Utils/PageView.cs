using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;

/// <summary>
/// ����ҳ��Ч�� Ŀǰֻʵ���˹̶�ҳ���ġ� ��̬�Ŀ��Ժ����Ż���
/// </summary>
public class PageView : MonoBehaviour, IBeginDragHandler, IEndDragHandler
{
    private ScrollRect rect;
    private float targethorizontal = 0;
    private List<float> posList = new List<float>();//������ͼƬ��λ��(0, 0.333, 0.666, 1) 
    private bool isDrag = true;
    private float startTime = 0;
    private float startDragHorizontal;
    private int curIndex = 0;
    public float speed = 4;      //�����ٶ�  
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
            posList.Add(_rectWidth * i / horizontalLength);   //������ͼƬ��λ��(0, 0.333, 0.666, 1) 
        }
        curIndex = 0;
    }

    void Update()
    {
        if (!isDrag)
        {
            startTime += Time.deltaTime;
            float t = startTime * speed;
            //���ٻ���Ч��
            rect.horizontalNormalizedPosition = Mathf.Lerp(rect.horizontalNormalizedPosition, targethorizontal, t);
        }
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        isDrag = true;
        //��ʼ�϶�
        startDragHorizontal = rect.horizontalNormalizedPosition;  //horizontalNormalizedPosition���������scrollRect�����ڼ�仯��x����ֵ���ڣ�0�� 1��֮��
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
            float offset = Mathf.Abs(posList[index] - posX) * offsetSensitivity;  //���㵱ǰλ�����һҳ��ƫ��������ʼ��offect
            for (int i = 1; i < posList.Count; i++)
            {    //����ҳǩ��ѡȡ��ǰxλ�ú�ÿҳƫ������С���Ǹ�ҳ��
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
            targethorizontal = posList[curIndex]; //���õ�ǰ���꣬���º������в�ֵ  
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
        targethorizontal = posList[curIndex]; //���õ�ǰ���꣬���º������в�ֵ  
        isDrag = false;
        startTime = 0;
    }
}
