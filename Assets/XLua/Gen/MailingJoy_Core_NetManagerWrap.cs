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
    public class MailingJoyCoreNetManagerWrap 
    {
        public static void __Register(RealStatePtr L)
        {
			ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			System.Type type = typeof(MailingJoy.Core.NetManager);
			Utils.BeginObjectRegister(type, L, translator, 0, 7, 0, 0);
			
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "Init", _m_Init);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "Connect", _m_Connect);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "LogOut", _m_LogOut);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "SendLua", _m_SendLua);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "Send", _m_Send);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "SendEmpty", _m_SendEmpty);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "CheckNetwork", _m_CheckNetwork);
			
			
			
			
			
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
					
					var gen_ret = new MailingJoy.Core.NetManager();
					translator.Push(L, gen_ret);
                    
					return 1;
				}
				
			}
			catch(System.Exception gen_e) {
				return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
			}
            return LuaAPI.luaL_error(L, "invalid arguments to MailingJoy.Core.NetManager constructor!");
            
        }
        
		
        
		
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_Init(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                MailingJoy.Core.NetManager gen_to_be_invoked = (MailingJoy.Core.NetManager)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                    gen_to_be_invoked.Init(  );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_Connect(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                MailingJoy.Core.NetManager gen_to_be_invoked = (MailingJoy.Core.NetManager)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _addr = LuaAPI.lua_tostring(L, 2);
                    int _port = LuaAPI.xlua_tointeger(L, 3);
                    
                    gen_to_be_invoked.Connect( _addr, _port );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_LogOut(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                MailingJoy.Core.NetManager gen_to_be_invoked = (MailingJoy.Core.NetManager)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                    gen_to_be_invoked.LogOut(  );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_SendLua(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                MailingJoy.Core.NetManager gen_to_be_invoked = (MailingJoy.Core.NetManager)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    int _cmd = LuaAPI.xlua_tointeger(L, 2);
                    byte[] _bytes = LuaAPI.lua_tobytes(L, 3);
                    
                    gen_to_be_invoked.SendLua( _cmd, _bytes );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_Send(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                MailingJoy.Core.NetManager gen_to_be_invoked = (MailingJoy.Core.NetManager)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    int _cmdId = LuaAPI.xlua_tointeger(L, 2);
                    byte[] _messageBody = LuaAPI.lua_tobytes(L, 3);
                    
                    gen_to_be_invoked.Send( _cmdId, _messageBody );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_SendEmpty(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                MailingJoy.Core.NetManager gen_to_be_invoked = (MailingJoy.Core.NetManager)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    int _cmdId = LuaAPI.xlua_tointeger(L, 2);
                    
                    gen_to_be_invoked.SendEmpty( _cmdId );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_CheckNetwork(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                MailingJoy.Core.NetManager gen_to_be_invoked = (MailingJoy.Core.NetManager)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                    gen_to_be_invoked.CheckNetwork(  );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        
        
        
        
        
		
		
		
		
    }
}
