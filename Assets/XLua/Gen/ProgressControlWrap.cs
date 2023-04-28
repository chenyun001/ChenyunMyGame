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
    public class ProgressControlWrap 
    {
        public static void __Register(RealStatePtr L)
        {
			ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			System.Type type = typeof(ProgressControl);
			Utils.BeginObjectRegister(type, L, translator, 0, 1, 3, 3);
			
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "UpdateProgress", _m_UpdateProgress);
			
			
			Utils.RegisterFunc(L, Utils.GETTER_IDX, "Progress_contin", _g_get_Progress_contin);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "Progress_continEx", _g_get_Progress_continEx);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "hurtSpeed", _g_get_hurtSpeed);
            
			Utils.RegisterFunc(L, Utils.SETTER_IDX, "Progress_contin", _s_set_Progress_contin);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "Progress_continEx", _s_set_Progress_continEx);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "hurtSpeed", _s_set_hurtSpeed);
            
			
			Utils.EndObjectRegister(type, L, translator, null, null,
			    null, null, null);

		    Utils.BeginClassRegister(type, L, __CreateInstance, 2, 0, 0);
			Utils.RegisterFunc(L, Utils.CLS_IDX, "To", _m_To_xlua_st_);
            
			
            
			
			
			
			Utils.EndClassRegister(type, L, translator);
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int __CreateInstance(RealStatePtr L)
        {
            
			try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
				if(LuaAPI.lua_gettop(L) == 1)
				{
					
					var gen_ret = new ProgressControl();
					translator.Push(L, gen_ret);
                    
					return 1;
				}
				
			}
			catch(System.Exception gen_e) {
				return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
			}
            return LuaAPI.luaL_error(L, "invalid arguments to ProgressControl constructor!");
            
        }
        
		
        
		
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_To_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    float _from = (float)LuaAPI.lua_tonumber(L, 1);
                    float _to = (float)LuaAPI.lua_tonumber(L, 2);
                    float _duration = (float)LuaAPI.lua_tonumber(L, 3);
                    System.Action<float> _percentCallback = translator.GetDelegate<System.Action<float>>(L, 4);
                    System.Action _completeHandle = translator.GetDelegate<System.Action>(L, 5);
                    
                    ProgressControl.To( _from, _to, _duration, _percentCallback, _completeHandle );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_UpdateProgress(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                ProgressControl gen_to_be_invoked = (ProgressControl)translator.FastGetCSObj(L, 1);
            
            
			    int gen_param_count = LuaAPI.lua_gettop(L);
            
                if(gen_param_count == 3&& LuaTypes.LUA_TNUMBER == LuaAPI.lua_type(L, 2)&& LuaTypes.LUA_TNUMBER == LuaAPI.lua_type(L, 3)) 
                {
                    float _progress = (float)LuaAPI.lua_tonumber(L, 2);
                    float _hurtSpeedEx = (float)LuaAPI.lua_tonumber(L, 3);
                    
                    gen_to_be_invoked.UpdateProgress( _progress, _hurtSpeedEx );
                    
                    
                    
                    return 0;
                }
                if(gen_param_count == 2&& LuaTypes.LUA_TNUMBER == LuaAPI.lua_type(L, 2)) 
                {
                    float _progress = (float)LuaAPI.lua_tonumber(L, 2);
                    
                    gen_to_be_invoked.UpdateProgress( _progress );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
            return LuaAPI.luaL_error(L, "invalid arguments to ProgressControl.UpdateProgress!");
            
        }
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_Progress_contin(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                ProgressControl gen_to_be_invoked = (ProgressControl)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.Progress_contin);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_Progress_continEx(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                ProgressControl gen_to_be_invoked = (ProgressControl)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.Progress_continEx);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_hurtSpeed(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                ProgressControl gen_to_be_invoked = (ProgressControl)translator.FastGetCSObj(L, 1);
                LuaAPI.lua_pushnumber(L, gen_to_be_invoked.hurtSpeed);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_Progress_contin(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                ProgressControl gen_to_be_invoked = (ProgressControl)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.Progress_contin = (UnityEngine.UI.Image)translator.GetObject(L, 2, typeof(UnityEngine.UI.Image));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_Progress_continEx(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                ProgressControl gen_to_be_invoked = (ProgressControl)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.Progress_continEx = (UnityEngine.UI.Image)translator.GetObject(L, 2, typeof(UnityEngine.UI.Image));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_hurtSpeed(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                ProgressControl gen_to_be_invoked = (ProgressControl)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.hurtSpeed = (float)LuaAPI.lua_tonumber(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
		
		
		
		
    }
}
