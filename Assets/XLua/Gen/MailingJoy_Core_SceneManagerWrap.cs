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
    public class MailingJoyCoreSceneManagerWrap 
    {
        public static void __Register(RealStatePtr L)
        {
			ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			System.Type type = typeof(MailingJoy.Core.SceneManager);
			Utils.BeginObjectRegister(type, L, translator, 0, 1, 0, 0);
			
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "ChangeScene", _m_ChangeScene);
			
			
			
			
			
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
					
					var gen_ret = new MailingJoy.Core.SceneManager();
					translator.Push(L, gen_ret);
                    
					return 1;
				}
				
			}
			catch(System.Exception gen_e) {
				return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
			}
            return LuaAPI.luaL_error(L, "invalid arguments to MailingJoy.Core.SceneManager constructor!");
            
        }
        
		
        
		
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_ChangeScene(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                MailingJoy.Core.SceneManager gen_to_be_invoked = (MailingJoy.Core.SceneManager)translator.FastGetCSObj(L, 1);
            
            
			    int gen_param_count = LuaAPI.lua_gettop(L);
            
                if(gen_param_count == 5&& translator.Assignable<MailingJoy.Core.Enums.SceneType>(L, 2)&& translator.Assignable<UnityEngine.SceneManagement.LoadSceneMode>(L, 3)&& translator.Assignable<System.Action<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>>(L, 4)&& LuaTypes.LUA_TBOOLEAN == LuaAPI.lua_type(L, 5)) 
                {
                    MailingJoy.Core.Enums.SceneType _sceneType;translator.Get(L, 2, out _sceneType);
                    UnityEngine.SceneManagement.LoadSceneMode _loadSceneMode;translator.Get(L, 3, out _loadSceneMode);
                    System.Action<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> _cb = translator.GetDelegate<System.Action<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>>(L, 4);
                    bool _isActive = LuaAPI.lua_toboolean(L, 5);
                    
                    gen_to_be_invoked.ChangeScene( _sceneType, _loadSceneMode, _cb, _isActive );
                    
                    
                    
                    return 0;
                }
                if(gen_param_count == 4&& translator.Assignable<MailingJoy.Core.Enums.SceneType>(L, 2)&& translator.Assignable<UnityEngine.SceneManagement.LoadSceneMode>(L, 3)&& translator.Assignable<System.Action<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>>(L, 4)) 
                {
                    MailingJoy.Core.Enums.SceneType _sceneType;translator.Get(L, 2, out _sceneType);
                    UnityEngine.SceneManagement.LoadSceneMode _loadSceneMode;translator.Get(L, 3, out _loadSceneMode);
                    System.Action<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> _cb = translator.GetDelegate<System.Action<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>>(L, 4);
                    
                    gen_to_be_invoked.ChangeScene( _sceneType, _loadSceneMode, _cb );
                    
                    
                    
                    return 0;
                }
                if(gen_param_count == 3&& translator.Assignable<MailingJoy.Core.Enums.SceneType>(L, 2)&& translator.Assignable<UnityEngine.SceneManagement.LoadSceneMode>(L, 3)) 
                {
                    MailingJoy.Core.Enums.SceneType _sceneType;translator.Get(L, 2, out _sceneType);
                    UnityEngine.SceneManagement.LoadSceneMode _loadSceneMode;translator.Get(L, 3, out _loadSceneMode);
                    
                    gen_to_be_invoked.ChangeScene( _sceneType, _loadSceneMode );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
            return LuaAPI.luaL_error(L, "invalid arguments to MailingJoy.Core.SceneManager.ChangeScene!");
            
        }
        
        
        
        
        
        
		
		
		
		
    }
}
