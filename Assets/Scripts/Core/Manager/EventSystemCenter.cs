using System.Collections;
using System.Collections.Generic;

using UnityEngine;

namespace MailingJoy.Core
{
    public class EventHandlerArgs
    {
        public string type;

        public object[] objs;

        public EventHandlerArgs(string type)
        {
            this.type = type;
        }
        public EventHandlerArgs(string type, params object[] objs)
        {
            this.type = type;
            this.objs = objs;
        }
    }

    public class EventHandler
    {
        public delegate void Handler(EventHandlerArgs handlerArgs = null);
        public Handler handler;

        public void Invoke(EventHandlerArgs handlerArgs = null)
        {
            if(handler != null)
                handler.Invoke(handlerArgs);
        }
        public void Clear()
        {
            handler = null;
        }
        
    }

    public static class EventSystemCenter
    {
        
        private static Dictionary<string,EventHandler>  handlerDic = new Dictionary<string, EventHandler>();
        
        public static void AddListener(string eventName,EventHandler.Handler handler)
        {
            EventHandler _handler;
            if (!handlerDic.TryGetValue(eventName, out _handler))
            {
                _handler = new EventHandler();
                _handler.handler = handler;
                handlerDic.Add(eventName,_handler);
            }
            else
                handlerDic[eventName].handler += handler;

        }

        public static void RemoveListener(string eventName,EventHandler.Handler handler)
        {
            EventHandler _handler;
            if (handlerDic.TryGetValue(eventName, out _handler))
            {
                _handler.handler -= handler;
                if (_handler.handler == null)
                {
                    handlerDic[eventName] = null;
                    handlerDic.Remove(eventName);
                }
            }
        }
        public static void Dispatch(string eventName,params object[] argus)
        {
            EventHandler _handler;
            EventHandlerArgs handlerArgs;
            if (handlerDic.TryGetValue(eventName, out _handler))
            {
                if (argus == null)
                {
                    handlerArgs = new EventHandlerArgs(eventName);
                }
                else
                {
                    handlerArgs = new EventHandlerArgs(eventName,argus);
                }
                _handler.handler?.Invoke(handlerArgs);
            }
        }
        public static void Clear()
        {
            foreach (var value in handlerDic.Values)
            {
                value.Clear();
            }
            handlerDic.Clear();
        }
    }
}
