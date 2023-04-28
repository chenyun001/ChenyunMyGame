using System.Collections;
using System.Collections.Generic;
using MailingJoy.Lua;
using UnityEngine;
using XLua;

namespace MailingJoy.Game.DataContext
{
    public static class LanguageDataContext
    {

        private static LuaTable _data;

        public static LuaTable Data
        {
            get
            {
                if (_data == null)
                    _data = LuaEnvSingleton.LuaEnv.Global.Get<LuaTable>("languageData");
                return _data;
            }
        }

        [CSharpCallLua]
        public delegate string GetLanguageAction(LuaTable self, string key, params object[] param);

        private static GetLanguageAction _getLanguageAction;

        [CSharpCallLua]
        public static string GetLanguage(string key, params object[] param)
        {
            if (_getLanguageAction == null)
                _getLanguageAction = Data.Get<GetLanguageAction>("get_language");

            string str= _getLanguageAction?.Invoke(Data, key, param);

            if (str != null) return string.Format(str, param);
            else
            {
                return key;
            }
            
        }
        
        
    }
}
