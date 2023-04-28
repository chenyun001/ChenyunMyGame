using System.Collections.Generic;
using MailingJoy.Game.DataContext;
using MailingJoy.Manager;
using Modules;
using UnityEngine;
using UnityEngine.AddressableAssets;
using SceneManager = UnityEngine.SceneManagement.SceneManager;

namespace MailingJoy.Core
{
    public class ModulesManager : SingletonBase<ModulesManager>
    {
        /// <summary>
        ///     已经打开了的模块 防止连续重复开启多个
        /// </summary>
        private readonly Dictionary<string, List<string>> _openedModuleName = new Dictionary<string, List<string>>();

        /// <summary>
        ///     窗口堆栈
        /// </summary>
        private readonly Dictionary<string, Stack<BaseView>> _panelStackDic =
            new Dictionary<string, Stack<BaseView>>();

        private string _nowScene = "Game";
        private string tempScene;

        public string NowScene
        {
            get
            {
                // _nowScene = UnityEngine.SceneManagement.SceneManager.GetActiveScene().name;
                return _nowScene;
            }
            set => _nowScene = value;
        }

        public static Dictionary<string, float> LoadTime = new Dictionary<string, float>();

        public void OpenPanel(string moduleName, UILayerEnum uiLayerEnum, params object[] args)
        {
            //// if (param == null)
            //// {
            ////     param = new object();
            //// }

            //if (!LoadTime.ContainsKey(moduleName))
            //{
            //    LoadTime.Add(moduleName, Time.realtimeSinceStartup);
            //}

            //// if (_openedModuleName[NowScene].IndexOf(moduleName) == -1)
            //{
            //    var prefabKey = ModuleDataContext.GetPrefabAddress(moduleName);
            //    if (null == prefabKey)
            //    {
            //        Debug.LogError($"{moduleName} 在 Module 表中没有对应配置");
            //        return;
            //    }

            //    var layer = LayerManager.GetInstance()
            //        .GetUILayer(UnityEngine.SceneManagement.SceneManager.GetActiveScene().name,
            //            uiLayerEnum)
            //        .GetLayer(ModuleDataContext.GetLayer(moduleName));

            //    // var layer = GameObject.Find("UILayer/Major").transform;
            //    GetPanel(moduleName, layer, args);
            //}
        }

        public bool IsOpen(string moduleName)
        {
            return _openedModuleName[_nowScene].Find(x => x == moduleName) != null;
        }

        public void ChangeScene(string nowScene)
        {
            if (_panelStackDic.ContainsKey(NowScene) && _panelStackDic[NowScene].Count > 0)
            {
                _panelStackDic[NowScene].Peek().OnPause();
            }

            NowScene = nowScene;

            if (_openedModuleName.ContainsKey(nowScene) == false)
            {
                _openedModuleName.Add(nowScene, new List<string>());
            }
            else
            {
                if (_panelStackDic.ContainsKey(nowScene) && _panelStackDic[nowScene].Count > 0)
                {
                    _panelStackDic[nowScene].Peek().OnResume();
                }
            }
        }

        private void OnPanelOpenHandler(BaseView openedView)
        {
            //var panelStack = _panelStackDic[_nowScene];

            ////如果是全屏界面 之前的顶层panel关闭显示
            //if (ModuleDataContext.IsFullScreen(openedView.ModuleName))
            //{
            //    if (panelStack.Count > 0)
            //    {
            //        var topPanel = panelStack.Peek();
            //        topPanel.gameObject.SetActive(false);
            //    }
            //    else //第一个全屏界面 关闭背后的主场景
            //    {
            //        // LayerManager.GetInstance().GetLayer(LayerEnum.BottomLayer).gameObject.SetActive(false);
            //    }
            //}

            //panelStack.Push(openedView);
        }


        public void PopPanel(string moduleName)
        {
            var currentSceneName = NowScene; // UnityEngine.SceneManagement.SceneManager.GetActiveScene().name;
            Stack<BaseView> panelStack;
            if (_panelStackDic.ContainsKey(currentSceneName))
            {
                panelStack = _panelStackDic[currentSceneName];
            }
            else
            {
                panelStack = new Stack<BaseView>();
            }

            BaseView topPanel;

            var openModuleListIndex = _openedModuleName[NowScene].LastIndexOf(moduleName);

            if (openModuleListIndex != -1)
            {
                _openedModuleName[NowScene].RemoveAt(openModuleListIndex);
            }

            if (panelStack.Count > 0)
            {
                if (panelStack.Peek().ModuleName == moduleName)
                {
                    topPanel = panelStack.Pop();
                    topPanel.OnExit();
                    Addressables.ReleaseInstance(topPanel.gameObject);
                }
                else
                {
                    return;
                }
            }

            //堆栈内还有面板的话 把最顶层的打开
            if (panelStack.Count > 0)
            {
                topPanel = panelStack.Peek();
                topPanel.gameObject.SetActive(true);
                topPanel.OnResume();
            }

            // if (panelStack.Count <= 2)
            //     LayerManager.GetInstance().GetLayer(LayerEnum.BottomLayer).gameObject.SetActive(true);
            _panelStackDic[currentSceneName] = panelStack;
        }

        public void Clear()
        {
            while (_panelStackDic[_nowScene].Count > 0)
            {
                var panel = _panelStackDic[_nowScene].Pop();
                panel.OnExit();
                Addressables.ReleaseInstance(panel.gameObject);
            }

            _panelStackDic[_nowScene].Clear();
            _openedModuleName[_nowScene].Clear();
        }

        private void
            GetPanel(string moduleName, Transform layer,
                params object[] args) //string moduleName, Transform layer, object param)
        {
            if (LoadTime.ContainsKey(moduleName))
            {
                LoadTime[moduleName] = Time.realtimeSinceStartup;
            }

            Stack<BaseView> panelStack;
            if (_panelStackDic.ContainsKey(NowScene))
            {
                panelStack = _panelStackDic[NowScene];
            }
            else
            {
                _panelStackDic.Add(NowScene, null);
                panelStack = new Stack<BaseView>();
            }

            if (panelStack.Count > 0)
            {
                var topPanel = panelStack.Peek();
                topPanel.OnPause();
            }

            //var prefabKey = ModuleDataContext.GetPrefabAddress(moduleName);
            //Addressables.InstantiateAsync(prefabKey, layer).Completed += handler =>
            //{
            //    var inst = handler.Result;
            //    var panel = inst.GetComponent<BaseView>();
            //    panel.ModuleName = moduleName;
            //    panelStack.Push(panel);
            //    _panelStackDic[NowScene] = panelStack;
            //    if (!_openedModuleName.ContainsKey(NowScene))
            //    {
            //        _openedModuleName.Add(NowScene, new List<string>());
            //    }
            //    else
            //    {
            //        _openedModuleName[NowScene].Add(moduleName);
            //    }

            //    // panel.OnOpenCompleteEvent += OnPanelOpenHandler;
            //    panel.OnEnter(args);
            //};
        }
    }
}