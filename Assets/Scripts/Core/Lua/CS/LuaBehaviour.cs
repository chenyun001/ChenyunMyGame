//=========================================
//Author: 洪金敏
//Create Date: 2019/01/11 19:55:01
//Description: 
//=========================================

using UnityEngine;
using System;
using System.IO;
using MailingJoy.Core;
using MailingJoy.Core.Utils;
using MailingJoy.Utils;
using XLua;

namespace MailingJoy.Lua
{
	public class LuaBehaviour : CustomBehaviour
	{
		public Injection[] Injections;

		[SerializeField]
		public string LuaFilePath;

		private string _chunkName;

		protected LuaTable ScriptEnv { set; get; }

		private Action<LuaTable> _luaStart;
		private Action<LuaTable> _luaUpdate;
		private Action<LuaTable> _luaOnDestroy;

		protected virtual void Awake()
		{
			var luaContentStr = string.Empty;
			//Lua脚本内容
			if (!string.IsNullOrEmpty(LuaFilePath))
			{
				luaContentStr = LuaUtil.RequireLua(LuaFilePath);
				_chunkName = Path.GetFileName(LuaFilePath);
			}

			//LUA文件有内容
			if (!string.IsNullOrEmpty(luaContentStr))
			{
				object[] ret = LuaEnvSingleton.LuaEnv.DoString(luaContentStr,
					_chunkName);

				if (ret.Length <= 0 || !(ret[0] is LuaTable))
				{
					Debugger.LogError($"{_chunkName} 文件存在错误");
				}
				else
				{
					ScriptEnv = (LuaTable) ret[0];
					ScriptEnv.Set("gameObject", gameObject);
					ScriptEnv.Set("transform", transform);
					ScriptEnv.Set("this", this);

					foreach (var injection in Injections)
					{
						ScriptEnv.Set(injection.Name,injection.Value);
					}
					
					if (ScriptEnv != null)
					{
						var luaAwake = ScriptEnv.Get<Action<LuaTable>>("awake");
						luaAwake?.Invoke(ScriptEnv);
					}
				}
			}
		}

		protected virtual void Start()
		{
			if (_luaStart == null && ScriptEnv != null)
			{
				_luaStart = ScriptEnv.Get<Action<LuaTable>>("start");
			}

			_luaStart?.Invoke(ScriptEnv);
		}

		protected virtual void Update()
		{
			if (_luaUpdate == null && ScriptEnv != null)
			{
				_luaUpdate = ScriptEnv.Get<Action<LuaTable>>("update");
			}

			_luaUpdate?.Invoke(ScriptEnv);
		}

		protected virtual void OnDestroy()
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
	}
}