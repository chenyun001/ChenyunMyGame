using System;
using Core;
using MailingJoy.Lua;
using Model;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using XLua;

namespace Modules.MainScene
{
    public class BtnFunc : LuaBehaviour, IPointerUpHandler, IPointerDownHandler
    {
        private GameObject _redPoint;
        private Button _btn;

        public int functionId;

        [SerializeField] private bool _lockBlack = false;

        /// <summary>
        ///     绑定的模块
        /// </summary>
        public string module = "";

        private bool open;


        public bool ActiveShow;

        [SerializeField] private Text _lockText;

        private Action<LuaTable> _action;

        private float pointDownTime;

        protected override void Start()
        {
            ScriptEnv.Set("FunctionId", functionId);
            ScriptEnv.Set("ModuleName", module);
        }


        public void OnPointerDown(PointerEventData eventData)
        {
            pointDownTime = Time.realtimeSinceStartup;
        }

        public void OnPointerUp(PointerEventData eventData)
        {

            pointDownTime = Time.realtimeSinceStartup - pointDownTime;

            if (ScriptEnv != null)
            {
                _action = ScriptEnv.Get<Action<LuaTable>>("on_click");
            }

            if (pointDownTime < 0.2f&&eventData.dragging==false)
                _action?.Invoke(ScriptEnv);
        }
    }
}