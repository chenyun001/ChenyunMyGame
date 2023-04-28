//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020/10/20 14:36:17
//Description: 
//=========================================

using System;
using System.Collections;
using System.IO;
using System.Runtime.InteropServices;
using DG.Tweening;
using MailingJoy.Core;
using MailingJoy.Core.Net;
using MailingJoy.Core.UIFramework;
using MailingJoy.Core.Utils;
using MailingJoy.Game.Models;
using UniRx;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using TMPro;
namespace MailingJoy.Game.Start
{
    public class StartScene : MonoBehaviour
    {
        public static StartScene Instance;
        

        public static float StayTime = 0;

        private void Awake()
        {
            Instance = this;
        }


        private void Start()
        {
#if LUADEBUG
            AppConst.LuaDebug = true;
#endif

            

            AppFacade.GetInstance().StartUp();
            Debugger.EnableLog = Application.platform == RuntimePlatform.WindowsEditor ||
                                 Application.platform == RuntimePlatform.OSXEditor;

        }

        public void OpenDownLoad()
        {
           //Image_progerss.gameObject.SetActive(true);
        }
        public void OpenMainView()
        {
            //MainView.gameObject.SetActive(true);
        }
        public void SetProgerssText(string ext)
        {
            //Text_progerss.text = ext;
        }

        public void SetProgerss(float value)
        {
            //Image_progerss.value = value;
        }
    }
}