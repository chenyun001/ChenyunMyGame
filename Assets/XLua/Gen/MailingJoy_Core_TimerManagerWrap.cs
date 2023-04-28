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
    public class MailingJoyCoreTimerManagerWrap 
    {
        public static void __Register(RealStatePtr L)
        {
			ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			System.Type type = typeof(MailingJoy.Core.TimerManager);
			Utils.BeginObjectRegister(type, L, translator, 0, 2, 0, 0);
			
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "Register", _m_Register);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "Cancel", _m_Cancel);
			
			
			
			
			
			Utils.EndObjectRegister(type, L, translator, null, null,
			    null, null, null);

		    Utils.BeginClassRegister(type, L, __CreateInstance, 1, 0, 0);
			
			
            
			
			
			
			Utils.EndClassRegister(type, L, translator);
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int __CreateInstance(RealStatePtr L)
        {
            
			try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
				if(LuaAPI.lua_gettop(L) == 1)
				{
					
					var gen_ret = new MailingJoy.Core.TimerManager();
					translator.Push(L, gen_ret);
                    
					return 1;
				}
				
			}
			catch(System.Exception gen_e) {
				return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
			}
            return LuaAPI.luaL_error(L, "invalid arguments to MailingJoy.Core.TimerManager constructor!");
            
        }
        
		
        
		
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_Register(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                MailingJoy.Core.TimerManager gen_to_be_invoked = (MailingJoy.Core.TimerManager)translator.FastGetCSObj(L, 1);
            
            
			    int gen_param_count = LuaAPI.lua_gettop(L);
            
                if(gen_param_count == 5&& LuaTypes.LUA_TNUMBER == LuaAPI.lua_type(L, 2)&& translator.Assignable<MailingJoy.Core.TimerType>(L, 3)&& translator.Assignable<System.Action<float>>(L, 4)&& LuaTypes.LUA_TNUMBER == LuaAPI.lua_type(L, 5)) 
                {
                    float _time = (float)LuaAPI.lua_tonumber(L, 2);
                    MailingJoy.Core.TimerType _timerType;translator.Get(L, 3, out _timerType);
                    System.Action<float> _cb = translator.GetDelegate<System.Action<float>>(L, 4);
                    int _times = LuaAPI.xlua_tointeger(L, 5);
                    
                        var gen_ret = gen_to_be_invoked.Register( _time, _timerType, _cb, _times );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                if(gen_param_count == 4&& LuaTypes.LUA_TNUMBER == LuaAPI.lua_type(L, 2)&& translator.Assignable<MailingJoy.Core.TimerType>(L, 3)&& translator.Assignable<System.Action<float>>(L, 4)) 
                {
                    float _time = (float)LuaAPI.lua_tonumber(L, 2);
                    MailingJoy.Core.TimerType _timerType;translator.Get(L, 3, out _timerType);
                    System.Action<float> _cb = translator.GetDelegate<System.Action<float>>(L, 4);
                    
                        var gen_ret = gen_to_be_invoked.Register( _time, _timerType, _cb );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                if(gen_param_count == 3&& LuaTypes.LUA_TNUMBER == LuaAPI.lua_type(L, 2)&& translator.Assignable<MailingJoy.Core.TimerType>(L, 3)) 
                {
                    float _time = (float)LuaAPI.lua_tonumber(L, 2);
                    MailingJoy.Core.TimerType _timerType;translator.Get(L, 3, out _timerType);
                    
                        var gen_ret = gen_to_be_invoked.Register( _time, _timerType );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
            return LuaAPI.luaL_error(L, "invalid arguments to MailingJoy.Core.TimerManager.Register!");
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_Cancel(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                MailingJoy.Core.TimerManager gen_to_be_invoked = (MailingJoy.Core.TimerManager)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    MailingJoy.Core.Timer _timer = (MailingJoy.Core.Timer)translator.GetObject(L, 2, typeof(MailingJoy.Core.Timer));
                    
                    gen_to_be_invoked.Cancel( _timer );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        
        
        
        
        
		
		
		
		
    }
}
