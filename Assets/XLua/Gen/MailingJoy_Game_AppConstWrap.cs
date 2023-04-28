#if USE_UNI_LUA
using LuaAPI = UniLua.Lua;
using RealStatePtr = UniLua.ILuaState;
using LuaCSFunction = UniLua.CSharpFunctionDelegate;
#else
using LuaAPI = XLua.LuaDLL.Lua;
using RealStatePtr = System.IntPtr;
using LuaCSFunction = XLua.LuaDLL.lua_CSFunction;
#endif

using XLua;
using System.Collections.Generic;


namespace XLua.CSObjectWrap
{
    using Utils = XLua.Utils;
    public class MailingJoyGameAppConstWrap 
    {
        public static void __Register(RealStatePtr L)
        {
			ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			System.Type type = typeof(MailingJoy.Game.AppConst);
			Utils.BeginObjectRegister(type, L, translator, 0, 0, 0, 0);
			
			
			
			
			
			
			Utils.EndObjectRegister(type, L, translator, null, null,
			    null, null, null);

		    Utils.BeginClassRegister(type, L, __CreateInstance, 5, 11, 11);
			
			
            Utils.RegisterObject(L, translator, Utils.CLS_IDX, "DATA_FILE", MailingJoy.Game.AppConst.DATA_FILE);
            Utils.RegisterObject(L, translator, Utils.CLS_IDX, "ConfigPath", MailingJoy.Game.AppConst.ConfigPath);
            Utils.RegisterObject(L, translator, Utils.CLS_IDX, "ExcelPath", MailingJoy.Game.AppConst.ExcelPath);
            Utils.RegisterObject(L, translator, Utils.CLS_IDX, "BattleTickInterval", MailingJoy.Game.AppConst.BattleTickInterval);
            
			Utils.RegisterFunc(L, Utils.CLS_GETTER_IDX, "BattleMapConfigFolder", _g_get_BattleMapConfigFolder);
            Utils.RegisterFunc(L, Utils.CLS_GETTER_IDX, "BattleRoundConfigFolder", _g_get_BattleRoundConfigFolder);
            Utils.RegisterFunc(L, Utils.CLS_GETTER_IDX, "BattleMapScale", _g_get_BattleMapScale);
            Utils.RegisterFunc(L, Utils.CLS_GETTER_IDX, "StandardScreenWidth", _g_get_StandardScreenWidth);
            Utils.RegisterFunc(L, Utils.CLS_GETTER_IDX, "StandardScreenHeight", _g_get_StandardScreenHeight);
            Utils.RegisterFunc(L, Utils.CLS_GETTER_IDX, "ScreenWidth", _g_get_ScreenWidth);
            Utils.RegisterFunc(L, Utils.CLS_GETTER_IDX, "ScreenHeight", _g_get_ScreenHeight);
            Utils.RegisterFunc(L, Utils.CLS_GETTER_IDX, "deviceUniqueIdentifier", _g_get_deviceUniqueIdentifier);
            Utils.RegisterFunc(L, Utils.CLS_GETTER_IDX, "PlatformName", _g_get_PlatformName);
            Utils.RegisterFunc(L, Utils.CLS_GETTER_IDX, "LuaDebugPath", _g_get_LuaDebugPath);
            Utils.RegisterFunc(L, Utils.CLS_GETTER_IDX, "LuaDebug", _g_get_LuaDebug);
            
			Utils.RegisterFunc(L, Utils.CLS_SETTER_IDX, "BattleMapConfigFolder", _s_set_BattleMapConfigFolder);
            Utils.RegisterFunc(L, Utils.CLS_SETTER_IDX, "BattleRoundConfigFolder", _s_set_BattleRoundConfigFolder);
            Utils.RegisterFunc(L, Utils.CLS_SETTER_IDX, "BattleMapScale", _s_set_BattleMapScale);
            Utils.RegisterFunc(L, Utils.CLS_SETTER_IDX, "StandardScreenWidth", _s_set_StandardScreenWidth);
            Utils.RegisterFunc(L, Utils.CLS_SETTER_IDX, "StandardScreenHeight", _s_set_StandardScreenHeight);
            Utils.RegisterFunc(L, Utils.CLS_SETTER_IDX, "ScreenWidth", _s_set_ScreenWidth);
            Utils.RegisterFunc(L, Utils.CLS_SETTER_IDX, "ScreenHeight", _s_set_ScreenHeight);
            Utils.RegisterFunc(L, Utils.CLS_SETTER_IDX, "deviceUniqueIdentifier", _s_set_deviceUniqueIdentifier);
            Utils.RegisterFunc(L, Utils.CLS_SETTER_IDX, "PlatformName", _s_set_PlatformName);
            Utils.RegisterFunc(L, Utils.CLS_SETTER_IDX, "LuaDebugPath", _s_set_LuaDebugPath);
            Utils.RegisterFunc(L, Utils.CLS_SETTER_IDX, "LuaDebug", _s_set_LuaDebug);
            
			
			Utils.EndClassRegister(type, L, translator);
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int __CreateInstance(RealStatePtr L)
        {
            return LuaAPI.luaL_error(L, "MailingJoy.Game.AppConst does not have a constructor!");
        }
        
		
        
		
        
        
        
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_BattleMapConfigFolder(RealStatePtr L)
        {
		    try {
            
			    LuaAPI.lua_pushstring(L, MailingJoy.Game.AppConst.BattleMapConfigFolder);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_BattleRoundConfigFolder(RealStatePtr L)
        {
		    try {
            
			    LuaAPI.lua_pushstring(L, MailingJoy.Game.AppConst.BattleRoundConfigFolder);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_BattleMapScale(RealStatePtr L)
        {
		    try {
            
			    LuaAPI.lua_pushnumber(L, MailingJoy.Game.AppConst.BattleMapScale);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_StandardScreenWidth(RealStatePtr L)
        {
		    try {
            
			    LuaAPI.lua_pushnumber(L, MailingJoy.Game.AppConst.StandardScreenWidth);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_StandardScreenHeight(RealStatePtr L)
        {
		    try {
            
			    LuaAPI.lua_pushnumber(L, MailingJoy.Game.AppConst.StandardScreenHeight);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_ScreenWidth(RealStatePtr L)
        {
		    try {
            
			    LuaAPI.lua_pushnumber(L, MailingJoy.Game.AppConst.ScreenWidth);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_ScreenHeight(RealStatePtr L)
        {
		    try {
            
			    LuaAPI.lua_pushnumber(L, MailingJoy.Game.AppConst.ScreenHeight);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_deviceUniqueIdentifier(RealStatePtr L)
        {
		    try {
            
			    LuaAPI.lua_pushstring(L, MailingJoy.Game.AppConst.deviceUniqueIdentifier);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_PlatformName(RealStatePtr L)
        {
		    try {
            
			    LuaAPI.lua_pushstring(L, MailingJoy.Game.AppConst.PlatformName);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_LuaDebugPath(RealStatePtr L)
        {
		    try {
            
			    LuaAPI.lua_pushstring(L, MailingJoy.Game.AppConst.LuaDebugPath);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_LuaDebug(RealStatePtr L)
        {
		    try {
            
			    LuaAPI.lua_pushboolean(L, MailingJoy.Game.AppConst.LuaDebug);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_BattleMapConfigFolder(RealStatePtr L)
        {
		    try {
                
			    MailingJoy.Game.AppConst.BattleMapConfigFolder = LuaAPI.lua_tostring(L, 1);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_BattleRoundConfigFolder(RealStatePtr L)
        {
		    try {
                
			    MailingJoy.Game.AppConst.BattleRoundConfigFolder = LuaAPI.lua_tostring(L, 1);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_BattleMapScale(RealStatePtr L)
        {
		    try {
                
			    MailingJoy.Game.AppConst.BattleMapScale = (float)LuaAPI.lua_tonumber(L, 1);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_StandardScreenWidth(RealStatePtr L)
        {
		    try {
                
			    MailingJoy.Game.AppConst.StandardScreenWidth = (float)LuaAPI.lua_tonumber(L, 1);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_StandardScreenHeight(RealStatePtr L)
        {
		    try {
                
			    MailingJoy.Game.AppConst.StandardScreenHeight = (float)LuaAPI.lua_tonumber(L, 1);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_ScreenWidth(RealStatePtr L)
        {
		    try {
                
			    MailingJoy.Game.AppConst.ScreenWidth = (float)LuaAPI.lua_tonumber(L, 1);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_ScreenHeight(RealStatePtr L)
        {
		    try {
                
			    MailingJoy.Game.AppConst.ScreenHeight = (float)LuaAPI.lua_tonumber(L, 1);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_deviceUniqueIdentifier(RealStatePtr L)
        {
		    try {
                
			    MailingJoy.Game.AppConst.deviceUniqueIdentifier = LuaAPI.lua_tostring(L, 1);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_PlatformName(RealStatePtr L)
        {
		    try {
                
			    MailingJoy.Game.AppConst.PlatformName = LuaAPI.lua_tostring(L, 1);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_LuaDebugPath(RealStatePtr L)
        {
		    try {
                
			    MailingJoy.Game.AppConst.LuaDebugPath = LuaAPI.lua_tostring(L, 1);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_LuaDebug(RealStatePtr L)
        {
		    try {
                
			    MailingJoy.Game.AppConst.LuaDebug = LuaAPI.lua_toboolean(L, 1);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
		
		
		
		
    }
}
