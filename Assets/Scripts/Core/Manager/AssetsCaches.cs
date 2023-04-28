//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-11-19 00:49:52
//Description: 
//=========================================

using System.Collections.Generic;
using Ext;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace MailingJoy.Core
{
	internal class AssetsCaches
	{
		private static DictionaryEx<string, AsyncOperationHandle> _caches =
			new DictionaryEx<string, AsyncOperationHandle>();

		internal static void AddCache(string address, AsyncOperationHandle handle)
		{
		}

		internal static bool HasCache(string address, out AsyncOperationHandle handle)
		{
			if (_caches.ContainsKey(address))
			{
				handle = _caches[address];
				return true;
			}

			handle = default;
			return false;
		}
	}
}