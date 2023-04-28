//=========================================
//Author: 洪金敏
//Create Date: 2019/01/15 13:23:58
//Description: 
//=========================================

using System;
using System.Collections.Generic;
using Ext;
using MailingJoy.Core;
using MailingJoy.Core.Net;
using MailingJoy.Core.Utils;
using MailingJoy.Utils;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceLocations;
using XLua;

namespace MailingJoy.Lua
{
	public class LuaFrameworkEntry : LuaBehaviour
	{
		

		private Action<LuaTable, float> _updateAction;
		private Action<LuaTable, float> _fixedUpdateAction;

		private DictionaryEx<string, byte[]> _luaFilesCaches;

		protected override void Awake()
		{
			_luaFilesCaches = new DictionaryEx<string, byte[]>();
			Managers.LuaFrameworkEntry = this;
			LuaEnvSingleton.Init();
			InitLoader();
			InitExt();
		}

		public void StartLuaFramework()
		{
			object[] ret = LuaEnvSingleton.DoString(LuaUtil.RequireAndNewFramework(LuaFilePath), "LuaFrameworkEntry");
 
			if (ret == null || ret.Length <= 0 || !(ret[0] is LuaTable))
			{
				Debugger.LogError("LuaFrameworkEntry 文件存在错误");
			}
			else
			{
				ScriptEnv = (LuaTable) ret[0];
				ScriptEnv.Get<Action<LuaTable, LuaFrameworkEntry>>("start_lua_framework").Invoke(ScriptEnv, this);
			}
			
		}

		public void AddCache(IResourceLocation luaAddressLocation,
			AsyncOperationHandle<TextAsset> asyncOperationHandle)
		{
			var luaBytes = asyncOperationHandle.Result.bytes;
			var assetPrimaryKey = luaAddressLocation.PrimaryKey;
			Debug.Assert(!_luaFilesCaches.ContainsKey(assetPrimaryKey), $"{assetPrimaryKey} 重复加载");
			Debug.Assert(luaBytes != null, $"{assetPrimaryKey} 加载错误.");
			_luaFilesCaches.Add(assetPrimaryKey, luaBytes);
		}

		/// <summary>
		/// 获取Lua缓存内容
		/// </summary>
		/// <param name="luaFileName"></param>
		/// <returns></returns>
		public byte[] GetLuaCache(string luaFileName)
		{
			if (_luaFilesCaches.TryGetValue(luaFileName, out var result))
			{
				return result;
			}

			return null;
		}



		protected override void Update()
		{
			if (LuaEnvSingleton.LuaEnv != null)
			{
				if (Time.time - LuaEnvSingleton.LastGcTime > LuaEnvSingleton.GcInterval)
				{
					LuaEnvSingleton.LuaEnv.Tick();
					LuaEnvSingleton.LastGcTime = Time.time;
				}

				if (_updateAction == null && ScriptEnv != null)
				{
					_updateAction = ScriptEnv.Get<Action<LuaTable, float>>("tick");
				}

				_updateAction?.Invoke(ScriptEnv, Time.deltaTime);
			}
		}


		private void FixedUpdate()
		{
			if (_fixedUpdateAction == null && ScriptEnv != null)
			{
				_fixedUpdateAction = ScriptEnv.Get<Action<LuaTable, float>>("fixed_tick");
			}

			_fixedUpdateAction?.Invoke(ScriptEnv, Time.fixedDeltaTime);
		}

		private void InitLoader()
		{
			LuaEnvSingleton.AddLoader(LuaAddressableLoader.Loader);
//#if UNITY_EDITOR
//            LuaEnvSingleton.AddLoader(LuaDirectoryLoader.Loader);
//            LuaEnvSingleton.AddLoader(LuaDirectoryPathWithPointLoader.Loader);
//#else
////            LuaEnvSingleton.AddLoader(AssetBundleLoader.Loader);
//            LuaEnvSingleton.AddLoader(LuaPersistentLoader.Loader);
//#endif
		}

		private void InitExt()
		{
			LuaEnvSingleton.LuaEnv.AddBuildin("pb", XLua.LuaDLL.Lua.LoadLuaProtobuf);
			LuaEnvSingleton.LuaEnv.AddBuildin("rapidjson", XLua.LuaDLL.Lua.LoadRapidJson);
			LuaEnvSingleton.LuaEnv.AddBuildin("emmy_core",XLua.LuaDLL.Lua.LoadEmmyCore);
#if (!UNITY_SWITCH && !UNITY_WEBGL) || UNITY_EDITOR
			LuaEnvSingleton.LuaEnv.AddBuildin("mime.core", XLua.LuaDLL.Lua.LoadMimeCore);
#endif
		}

		public LuaTable GetLuaObject(string objectName)
		{
			ScriptEnv.Get(objectName, out LuaTable mm);
			return mm;
		}

		private void OnApplicationQuit()
		{
			
			NetManager.Instance.LogOut();
			//BattleClient.Instance.ShutDown();
		}

		private void OnDisable()
		{
			if (ScriptEnv != null)
			{
				var destroyAction = ScriptEnv.Get<Action<LuaFrameworkEntry>>("destroy_lua_framework");
				destroyAction?.Invoke(this);
			}
		}
	}
}