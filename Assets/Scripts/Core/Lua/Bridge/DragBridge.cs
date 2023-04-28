using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;
using XLua;

namespace MailingJoy.Core.Lua.Bridge
{
    public class DragBridge
    {
        [CSharpCallLua]
        //声明回调的lua方法
        public delegate void LuaPointerEventDelegate(BaseEventData eventData);

        [LuaCallCSharp]
        public static void AddDragListener(Transform gameObject
            , LuaPointerEventDelegate beginDragCallback
            , LuaPointerEventDelegate dragCallback
            , LuaPointerEventDelegate endDragCallback)
        {
            //添加组件
            EventTrigger eventTrigger = gameObject.GetOrAddComponent<EventTrigger>();

            if (eventTrigger.triggers == null)
                eventTrigger.triggers = new List<EventTrigger.Entry>();
            //初始化队列
            EventTrigger.Entry entry = new EventTrigger.Entry
            {
                eventID = EventTriggerType.BeginDrag, //事件类型
                callback = new EventTrigger.TriggerEvent() //创建回调函数
            };


            //添加回调函数    
            entry.callback.AddListener((data) => { beginDragCallback(data); });
            EventTrigger.Entry entry2 = new EventTrigger.Entry
            {
                eventID = EventTriggerType.Drag, //事件类型
                callback = new EventTrigger.TriggerEvent() //创建回调函数
            };

            //添加回调函数    
            entry2.callback.AddListener((data) =>
            {
                dragCallback(data);
            });
            EventTrigger.Entry entry3 = new EventTrigger.Entry
            {
                eventID = EventTriggerType.EndDrag, //事件类型
                callback = new EventTrigger.TriggerEvent() //创建回调函数
            };

            //添加回调函数    
            entry3.callback.AddListener((data) => { endDragCallback(data); });


            //对事件系统的队列添加事件队列
            eventTrigger.triggers.Add(entry);
            eventTrigger.triggers.Add(entry2);
            eventTrigger.triggers.Add(entry3);
        }

        [LuaCallCSharp]
        public static void AddClickListener(Transform gameObject, LuaPointerEventDelegate pointer)
        {
            EventTrigger eventTrigger = gameObject.GetOrAddComponent<EventTrigger>();
            //创建队列
            if (eventTrigger.triggers == null)
                eventTrigger.triggers = new List<EventTrigger.Entry>();
            //初始化队列
            EventTrigger.Entry entry = new EventTrigger.Entry
            {
                eventID = EventTriggerType.PointerClick, //事件类型
                callback = new EventTrigger.TriggerEvent() //创建回调函数
            };

            entry.callback.AddListener((data) => { pointer(data); });

            eventTrigger.triggers.Add(entry);
        }
        
        [LuaCallCSharp]
        public static void AddPointDownListener(Transform gameObject, LuaPointerEventDelegate pointer)
        {
            EventTrigger eventTrigger = gameObject.GetOrAddComponent<EventTrigger>();
            //创建队列
            if (eventTrigger.triggers == null)
                eventTrigger.triggers = new List<EventTrigger.Entry>();
            //初始化队列
            EventTrigger.Entry entry = new EventTrigger.Entry
            {
                eventID = EventTriggerType.PointerDown, //事件类型
                callback = new EventTrigger.TriggerEvent() //创建回调函数
            };

            entry.callback.AddListener((data) => { pointer(data); });

            eventTrigger.triggers.Add(entry);
        }
        
        [LuaCallCSharp]
        public static void AddPointUpListener(Transform gameObject, LuaPointerEventDelegate pointer)
        {
            EventTrigger eventTrigger = gameObject.GetOrAddComponent<EventTrigger>();
            //创建队列
            if (eventTrigger.triggers == null)
                eventTrigger.triggers = new List<EventTrigger.Entry>();
            //初始化队列
            EventTrigger.Entry entry = new EventTrigger.Entry
            {
                eventID = EventTriggerType.PointerUp, //事件类型
                callback = new EventTrigger.TriggerEvent() //创建回调函数
            };

            entry.callback.AddListener((data) => { pointer(data); });

            eventTrigger.triggers.Add(entry);
        }


        public static Transform GetRayItem(string layerName)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if(Physics.Raycast (ray,out hit,int.MaxValue,1<<LayerMask.NameToLayer (layerName)))
            {
                return hit.transform;
            }
            else
            {
                return null;
            }
        }
        
        
    }
}