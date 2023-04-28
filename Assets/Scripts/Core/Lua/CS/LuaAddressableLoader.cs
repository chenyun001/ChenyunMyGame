//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-19 11:59:17
//Description: 
//=========================================

using System.Text;
using MailingJoy.Core;
using MailingJoy.Utils;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace MailingJoy.Lua
{
	public class LuaAddressableLoader
	{
		public static byte[] Loader(ref string filePath)
		{
			filePath = filePath.Replace('.', '/');

			var luaContent = TryExtension(ref filePath, ".lua.txt");
			if (luaContent != null)
			{
				return luaContent;
			}

			luaContent = TryExtension(ref filePath, ".lua");
			return luaContent;
		}

		private static byte[] TryExtension(ref string filePath, string extension)
		{
			var fileName = $"{filePath}{extension}";
			var luaCache = Managers.LuaFrameworkEntry.GetLuaCache(fileName);
			return luaCache;
		}
	}
}