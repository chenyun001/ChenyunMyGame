//=========================================
//Author: 洪金敏
//Create Date: 2019/01/03 15:44:47
//Description: 
//=========================================

using System;
using System.Collections.Generic;
using System.Linq;
using MailingJoy.Core;
using UnityEngine;
using MailingJoy.Utils;


namespace MailingJoy.Core
{
    public class LayerManager
    {
        private static LayerManager _instance;


        private static List<UILayer> _uiLayers = new List<UILayer>();

        private LayerManager()
        {
        }

        private Dictionary<string, Dictionary<UILayerEnum, UILayer>> UILayerDic;

        public void RegisterUILayer(string sceneName, UILayerEnum uiLayerEnum, UILayer uiLayer)
        {
            if (!_uiLayers.Contains(uiLayer))
                _uiLayers.Add(uiLayer);
            if (UILayerDic == null)
                UILayerDic = new Dictionary<string, Dictionary<UILayerEnum, UILayer>>();

            Dictionary<UILayerEnum, UILayer> dic = null;
            if (UILayerDic.TryGetValue(sceneName, out dic))
            {
                if (!dic.ContainsKey(uiLayerEnum))
                    dic.Add(uiLayerEnum, uiLayer);
            }
            else
            {
                UILayerDic.Add(sceneName, null);
                if (dic == null)
                    dic = new Dictionary<UILayerEnum, UILayer>();
                dic.Add(uiLayerEnum, uiLayer);
                UILayerDic[sceneName] = dic;
            }
        }

        public void ReleaseUILayer(string sceneName, UILayerEnum uiLayerEnum)
        {
            if (UILayerDic.TryGetValue(sceneName, out var dictionary))
            {
                if (dictionary.ContainsKey(uiLayerEnum))
                {
                    dictionary[uiLayerEnum] = null;
                    dictionary.Remove(uiLayerEnum);
                }
            }
        }

        public UILayer GetUILayer(string scene, UILayerEnum uiLayerEnum)
        {
            Dictionary<UILayerEnum, UILayer> dic = null;
            if (UILayerDic.TryGetValue(scene, out dic))
            {
                UILayer uiLayer;
                if (dic.TryGetValue(uiLayerEnum, out uiLayer))
                {
                    return uiLayer;
                }
                else
                {
                    return dic.TryGetValue(UILayerEnum.Default, out var layer) ? layer : null;
                }
            }

            return null;
        }

        public UILayer GetTopUILayer(string scene)
        {
            Dictionary<UILayerEnum, UILayer> dic = null;

            if (UILayerDic.TryGetValue(scene, out dic))
            {
                UILayer uiLayer;
                if (dic.TryGetValue(UILayerEnum.ThirdUILayer, out uiLayer))
                {
                    return uiLayer;
                }
                else
                {
                    if (dic.TryGetValue(UILayerEnum.SubUILayer, out uiLayer))
                    {
                        return uiLayer;
                    }
                    else
                    {
                        return dic[UILayerEnum.Default];
                    }
                }
            }

            return null;
        }

        public static RectTransform GetUILayerRect()
        {
            return _uiLayers.Count > 0 ? _uiLayers[0].UILayerRect : null;
        }


        public static LayerManager GetInstance()
        {
            if (_instance == null)
            {
                _instance = new LayerManager();
            }

            return _instance;
        }
    }
}