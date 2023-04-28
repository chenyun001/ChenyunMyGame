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
    public class MailingJoyCoreLuaBridgeDoTweenBridgeWrap 
    {
        public static void __Register(RealStatePtr L)
        {
			ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			System.Type type = typeof(MailingJoy.Core.Lua.Bridge.DoTweenBridge);
			Utils.BeginObjectRegister(type, L, translator, 0, 0, 0, 0);
			
			
			
			
			
			
			Utils.EndObjectRegister(type, L, translator, null, null,
			    null, null, null);

		    Utils.BeginClassRegister(type, L, __CreateInstance, 9, 0, 0);
			Utils.RegisterFunc(L, Utils.CLS_IDX, "To", _m_To_xlua_st_);
            Utils.RegisterFunc(L, Utils.CLS_IDX, "Line", _m_Line_xlua_st_);
            Utils.RegisterFunc(L, Utils.CLS_IDX, "DoMoveXYZ", _m_DoMoveXYZ_xlua_st_);
            Utils.RegisterFunc(L, Utils.CLS_IDX, "DoFade", _m_DoFade_xlua_st_);
            Utils.RegisterFunc(L, Utils.CLS_IDX, "DoScale", _m_DoScale_xlua_st_);
            Utils.RegisterFunc(L, Utils.CLS_IDX, "DoMoveJump", _m_DoMoveJump_xlua_st_);
            Utils.RegisterFunc(L, Utils.CLS_IDX, "DoTextScale", _m_DoTextScale_xlua_st_);
            Utils.RegisterFunc(L, Utils.CLS_IDX, "DoListsFade", _m_DoListsFade_xlua_st_);
            
			
            
			
			
			
			Utils.EndClassRegister(type, L, translator);
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int __CreateInstance(RealStatePtr L)
        {
            
			try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
				if(LuaAPI.lua_gettop(L) == 1)
				{
					
					var gen_ret = new MailingJoy.Core.Lua.Bridge.DoTweenBridge();
					translator.Push(L, gen_ret);
                    
					return 1;
				}
				
			}
			catch(System.Exception gen_e) {
				return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
			}
            return LuaAPI.luaL_error(L, "invalid arguments to MailingJoy.Core.Lua.Bridge.DoTweenBridge constructor!");
            
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
                    
                    MailingJoy.Core.Lua.Bridge.DoTweenBridge.To( _from, _to, _duration, _percentCallback, _completeHandle );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_Line_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    float _from = (float)LuaAPI.lua_tonumber(L, 1);
                    float _to = (float)LuaAPI.lua_tonumber(L, 2);
                    float _duration = (float)LuaAPI.lua_tonumber(L, 3);
                    System.Action<float> _percentCallback = translator.GetDelegate<System.Action<float>>(L, 4);
                    System.Action _completeHandle = translator.GetDelegate<System.Action>(L, 5);
                    
                    MailingJoy.Core.Lua.Bridge.DoTweenBridge.Line( _from, _to, _duration, _percentCallback, _completeHandle );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_DoMoveXYZ_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    UnityEngine.GameObject _obj = (UnityEngine.GameObject)translator.GetObject(L, 1, typeof(UnityEngine.GameObject));
                    float _x = (float)LuaAPI.lua_tonumber(L, 2);
                    float _y = (float)LuaAPI.lua_tonumber(L, 3);
                    float _z = (float)LuaAPI.lua_tonumber(L, 4);
                    float _duration = (float)LuaAPI.lua_tonumber(L, 5);
                    System.Action _completeHandle = translator.GetDelegate<System.Action>(L, 6);
                    
                    MailingJoy.Core.Lua.Bridge.DoTweenBridge.DoMoveXYZ( _obj, _x, _y, _z, _duration, _completeHandle );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_DoFade_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    UnityEngine.UI.Image _image = (UnityEngine.UI.Image)translator.GetObject(L, 1, typeof(UnityEngine.UI.Image));
                    float _value = (float)LuaAPI.lua_tonumber(L, 2);
                    float _duration = (float)LuaAPI.lua_tonumber(L, 3);
                    System.Action _completeHandle = translator.GetDelegate<System.Action>(L, 4);
                    
                    MailingJoy.Core.Lua.Bridge.DoTweenBridge.DoFade( _image, _value, _duration, _completeHandle );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_DoScale_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    UnityEngine.GameObject _obj = (UnityEngine.GameObject)translator.GetObject(L, 1, typeof(UnityEngine.GameObject));
                    float _scale = (float)LuaAPI.lua_tonumber(L, 2);
                    float _duration = (float)LuaAPI.lua_tonumber(L, 3);
                    System.Action _completeHandle = translator.GetDelegate<System.Action>(L, 4);
                    
                    MailingJoy.Core.Lua.Bridge.DoTweenBridge.DoScale( _obj, _scale, _duration, _completeHandle );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_DoMoveJump_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    UnityEngine.GameObject _obj = (UnityEngine.GameObject)translator.GetObject(L, 1, typeof(UnityEngine.GameObject));
                    UnityEngine.Vector3 _vector3;translator.Get(L, 2, out _vector3);
                    float _duration = (float)LuaAPI.lua_tonumber(L, 3);
                    float _scale = (float)LuaAPI.lua_tonumber(L, 4);
                    float _scaleUp = (float)LuaAPI.lua_tonumber(L, 5);
                    System.Action _completeHandle = translator.GetDelegate<System.Action>(L, 6);
                    
                    MailingJoy.Core.Lua.Bridge.DoTweenBridge.DoMoveJump( _obj, _vector3, _duration, _scale, _scaleUp, _completeHandle );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_DoTextScale_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
			    int gen_param_count = LuaAPI.lua_gettop(L);
            
                if(gen_param_count == 4&& translator.Assignable<UnityEngine.GameObject>(L, 1)&& LuaTypes.LUA_TNUMBER == LuaAPI.lua_type(L, 2)&& LuaTypes.LUA_TNUMBER == LuaAPI.lua_type(L, 3)&& translator.Assignable<System.Action>(L, 4)) 
                {
                    UnityEngine.GameObject _obj = (UnityEngine.GameObject)translator.GetObject(L, 1, typeof(UnityEngine.GameObject));
                    float _scale = (float)LuaAPI.lua_tonumber(L, 2);
                    float _duration = (float)LuaAPI.lua_tonumber(L, 3);
                    System.Action _completeHandle = translator.GetDelegate<System.Action>(L, 4);
                    
                    MailingJoy.Core.Lua.Bridge.DoTweenBridge.DoTextScale( _obj, _scale, _duration, _completeHandle );
                    
                    
                    
                    return 0;
                }
                if(gen_param_count == 4&& translator.Assignable<UnityEngine.GameObject>(L, 1)&& translator.Assignable<UnityEngine.Vector3>(L, 2)&& LuaTypes.LUA_TNUMBER == LuaAPI.lua_type(L, 3)&& translator.Assignable<System.Action>(L, 4)) 
                {
                    UnityEngine.GameObject _obj = (UnityEngine.GameObject)translator.GetObject(L, 1, typeof(UnityEngine.GameObject));
                    UnityEngine.Vector3 _scale;translator.Get(L, 2, out _scale);
                    float _duration = (float)LuaAPI.lua_tonumber(L, 3);
                    System.Action _completeHandle = translator.GetDelegate<System.Action>(L, 4);
                    
                    MailingJoy.Core.Lua.Bridge.DoTweenBridge.DoTextScale( _obj, _scale, _duration, _completeHandle );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
            return LuaAPI.luaL_error(L, "invalid arguments to MailingJoy.Core.Lua.Bridge.DoTweenBridge.DoTextScale!");
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_DoListsFade_xlua_st_(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
            
                
                {
                    UnityEngine.UI.Image[] _images = (UnityEngine.UI.Image[])translator.GetObject(L, 1, typeof(UnityEngine.UI.Image[]));
                    float _value = (float)LuaAPI.lua_tonumber(L, 2);
                    float _duration = (float)LuaAPI.lua_tonumber(L, 3);
                    System.Action _completeHandle = translator.GetDelegate<System.Action>(L, 4);
                    
                    MailingJoy.Core.Lua.Bridge.DoTweenBridge.DoListsFade( _images, _value, _duration, _completeHandle );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        
        
        
        
        
		
		
		
		
    }
}
