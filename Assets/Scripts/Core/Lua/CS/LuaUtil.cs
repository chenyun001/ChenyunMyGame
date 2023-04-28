//=========================================
//Author: 洪金敏
//Create Date: 2019/04/19 15:04:18
//Description: 
//=========================================


namespace MailingJoy.Lua
{
	public static class LuaUtil
	{
		/// <summary>
		/// Require Lua 模块名 用于Lua虚拟机加载
		/// </summary>
		/// <param name="luaModuleName"></param>
		/// <returns></returns>
		public static string RequireLua(string luaModuleName)
		{
			return $@"
                    return require '{luaModuleName}'
                ";
		}

		public static string RequireAndNewFramework(string luaModuleName)
		{
			return $@"
				require('lua-typesys/TypeSystemHeader')
				local class = require '{luaModuleName}'
				lua_framework = typesys.new(class)
				typesys.setRootObject(lua_framework)
				return lua_framework
			";
		}

		/// <summary>
		/// Require Lua 模块 并且实例化一个
		/// </summary>
		/// <param name="luaModuleName"></param>
		/// <returns></returns>
		public static string RequireAndNewInstance(string luaModuleName)
		{
			return $@"
				require('lua-typesys/TypeSystemHeader')
				local class = require '{luaModuleName}'
				local panel = typesys.new(class)
				return panel
			";
		}
	}
}