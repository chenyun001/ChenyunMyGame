﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class CameraControl : MonoBehaviour
{


    public GameObject Target;

    private CameraOffset Offset;
    private Transform TargetTransform;
    bool isInit = false;
    // Use this for initialization
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void SetTarget(GameObject target)
    {
        Target = target;
        Offset = Target.GetComponent<CameraOffset>();
        TargetTransform = Offset.transform;
       
    }

    void LateUpdate()
    {
        if(Target==null)
        {
            return;
        }
        Vector3 pos = Offset.CameraPosition;
        transform.position = Vector3.Lerp(transform.position, pos, Time.deltaTime * 4);
        //if(isInit==false)
        //{
        //    isInit = true;
           
        //}
        Offset.setPos(new Vector3(0, 0, -3));
        Vector3 dir = transform.forward;
        dir.y = 0;
        dir.Normalize();
        Vector3 t = TargetTransform.position;
        t += dir * 0.7f;

        Vector3 lookAt = t - transform.position;
        lookAt.Normalize();

        transform.forward = Vector3.Lerp(transform.forward, lookAt, Time.deltaTime * 4);
    }

}

