#if USE_UNI_LUA
using LuaAPI = UniLua.Lua;
using RealStatePtr = UniLua.ILuaState;
using LuaCSFunction = UniLua.CSharpFunctionDelegate;
#else
using LuaAPI = XLua.LuaDLL.Lua;
using RealStatePtr = System.IntPtr;
using LuaCSFunction = XLua.LuaDLL.lua_CSFunction;
#endif

using System;
using System.Collections.Generic;
using System.Reflection;


namespace XLua.CSObjectWrap
{
    public class XLua_Gen_Initer_Register__
	{
        
        
        static void wrapInit0(LuaEnv luaenv, ObjectTranslator translator)
        {
        
            translator.DelayWrapLoader(typeof(EffectManager), EffectManagerWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(Ext.GameObjectExt), ExtGameObjectExtWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(Ext.ImageExt), ExtImageExtWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(Ext.ObjectExt), ExtObjectExtWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(MailingJoy.Core.AppFacade), MailingJoyCoreAppFacadeWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(MailingJoy.Core.ActionPoolManager), MailingJoyCoreActionPoolManagerWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(MailingJoy.Core.AssetsManager), MailingJoyCoreAssetsManagerWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(MailingJoy.Core.Managers), MailingJoyCoreManagersWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(MailingJoy.Core.NetManager), MailingJoyCoreNetManagerWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(MailingJoy.Core.SaveManager), MailingJoyCoreSaveManagerWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(MailingJoy.Core.SceneManager), MailingJoyCoreSceneManagerWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(MailingJoy.Core.TimerManager), MailingJoyCoreTimerManagerWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(MailingJoy.Core.Lua.Bridge.DoTweenBridge), MailingJoyCoreLuaBridgeDoTweenBridgeWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(object), SystemObjectWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Object), UnityEngineObjectWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Vector2), UnityEngineVector2Wrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Vector3), UnityEngineVector3Wrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Vector4), UnityEngineVector4Wrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Quaternion), UnityEngineQuaternionWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Color), UnityEngineColorWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Ray), UnityEngineRayWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Bounds), UnityEngineBoundsWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Ray2D), UnityEngineRay2DWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Time), UnityEngineTimeWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.GameObject), UnityEngineGameObjectWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Component), UnityEngineComponentWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Behaviour), UnityEngineBehaviourWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Transform), UnityEngineTransformWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Resources), UnityEngineResourcesWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.TextAsset), UnityEngineTextAssetWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Keyframe), UnityEngineKeyframeWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.AnimationCurve), UnityEngineAnimationCurveWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.AnimationClip), UnityEngineAnimationClipWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.MonoBehaviour), UnityEngineMonoBehaviourWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.ParticleSystem), UnityEngineParticleSystemWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.SkinnedMeshRenderer), UnityEngineSkinnedMeshRendererWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Renderer), UnityEngineRendererWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Light), UnityEngineLightWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Mathf), UnityEngineMathfWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(System.Collections.Generic.List<int>), SystemCollectionsGenericList_1_SystemInt32_Wrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(UnityEngine.Debug), UnityEngineDebugWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(PageView), PageViewWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(MailingJoy.Core.Utils.UIGray), MailingJoyCoreUtilsUIGrayWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(GameBattle), GameBattleWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(GameClick), GameClickWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(Role), RoleWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(MailingJoy.Game.AppConst), MailingJoyGameAppConstWrap.__Register);
        
        
            translator.DelayWrapLoader(typeof(ProgressControl), ProgressControlWrap.__Register);
        
        
        
        }
        
        static void Init(LuaEnv luaenv, ObjectTranslator translator)
        {
            
            wrapInit0(luaenv, translator);
            
            
            translator.AddInterfaceBridgeCreator(typeof(MailingJoy.Lua.ILuaGameModel), MailingJoyLuaILuaGameModelBridge.__Create);
            
            translator.AddInterfaceBridgeCreator(typeof(System.Collections.IEnumerator), SystemCollectionsIEnumeratorBridge.__Create);
            
        }
        
	    static XLua_Gen_Initer_Register__()
        {
		    XLua.LuaEnv.AddIniter(Init);
		}
		
		
	}
	
}
namespace XLua
{
	public partial class ObjectTranslator
	{
		static XLua.CSObjectWrap.XLua_Gen_Initer_Register__ s_gen_reg_dumb_obj = new XLua.CSObjectWrap.XLua_Gen_Initer_Register__();
		static XLua.CSObjectWrap.XLua_Gen_Initer_Register__ gen_reg_dumb_obj {get{return s_gen_reg_dumb_obj;}}
	}
	
	internal partial class InternalGlobals
    {
	    
		delegate UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle __GEN_DELEGATE0( UnityEngine.UI.Image image,  string atlasName,  string spriteId);
		
		delegate UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle __GEN_DELEGATE1( UnityEngine.UI.Image image,  string atlasName);
		
		delegate void __GEN_DELEGATE2( UnityEngine.UI.Image image,  int width,  int height);
		
		delegate void __GEN_DELEGATE3( UnityEngine.UI.Image image,  float alpha);
		
	    static InternalGlobals()
		{
		    extensionMethodMap = new Dictionary<Type, IEnumerable<MethodInfo>>()
			{
			    
				{typeof(UnityEngine.UI.Image), new List<MethodInfo>(){
				
				  new __GEN_DELEGATE0(Ext.ImageExt.SetSpriteFromAtlasAsync)
#if UNITY_WSA && !UNITY_EDITOR
                                      .GetMethodInfo(),
#else
                                      .Method,
#endif
				
				  new __GEN_DELEGATE1(Ext.ImageExt.SetSprite)
#if UNITY_WSA && !UNITY_EDITOR
                                      .GetMethodInfo(),
#else
                                      .Method,
#endif
				
				  new __GEN_DELEGATE2(Ext.ImageExt.SetRect)
#if UNITY_WSA && !UNITY_EDITOR
                                      .GetMethodInfo(),
#else
                                      .Method,
#endif
				
				  new __GEN_DELEGATE3(Ext.ImageExt.SetAlpha)
#if UNITY_WSA && !UNITY_EDITOR
                                      .GetMethodInfo(),
#else
                                      .Method,
#endif
				
				}},
				
			};
			
			genTryArrayGetPtr = StaticLuaCallbacks.__tryArrayGet;
            genTryArraySetPtr = StaticLuaCallbacks.__tryArraySet;
		}
	}
}
