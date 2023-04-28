/*
Author:hypnus
Create Date:20-06-22 06:40:49
*/

using System;
using System.Data;
using MailingJoy.Lua;
using PureMVC.Interfaces;
using PureMVC.Patterns.Command;
using UnityEngine;

namespace GameBase
{
    public class SendCommandToLua : SimpleCommand
    {
        
        private static Action<string, object> _luaAction;

        public override void Execute(INotification notification)
        {
            if (_luaAction == null)
                _luaAction = LuaEnvSingleton.LuaEnv.Global.Get<Action<string, object>>("receive_mvc_event");
            
            _luaAction.Invoke(notification.Type,notification.Body);
        }
    }
}