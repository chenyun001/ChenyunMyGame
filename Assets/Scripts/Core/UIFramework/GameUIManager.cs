//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-04 15:06:18
//Description: 
//=========================================

using System;
using System.Collections.Generic;
using MailingJoy.Core.UIFramework.ScreenBase;
using MailingJoy.Core.Utils;
using MailingJoy.Lua;
using UnityEngine;
using XLua;

namespace MailingJoy.Core.UIFramework
{
    public class GameUIManager : MonoSingleton<GameUIManager>
    {
        public GameObject UIRoot;
        public Camera UICamera { private set; get; }


        private Dictionary<Type, ScreenBase.ScreenBase> _typeScreens =
            new Dictionary<Type, ScreenBase.ScreenBase>();

        /// <summary>
        /// 用一个新的字典存储ScreenBase ui名字做Key
        /// </summary>
        private Dictionary<string, ScreenBase.ScreenBase> _typeScreensEx =
            new Dictionary<string, ScreenBase.ScreenBase>();

        private int _openUIOrder = 0;

        private List<ScreenBase.ScreenBase> _screenBases = new List<ScreenBase.ScreenBase>();

        protected override void Init()
        {
            base.Init();
            transform.position = new Vector3(10000, 0, 0);
            UIRoot = Instantiate(Resources.Load<GameObject>("UIRoot"), transform);
            UICamera = UIRoot.GetComponent<Canvas>().worldCamera;
            var threshold = (int) Mathf.Ceil(Screen.dpi / 25.0f);
            UnityEngine.EventSystems.EventSystem.current.pixelDragThreshold = threshold;
        }

        public ScreenBase.ScreenBase OpenUI(Type type, UIOpenScreenParameterBase param = null)
        {
            var sb = GetUI(type);
            _openUIOrder++;
            if (sb != null)
            {
                if (sb.CtrlBase != null && !sb.CtrlBase.CtrlCanvas.enabled)
                {
                    sb.CtrlBase.CtrlCanvas.enabled = true;
                }

                return sb;
            }

            sb = (ScreenBase.ScreenBase) Activator.CreateInstance(type, param);
            _typeScreens.Add(type, sb);
            sb.SetOpenOrder(_openUIOrder);
            _screenBases.Add(sb);
            return sb;
        }

        /// <summary>
        /// 重载UI打开接口 改成通过UI名字打开，这样就不需要重新写一个C#脚本了
        /// </summary>
        /// <param name="uiName"></param>
        /// <param name="param"></param>
        /// <returns></returns>
        public ScreenBase.ScreenBase OpenUI(string uiName, UIOpenScreenParameterBase param = null)
        {
            var sb = GetUI(uiName);
            _openUIOrder++;

            if (sb != null)
            {
                if (sb.CtrlBase != null && !sb.CtrlBase.CtrlCanvas.enabled)
                {
                    sb.CtrlBase.CtrlCanvas.enabled = true;
                }

                return sb;
            }

            sb = new ScreenBase.ScreenBase(uiName, param);
            _typeScreensEx.Add(uiName, sb);
            sb.SetOpenOrder(_openUIOrder);
            _screenBases.Add(sb);
            return sb;
        }

        /// <summary>
        /// UI创建时候自动处理的UI打开处理 一般不要手动调用
        /// </summary>
        /// <param name="sBase"></param>
        public void AddUI(ScreenBase.ScreenBase sBase)
        {
            sBase.PanelRoot.transform.SetParent(GetUIRootTransform());

            sBase.PanelRoot.transform.localPosition = Vector3.zero;
            sBase.PanelRoot.transform.localScale = Vector3.one;
            sBase.PanelRoot.transform.localRotation = Quaternion.identity;
            sBase.PanelRoot.name = sBase.PanelRoot.name.Replace("(Clone)", "");
        }

        public bool CloseUI(Type type)
        {
            var sb = GetUI(type);
            if (sb != null)
            {
                if (type == typeof(ScreenBase.ScreenBase))
                {
                    return false;
                }
                else
                {
                    sb.OnClose();
                    return true;
                }
            }

            return false;
        }

        /// <summary>
        /// 重载关闭UI界面 通过UI名字去关闭
        /// </summary>
        /// <param name="uiName"></param>
        /// <returns></returns>
        public bool CloseUI(string uiName)
        {
            var sb = GetUI(uiName);
            if (sb != null)
            {
                sb.OnClose();
                return true;
            }

            return false;
        }

        /// <summary>
        /// UI移除时候自动处理的接口 一般不要手动调用
        /// </summary>
        /// <param name="sBase"></param>
        public void RemoveUI(ScreenBase.ScreenBase sBase, string uiName)
        {
            if (_typeScreensEx.ContainsKey(uiName))
            {
                _typeScreensEx.Remove(uiName);
            }
            else if (_typeScreens.ContainsKey(sBase.GetType()))
            {
                _typeScreens.Remove(sBase.GetType());
            }

            _screenBases.Remove(sBase);
            if (_screenBases.Count > 0 && sBase.CtrlBase.ScreenPriority == ScreenPriority.PriorityLobbyForSystem)
            {
                _screenBases[^1].Resume();
            }

            sBase.Dispose();
        }

        private ScreenBase.ScreenBase GetUI(Type type)
        {
            if (!typeof(ScreenBase.ScreenBase).IsAssignableFrom(type))
            {
                return default;
            }

            if (_typeScreens.TryGetValue(type, out var sb))
            {
                return sb;
            }

            return null;
        }

        /// <summary>
        /// 重载 通过ui名字获取
        /// </summary>
        /// <param name="uiName"></param>
        /// <returns></returns>
        private ScreenBase.ScreenBase GetUI(string uiName)
        {
            if (_typeScreensEx.TryGetValue(uiName, out var sb))
            {
                return sb;
            }

            return null;
        }

        public TScreen GetUI<TScreen>() where TScreen : ScreenBase.ScreenBase
        {
            var type = typeof(TScreen);
            if (_typeScreens.TryGetValue(type, out var sb))
            {
                return (TScreen) sb;
            }

            return null;
        }

        #region 通用API

        //获取UIRoot节点
        public Transform GetUIRootTransform()
        {
            return UIRoot.transform;
        }

        public Camera GetUICamera()
        {
            return UICamera;
        }

        #endregion

        public void Battle()
        {
            UICamera.cullingMask = 32;
            foreach (var type in _typeScreens.Values)
            {
                type.PanelRoot.SetActive(false);
            }

            foreach (var type in _typeScreensEx.Values)
            {
                type.PanelRoot.SetActive(false);
            }
        }

        public void ExitBattle()
        {
            UICamera.cullingMask = 33;

            foreach (var type in _typeScreens.Values)
            {
                type.PanelRoot.SetActive(true);
            }

            foreach (var type in _typeScreensEx.Values)
            {
                type.PanelRoot.SetActive(true);
            }
        }

        public void CloseAllUI()
        {
            foreach (var obj in _typeScreens)
            {
                obj.Value.Dispose();
            }

            foreach (var obj in _typeScreensEx)
            {
                obj.Value.Dispose();
            }

            _typeScreens.Clear();
            _typeScreensEx.Clear();
        }
    }
}