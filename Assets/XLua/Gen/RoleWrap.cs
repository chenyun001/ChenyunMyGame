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
    public class RoleWrap 
    {
        public static void __Register(RealStatePtr L)
        {
			ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			System.Type type = typeof(Role);
			Utils.BeginObjectRegister(type, L, translator, 0, 7, 21, 21);
			
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "SetGameClick", _m_SetGameClick);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "SetStepSlect", _m_SetStepSlect);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "SetGameBattle", _m_SetGameBattle);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "GameResSet", _m_GameResSet);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "OnClickDown", _m_OnClickDown);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "OnClickUp", _m_OnClickUp);
			Utils.RegisterFunc(L, Utils.METHOD_IDX, "GameStartAnimation", _m_GameStartAnimation);
			
			
			Utils.RegisterFunc(L, Utils.GETTER_IDX, "role_spine", _g_get_role_spine);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "maxChargeTime", _g_get_maxChargeTime);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "jumpPower", _g_get_jumpPower);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "Winth", _g_get_Winth);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "leftLength", _g_get_leftLength);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "rightLength", _g_get_rightLength);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "JumpTimeSpeed", _g_get_JumpTimeSpeed);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "gameBattle", _g_get_gameBattle);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "gameClick", _g_get_gameClick);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "lastPos", _g_get_lastPos);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "raton", _g_get_raton);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "role_Text", _g_get_role_Text);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "isOnClick", _g_get_isOnClick);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "isGround", _g_get_isGround);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "countP", _g_get_countP);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "slider", _g_get_slider);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "progerss", _g_get_progerss);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "HpValue", _g_get_HpValue);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "isGameStart", _g_get_isGameStart);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "isNotJmup", _g_get_isNotJmup);
            Utils.RegisterFunc(L, Utils.GETTER_IDX, "Map_planes", _g_get_Map_planes);
            
			Utils.RegisterFunc(L, Utils.SETTER_IDX, "role_spine", _s_set_role_spine);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "maxChargeTime", _s_set_maxChargeTime);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "jumpPower", _s_set_jumpPower);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "Winth", _s_set_Winth);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "leftLength", _s_set_leftLength);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "rightLength", _s_set_rightLength);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "JumpTimeSpeed", _s_set_JumpTimeSpeed);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "gameBattle", _s_set_gameBattle);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "gameClick", _s_set_gameClick);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "lastPos", _s_set_lastPos);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "raton", _s_set_raton);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "role_Text", _s_set_role_Text);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "isOnClick", _s_set_isOnClick);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "isGround", _s_set_isGround);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "countP", _s_set_countP);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "slider", _s_set_slider);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "progerss", _s_set_progerss);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "HpValue", _s_set_HpValue);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "isGameStart", _s_set_isGameStart);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "isNotJmup", _s_set_isNotJmup);
            Utils.RegisterFunc(L, Utils.SETTER_IDX, "Map_planes", _s_set_Map_planes);
            
			
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
					
					var gen_ret = new Role();
					translator.Push(L, gen_ret);
                    
					return 1;
				}
				
			}
			catch(System.Exception gen_e) {
				return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
			}
            return LuaAPI.luaL_error(L, "invalid arguments to Role constructor!");
            
        }
        
		
        
		
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_SetGameClick(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    GameClick __gameClick = (GameClick)translator.GetObject(L, 2, typeof(GameClick));
                    
                    gen_to_be_invoked.SetGameClick( __gameClick );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_SetStepSlect(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                    gen_to_be_invoked.SetStepSlect(  );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_SetGameBattle(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    GameBattle __gameBattle = (GameBattle)translator.GetObject(L, 2, typeof(GameBattle));
                    
                    gen_to_be_invoked.SetGameBattle( __gameBattle );
                    
                    
                    
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
            
            
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                    gen_to_be_invoked.GameResSet(  );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_OnClickDown(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                    gen_to_be_invoked.OnClickDown(  );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_OnClickUp(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    
                    gen_to_be_invoked.OnClickUp(  );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _m_GameStartAnimation(RealStatePtr L)
        {
		    try {
            
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
            
            
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
            
            
                
                {
                    System.Action _callback = translator.GetDelegate<System.Action>(L, 2);
                    
                    gen_to_be_invoked.GameStartAnimation( _callback );
                    
                    
                    
                    return 0;
                }
                
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            
        }
        
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_role_spine(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.role_spine);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_maxChargeTime(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                LuaAPI.lua_pushnumber(L, gen_to_be_invoked.maxChargeTime);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_jumpPower(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                LuaAPI.lua_pushnumber(L, gen_to_be_invoked.jumpPower);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_Winth(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                LuaAPI.lua_pushnumber(L, gen_to_be_invoked.Winth);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_leftLength(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                LuaAPI.lua_pushnumber(L, gen_to_be_invoked.leftLength);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_rightLength(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                LuaAPI.lua_pushnumber(L, gen_to_be_invoked.rightLength);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_JumpTimeSpeed(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                LuaAPI.lua_pushnumber(L, gen_to_be_invoked.JumpTimeSpeed);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_gameBattle(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.gameBattle);
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
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.gameClick);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_lastPos(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                translator.PushUnityEngineVector3(L, gen_to_be_invoked.lastPos);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_raton(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                translator.PushUnityEngineVector3(L, gen_to_be_invoked.raton);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_role_Text(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.role_Text);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_isOnClick(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                LuaAPI.lua_pushboolean(L, gen_to_be_invoked.isOnClick);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_isGround(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                LuaAPI.lua_pushboolean(L, gen_to_be_invoked.isGround);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_countP(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                LuaAPI.xlua_pushinteger(L, gen_to_be_invoked.countP);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_slider(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.slider);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_progerss(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                LuaAPI.lua_pushnumber(L, gen_to_be_invoked.progerss);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_HpValue(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                LuaAPI.xlua_pushinteger(L, gen_to_be_invoked.HpValue);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_isGameStart(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                LuaAPI.lua_pushboolean(L, gen_to_be_invoked.isGameStart);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_isNotJmup(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                LuaAPI.lua_pushboolean(L, gen_to_be_invoked.isNotJmup);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _g_get_Map_planes(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                translator.Push(L, gen_to_be_invoked.Map_planes);
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 1;
        }
        
        
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_role_spine(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.role_spine = (UnityEngine.Transform)translator.GetObject(L, 2, typeof(UnityEngine.Transform));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_maxChargeTime(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.maxChargeTime = (float)LuaAPI.lua_tonumber(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_jumpPower(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.jumpPower = (float)LuaAPI.lua_tonumber(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_Winth(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.Winth = (float)LuaAPI.lua_tonumber(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_leftLength(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.leftLength = (float)LuaAPI.lua_tonumber(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_rightLength(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.rightLength = (float)LuaAPI.lua_tonumber(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_JumpTimeSpeed(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.JumpTimeSpeed = (float)LuaAPI.lua_tonumber(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_gameBattle(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.gameBattle = (GameBattle)translator.GetObject(L, 2, typeof(GameBattle));
            
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
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.gameClick = (GameClick)translator.GetObject(L, 2, typeof(GameClick));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_lastPos(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                UnityEngine.Vector3 gen_value;translator.Get(L, 2, out gen_value);
				gen_to_be_invoked.lastPos = gen_value;
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_raton(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                UnityEngine.Vector3 gen_value;translator.Get(L, 2, out gen_value);
				gen_to_be_invoked.raton = gen_value;
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_role_Text(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.role_Text = (TMPro.TextMeshProUGUI)translator.GetObject(L, 2, typeof(TMPro.TextMeshProUGUI));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_isOnClick(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.isOnClick = LuaAPI.lua_toboolean(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_isGround(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.isGround = LuaAPI.lua_toboolean(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_countP(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.countP = LuaAPI.xlua_tointeger(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_slider(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.slider = (UnityEngine.UI.Image)translator.GetObject(L, 2, typeof(UnityEngine.UI.Image));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_progerss(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.progerss = (float)LuaAPI.lua_tonumber(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_HpValue(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.HpValue = LuaAPI.xlua_tointeger(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_isGameStart(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.isGameStart = LuaAPI.lua_toboolean(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_isNotJmup(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.isNotJmup = LuaAPI.lua_toboolean(L, 2);
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
        [MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
        static int _s_set_Map_planes(RealStatePtr L)
        {
		    try {
                ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
			
                Role gen_to_be_invoked = (Role)translator.FastGetCSObj(L, 1);
                gen_to_be_invoked.Map_planes = (UnityEngine.GameObject[])translator.GetObject(L, 2, typeof(UnityEngine.GameObject[]));
            
            } catch(System.Exception gen_e) {
                return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
            }
            return 0;
        }
        
		
		
		
		
    }
}
