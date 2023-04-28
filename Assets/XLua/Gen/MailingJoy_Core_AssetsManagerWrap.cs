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
    public class MailingJoyCoreAssetsManagerWrap 
    {
        public static void __Register(RealStatePtr L)
        {
			ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			System.Type type = typeof(MailingJoy.Core.AssetsManager);
			Utils.BeginObjectRegister(type, L, translator, 0, 6, 0, 0);
			
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "GetAsset", _m_GetAsset);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "GetAssets", _m_GetAssets);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "LoadSpriteFromAtlas", _m_LoadSpriteFromAtlas);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "LoadSprite", _m_LoadSprite);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "LoadPrefab", _m_LoadPrefab);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "Release", _m_Release);
			
			
			
			
			
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
					
					var gen_ret = new MailingJoy.Core.AssetsManager();
					translator.Push(L, gen_ret);
                    
					return 1;
				}
				
			}
			catch(System.Exception gen_e) {
				return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
			}
            return LuaAPI.luaL_error(L, "invalid arguments to MailingJoy.Core.AssetsManager constructor!");
            
        }
        
		
        
		
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_GetAsset(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                MailingJoy.Core.AssetsManager gen_to_be_invoked = (MailingJoy.Core.AssetsManager)translator.FastGetCSObj(L, 1);
            
            
			    int gen_param_count = LuaAPI.lua_gettop(L);
            
                if(gen_param_count >= 3&& (LuaAPI.lua_isnil(L, 2) || LuaAPI.lua_type(L, 2) == LuaTypes.LUA_TSTRING)&& translator.Assignable<System.Action<object, object[]>>(L, 3)&& (LuaTypes.LUA_TNONE == LuaAPI.lua_type(L, 4) || translator.Assignable<object>(L, 4))) 
                {
                    string _address = LuaAPI.lua_tostring(L, 2);
                    System.Action<object, object[]> _completeHandler = translator.GetDelegate<System.Action<object, object[]>>(L, 3);
                    object[] _param = translator.GetParams<object>(L, 4);
                    
                        var gen_ret = gen_to_be_invoked.GetAsset( _address, _completeHandler, _param );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                if(gen_param_count >= 2&& (LuaAPI.lua_isnil(L, 2) || LuaAPI.lua_type(L, 2) == LuaTypes.LUA_TSTRING)&& translator.Assignable<System.Action<object, object[]>>(L, 3)) 
                {
                    string _address = LuaAPI.lua_tostring(L, 2);
                    System.Action<object, object[]> _completeHandler = translator.GetDelegate<System.Action<object, object[]>>(L, 3);
                    
                        var gen_ret = gen_to_be_invoked.GetAsset( _address, _completeHandler );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                if(gen_param_count >= 1&& (LuaAPI.lua_isnil(L, 2) || LuaAPI.lua_type(L, 2) == LuaTypes.LUA_TSTRING)) 
                {
                    string _address = LuaAPI.lua_tostring(L, 2);
                    
                        var gen_ret = gen_to_be_invoked.GetAsset( _address );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
            return LuaAPI.luaL_error(L, "invalid arguments to MailingJoy.Core.AssetsManager.GetAsset!");
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_GetAssets(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                MailingJoy.Core.AssetsManager gen_to_be_invoked = (MailingJoy.Core.AssetsManager)translator.FastGetCSObj(L, 1);
            
            
			    int gen_param_count = LuaAPI.lua_gettop(L);
            
                if(gen_param_count == 4&& translator.Assignable<System.Collections.Generic.List<string>>(L, 2)&& translator.Assignable<System.Action<object>>(L, 3)&& translator.Assignable<System.Action<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<System.Collections.Generic.IList<object>>>>(L, 4)) 
                {
                    System.Collections.Generic.List<string> _keys = (System.Collections.Generic.List<string>)translator.GetObject(L, 2, typeof(System.Collections.Generic.List<string>));
                    System.Action<object> _completeHandler = translator.GetDelegate<System.Action<object>>(L, 3);
                    System.Action<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<System.Collections.Generic.IList<object>>> _allCompleteHandler = translator.GetDelegate<System.Action<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<System.Collections.Generic.IList<object>>>>(L, 4);
                    
                        var gen_ret = gen_to_be_invoked.GetAssets( _keys, _completeHandler, _allCompleteHandler );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                if(gen_param_count == 3&& translator.Assignable<System.Collections.Generic.List<string>>(L, 2)&& translator.Assignable<System.Action<object>>(L, 3)) 
                {
                    System.Collections.Generic.List<string> _keys = (System.Collections.Generic.List<string>)translator.GetObject(L, 2, typeof(System.Collections.Generic.List<string>));
                    System.Action<object> _completeHandler = translator.GetDelegate<System.Action<object>>(L, 3);
                    
                        var gen_ret = gen_to_be_invoked.GetAssets( _keys, _completeHandler );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                if(gen_param_count == 2&& translator.Assignable<System.Collections.Generic.List<string>>(L, 2)) 
                {
                    System.Collections.Generic.List<string> _keys = (System.Collections.Generic.List<string>)translator.GetObject(L, 2, typeof(System.Collections.Generic.List<string>));
                    
                        var gen_ret = gen_to_be_invoked.GetAssets( _keys );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
            return LuaAPI.luaL_error(L, "invalid arguments to MailingJoy.Core.AssetsManager.GetAssets!");
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_LoadSpriteFromAtlas(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                MailingJoy.Core.AssetsManager gen_to_be_invoked = (MailingJoy.Core.AssetsManager)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _atlas = LuaAPI.lua_tostring(L, 2);
                    string _spriteId = LuaAPI.lua_tostring(L, 3);
                    System.Action<UnityEngine.Sprite> _completeHandler = translator.GetDelegate<System.Action<UnityEngine.Sprite>>(L, 4);
                    
                        var gen_ret = gen_to_be_invoked.LoadSpriteFromAtlas( _atlas, _spriteId, _completeHandler );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_LoadSprite(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                MailingJoy.Core.AssetsManager gen_to_be_invoked = (MailingJoy.Core.AssetsManager)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _atlas = LuaAPI.lua_tostring(L, 2);
                    System.Action<UnityEngine.Sprite> _completeHandler = translator.GetDelegate<System.Action<UnityEngine.Sprite>>(L, 3);
                    
                        var gen_ret = gen_to_be_invoked.LoadSprite( _atlas, _completeHandler );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_LoadPrefab(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                MailingJoy.Core.AssetsManager gen_to_be_invoked = (MailingJoy.Core.AssetsManager)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    string _assetName = LuaAPI.lua_tostring(L, 2);
                    UnityEngine.Transform _transform = (UnityEngine.Transform)translator.GetObject(L, 3, typeof(UnityEngine.Transform));
                    System.Action<UnityEngine.GameObject> _completeHandler = translator.GetDelegate<System.Action<UnityEngine.GameObject>>(L, 4);
                    
                        var gen_ret = gen_to_be_invoked.LoadPrefab( _assetName, _transform, _completeHandler );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_Release(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                MailingJoy.Core.AssetsManager gen_to_be_invoked = (MailingJoy.Core.AssetsManager)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle _handle;translator.Get(L, 2, out _handle);
                    
                    gen_to_be_invoked.Release( _handle );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        
        
        
        
        
		
		
		
		
    }
}
