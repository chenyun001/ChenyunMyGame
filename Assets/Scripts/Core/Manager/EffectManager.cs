using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using XLua;


    /// <summary>
    ///  特效管理器
    /// </summary>
    [LuaCallCSharp]
    public class EffectManager : MonoBehaviour
    {
         public static EffectManager Instance;
    // Start is called before the first frame update
    private void Awake()
    {
        Instance = this;
    }
    void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {

        }
    }


 
