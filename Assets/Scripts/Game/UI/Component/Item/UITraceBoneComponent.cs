using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Spine;
using Spine.Unity;
using UnityEngine;
using UnityEngine.UI;
public class UITraceBoneComponent : MonoBehaviour
{

    /*
     *build_01        左一
     *build_02        左二
     *build_03        左四
     *build_04        左三
     *build_05        左五
     */
    [SerializeField] private GameObject skeleton;
    [SerializeField] private string boneName;
    [SerializeField] private Vector3 offset;
    private Vector3 worldPos;
    private Bone bone;
    void Start()
    {
        var ani = skeleton.GetComponent<Spine.Unity.SkeletonGraphic>();
        bone = ani.Skeleton.FindBone(boneName);
/*
         
         */

    }
    void Update ()
    {
        // if (bone != null)
        // {
        //     bone.LocalToWorld(bone.x, bone.y, out worldPos.x, out worldPos.y);
        //     worldPos += offset;
        //     Vector3 pos = Camera.main.WorldToScreenPoint(worldPos);
        //     this.transform.localPosition = pos;
        // }
    }
}
