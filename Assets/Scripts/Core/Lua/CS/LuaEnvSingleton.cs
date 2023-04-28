//=========================================
//Author: 洪金敏
//Create Date: 2019/01/11 19:55:15
//Description: 
//=========================================

using XLua;

namespace MailingJoy.Lua
{
    public class LuaEnvSingleton
    {
        private static LuaEnv _luaEnv = new LuaEnv();
        public static float LastGcTime = 0;
        public const float GcInterval = 5f; //5 second 

        public static void Init()
        {
           
        }

        public static void AddLoader(LuaEnv.CustomLoader loader)
        {
            _luaEnv.AddLoader(loader);
        }

        public static object[] DoString(string chunk, string chunkName = "chunk", LuaTable env = null)
        {
            return _luaEnv.DoString(chunk, chunkName, env);
        }

        public static LuaEnv LuaEnv => _luaEnv;

        public static void Dispose()
        {
            if (_luaEnv != null)
            {
                _luaEnv.Dispose();
                _luaEnv = null;
            }
        }
    }
}