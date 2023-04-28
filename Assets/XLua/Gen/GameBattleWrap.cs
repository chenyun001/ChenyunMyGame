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
    public class GameBattleWrap 
    {
        public static void __Register(RealStatePtr L)
        {
			ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			System.Type type = typeof(GameBattle);
			Utils.BeginObjectRegister(type, L, translator, 0, 14, 20, 20);
			
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "SetStepToCache", _m_SetStepToCache);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "SetJumpEnd", _m_SetJumpEnd);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "JumpEnd", _m_JumpEnd);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "SetGameClick", _m_SetGameClick);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "CheckCreateNextStep", _m_CheckCreateNextStep);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "GetStep", _m_GetStep);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "SetMapData", _m_SetMapData);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "GameResSet", _m_GameResSet);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "CreateMap", _m_CreateMap);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "PlayAnimation", _m_PlayAnimation);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "NextDouble", _m_NextDouble);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "GetNextPosition", _m_GetNextPosition);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "CreateStep", _m_CreateStep);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "MoveStepRoot", _m_MoveStepRoot);
			
			
			Utils.RegisterFunc(L, Utils.GETTER_IDX, "CloneCell", _g_get_CloneCell);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "bottomPosition", _g_get_bottomPosition);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "GameRoot", _g_get_GameRoot);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "localPosition", _g_get_localPosition);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "role", _g_get_role);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "cremaGameObject", _g_get_cremaGameObject);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "plane", _g_get_plane);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "obj_step", _g_get_obj_step);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "gameClick", _g_get_gameClick);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "MapObjects", _g_get_MapObjects);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "JumpEndLua", _g_get_JumpEndLua);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "resoultCount", _g_get_resoultCount);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "MapPos", _g_get_MapPos);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "nowMapId", _g_get_nowMapId);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "jumpCount", _g_get_jumpCount);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "stepCount", _g_get_stepCount);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "LianXuStep", _g_get_LianXuStep);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "crateCurrentStep", _g_get_crateCurrentStep);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "MapLgenth", _g_get_MapLgenth);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "nowAge", _g_get_nowAge);
            
			Utils.RegisterFunc(L, Utils.SETTER_IDX, "CloneCell", _s_set_CloneCell);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "bottomPosition", _s_set_bottomPosition);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "GameRoot", _s_set_GameRoot);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "localPosition", _s_set_localPosition);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "role", _s_set_role);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "cremaGameObject", _s_set_cremaGameObject);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "plane", _s_set_plane);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "obj_step", _s_set_obj_step);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "gameClick", _s_set_gameClick);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "MapObjects", _s_set_MapObjects);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "JumpEndLua", _s_set_JumpEndLua);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "resoultCount", _s_set_resoultCount);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "MapPos", _s_set_MapPos);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "nowMapId", _s_set_nowMapId);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "jumpCount", _s_set_jumpCount);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "stepCount", _s_set_stepCount);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "LianXuStep", _s_set_LianXuStep);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "crateCurrentStep", _s_set_crateCurrentStep);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "MapLgenth", _s_set_MapLgenth);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "nowAge", _s_set_nowAge);
            
			
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
					
					var gen_ret = new GameBattle();
					translator.Push(L, gen_ret);
                    
					return 1;
				}
				
			}
			catch(System.Exception gen_e) {
				return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
			}
            return LuaAPI.luaL_error(L, "invalid arguments to GameBattle constructor!");
            
        }
        
		
        
		
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_SetStepToCache(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    UnityEngine.GameObject _obj = (UnityEngine.GameObject)translator.GetObject(L, 2, typeof(UnityEngine.GameObject));
                    
                    gen_to_be_invoked.SetStepToCache( _obj );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_SetJumpEnd(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    System.Action _action = translator.GetDelegate<System.Action>(L, 2);
                    
                    gen_to_be_invoked.SetJumpEnd( _action );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_JumpEnd(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                    gen_to_be_invoked.JumpEnd(  );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_SetGameClick(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    GameClick _click = (GameClick)translator.GetObject(L, 2, typeof(GameClick));
                    
                    gen_to_be_invoked.SetGameClick( _click );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_CheckCreateNextStep(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                    gen_to_be_invoked.CheckCreateNextStep(  );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_GetStep(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                        var gen_ret = gen_to_be_invoked.GetStep(  );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_SetMapData(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    int _id = LuaAPI.xlua_tointeger(L, 2);
                    
                    gen_to_be_invoked.SetMapData( _id );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_GameResSet(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                    gen_to_be_invoked.GameResSet(  );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_CreateMap(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                    gen_to_be_invoked.CreateMap(  );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_PlayAnimation(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    System.Action _callBack = translator.GetDelegate<System.Action>(L, 2);
                    
                    gen_to_be_invoked.PlayAnimation( _callBack );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_NextDouble(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    System.Random _ran = (System.Random)translator.GetObject(L, 2, typeof(System.Random));
                    float _minValue = (float)LuaAPI.lua_tonumber(L, 3);
                    float _maxValue = (float)LuaAPI.lua_tonumber(L, 4);
                    
                        var gen_ret = gen_to_be_invoked.NextDouble( _ran, _minValue, _maxValue );
                        LuaAPI.lua_pushnumber(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_GetNextPosition(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    int _step = LuaAPI.xlua_tointeger(L, 2);
                    
                        var gen_ret = gen_to_be_invoked.GetNextPosition( _step );
                        translator.PushUnityEngineVector3(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_CreateStep(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    UnityEngine.Vector3 _vector3;translator.Get(L, 2, out _vector3);
                    int _type = LuaAPI.xlua_tointeger(L, 3);
                    
                        var gen_ret = gen_to_be_invoked.CreateStep( _vector3, _type );
                        translator.Push(L, gen_ret);
                    
                    
                    
                    return 1;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_MoveStepRoot(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    float _duration = (float)LuaAPI.lua_tonumber(L, 2);
                    System.Action _completeHandle = translator.GetDelegate<System.Action>(L, 3);
                    
                    gen_to_be_invoked.MoveStepRoot( _duration, _completeHandle );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_CloneCell(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.CloneCell);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_bottomPosition(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.bottomPosition);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_GameRoot(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.GameRoot);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_localPosition(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.localPosition);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_role(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.role);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_cremaGameObject(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.cremaGameObject);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_plane(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.plane);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_obj_step(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.obj_step);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_gameClick(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.gameClick);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_MapObjects(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.MapObjects);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_JumpEndLua(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.JumpEndLua);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_resoultCount(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                LuaAPI.xlua_pushinteger(L, gen_to_be_invoked.resoultCount);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_MapPos(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.MapPos);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_nowMapId(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                LuaAPI.xlua_pushinteger(L, gen_to_be_invoked.nowMapId);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_jumpCount(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                LuaAPI.lua_pushnumber(L, gen_to_be_invoked.jumpCount);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_stepCount(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                LuaAPI.lua_pushnumber(L, gen_to_be_invoked.stepCount);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_LianXuStep(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                LuaAPI.xlua_pushinteger(L, gen_to_be_invoked.LianXuStep);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_crateCurrentStep(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                LuaAPI.xlua_pushinteger(L, gen_to_be_invoked.crateCurrentStep);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_MapLgenth(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                LuaAPI.xlua_pushinteger(L, gen_to_be_invoked.MapLgenth);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_nowAge(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                LuaAPI.xlua_pushinteger(L, gen_to_be_invoked.nowAge);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_CloneCell(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.CloneCell = (UnityEngine.GameObject)translator.GetObject(L, 2, typeof(UnityEngine.GameObject));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_bottomPosition(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.bottomPosition = (UnityEngine.GameObject)translator.GetObject(L, 2, typeof(UnityEngine.GameObject));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_GameRoot(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.GameRoot = (UnityEngine.GameObject)translator.GetObject(L, 2, typeof(UnityEngine.GameObject));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_localPosition(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.localPosition = (UnityEngine.GameObject)translator.GetObject(L, 2, typeof(UnityEngine.GameObject));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_role(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.role = (UnityEngine.GameObject)translator.GetObject(L, 2, typeof(UnityEngine.GameObject));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_cremaGameObject(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.cremaGameObject = (UnityEngine.GameObject)translator.GetObject(L, 2, typeof(UnityEngine.GameObject));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_plane(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.plane = (UnityEngine.GameObject)translator.GetObject(L, 2, typeof(UnityEngine.GameObject));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_obj_step(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.obj_step = (UnityEngine.GameObject)translator.GetObject(L, 2, typeof(UnityEngine.GameObject));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_gameClick(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.gameClick = (GameClick)translator.GetObject(L, 2, typeof(GameClick));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_MapObjects(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.MapObjects = (System.Collections.Generic.HashSet<UnityEngine.GameObject>)translator.GetObject(L, 2, typeof(System.Collections.Generic.HashSet<UnityEngine.GameObject>));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_JumpEndLua(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.JumpEndLua = translator.GetDelegate<System.Action>(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_resoultCount(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.resoultCount = LuaAPI.xlua_tointeger(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_MapPos(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.MapPos = (UnityEngine.Vector3[])translator.GetObject(L, 2, typeof(UnityEngine.Vector3[]));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_nowMapId(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.nowMapId = LuaAPI.xlua_tointeger(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_jumpCount(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.jumpCount = (float)LuaAPI.lua_tonumber(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_stepCount(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.stepCount = (float)LuaAPI.lua_tonumber(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_LianXuStep(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.LianXuStep = LuaAPI.xlua_tointeger(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_crateCurrentStep(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.crateCurrentStep = LuaAPI.xlua_tointeger(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_MapLgenth(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.MapLgenth = LuaAPI.xlua_tointeger(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_nowAge(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                GameBattle gen_to_be_invoked = (GameBattle)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.nowAge = LuaAPI.xlua_tointeger(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
		
		
		
		
    }
}
