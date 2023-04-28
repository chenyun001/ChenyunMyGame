//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-09 17:05:44
//Description: 
//=========================================

using System;
using System.IO;
using MailingJoy.Core.Utils;
using MailingJoy.Lua;
using UnityEngine;
using XLua;

namespace MailingJoy.Core.UIFramework.ScreenBase
{
	public class UILuaBase
	{
		private string _luaFilePath;
		private Injection[] _injections;
		private ButtonInjection[] _btnInjections;
		private TextMeshProUGUIInjection[] _tmpInjections;
		private string _chunkName;
		public LuaTable ScriptEnv { protected set; get; }
		private Action<LuaTable> _luaStart;
		private Action<LuaTable, float> _luaUpdate;
		private Action<LuaTable> _luaOnDestroy;
		private Action<LuaTable> _luaResume;

		protected void InitLua(string luaFilePath,
			Injection[] injections, ButtonInjection[] btnInjections, TextMeshProUGUIInjection[] tmpInjections,
			GameObject gameObject,
			UIOpenScreenParameterBase openParam)
		{
			_luaFilePath = luaFilePath;
			_injections = injections;
			_btnInjections = btnInjections;
			_tmpInjections = tmpInjections;
			var luaContentStr = string.Empty;
			//Lua脚本内容
			if (!string.IsNullOrEmpty(_luaFilePath))
			{
				luaContentStr = LuaUtil.RequireAndNewInstance(_luaFilePath);
				_chunkName = Path.GetFileName(_luaFilePath);
			}

			//LUA文件有内容
			if (!string.IsNullOrEmpty(luaContentStr))
			{
				
#if UNITY_EDITOR
				object[] ret;
				try
				{

					 ret = LuaEnvSingleton.LuaEnv.DoString(luaContentStr, _chunkName);


				}
				catch (Exception e)
				{
					Debug.LogError(luaFilePath+"：lua文件错误");
					Console.WriteLine(e);
					throw;
				}
				#else
									object[] ret = LuaEnvSingleton.LuaEnv.DoString(luaContentStr, _chunkName);

#endif

				if (ret.Length <= 0 || !(ret[0] is LuaTable))
				{
					Debugger.LogError($"{_chunkName} 文件存在错误");
				}
				else
				{
					ScriptEnv = (LuaTable) ret[0];
					ScriptEnv.Set("param", openParam);
					ScriptEnv.Set("gameObject", gameObject);
					ScriptEnv.Set("transform", gameObject.transform);
					ScriptEnv.Set("this", this);

					#region 自动注入对象到Lua

					foreach (var injection in _injections)
					{
						var injectionName = injection.Name;
						var injectionValue = injection.Value;
						ScriptEnv.Set(injectionName, injectionValue);
					}

					foreach (var injection in _btnInjections)
					{
						var injectionName = injection.Name;
						var injectionValue = injection.Value;
						ScriptEnv.Set(injectionName, injectionValue);
					}

					foreach (var injection in _tmpInjections)
					{
						var injectionName = injection.Name;
						var injectionValue = injection.Value;
						ScriptEnv.Set(injectionName, injectionValue);
					}

					#endregion

					if (ScriptEnv != null)
					{
						Debug.Log(_luaFilePath+"init luatxt");
						var luaAwake = ScriptEnv.Get<Action<LuaTable>>("awake");
						luaAwake?.Invoke(ScriptEnv);
					}
				}
			}
		}

		private bool firstUpdate = true;
		protected virtual void OnLoadSuccess()
		{
			if (ScriptEnv != null)
			{
				if (_luaStart == null)
				{
					_luaStart = ScriptEnv.Get<Action<LuaTable>>("start");
				}
				_luaStart?.Invoke(ScriptEnv);
			}
		}

		protected virtual void Update(float deltaTime)
		{
			if (firstUpdate)
			{
				firstUpdate = false;
				// if (ScriptEnv != null)
				// {
				// 	if (_luaStart == null)
				// 	{
				// 		_luaStart = ScriptEnv.Get<Action<LuaTable>>("first_update");
				// 	}
				//
				// 	_luaStart?.Invoke(ScriptEnv);
				// }
				return;
			}
			
			if (_luaUpdate == null && ScriptEnv != null)
			{
				_luaUpdate = ScriptEnv.Get<Action<LuaTable, float>>("update");
			}

			_luaUpdate?.Invoke(ScriptEnv, deltaTime);
		}

		public virtual void Dispose()
		{
			if (_luaOnDestroy == null && ScriptEnv != null)
			{
				_luaOnDestroy = ScriptEnv.Get<Action<LuaTable>>("destroy");
			}

			_luaOnDestroy?.Invoke(ScriptEnv);

			if (ScriptEnv != null)
			{
				ScriptEnv.Dispose();
				ScriptEnv = null;
			}

			_luaStart = null;
			_luaUpdate = null;
			_luaOnDestroy = null;
		}

		public  void Resume()
		{
			if (_luaResume == null && ScriptEnv != null)
			{
				_luaResume = ScriptEnv.Get<Action<LuaTable>>("resume");
			}

			_luaResume?.Invoke(ScriptEnv);
		}
	}
}