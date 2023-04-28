/*
Author:hypnus
Create Date:20-05-21 04:23:36
*/


using System;
using MailingJoy.Core;
using MailingJoy.Manager;
using UnityEngine;
using UnityEngine.UI;
using XLua;
namespace Modules
{
    public class BasePanel : BaseView
    {
        
       private Image _blackImage;

       [SerializeField]
       //protected UIEffectCaller[] _uiEffectCallers;

       protected override void Awake()
       {
           base.Awake();
          
           _blackImage = transform.GetComponent<Image>();
           if (_blackImage == null)
           {
               _blackImage = gameObject.AddComponent<Image>();
               _blackImage.color = new Color(0f, 0f, 0f, 0.45f);

           }

       }

       protected override void Start()
       {
           base.Start();
           if (ModulesManager.LoadTime.ContainsKey(ModuleName))
           {
               ModulesManager.LoadTime.Remove(ModuleName);
           }
       }

      

       public override void OnPause()
       {
           //if (_uiEffectCallers != null)
           //{
           //    foreach (var uiCaller in _uiEffectCallers)
           //    {
           //        uiCaller.SetEffectDisappear();
           //    }
           //}
           
           base.OnPause();
       }

       public override void OnResume()
       {
           //if (_uiEffectCallers != null)
           //{
           //    foreach (var uiCaller in _uiEffectCallers)
           //    {
           //        uiCaller.ShowEffect();
           //    }
           //}
        
           base.OnResume();
       }
    }
}