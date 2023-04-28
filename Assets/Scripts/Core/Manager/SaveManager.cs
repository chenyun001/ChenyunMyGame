//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-23 22:06:31
//Description: 
//=========================================

using System;
using System.IO;
using UnityEngine;
using ProtoBuf;
using XLua;

namespace MailingJoy.Core
{
	[LuaCallCSharp]
	public class SaveManager : SingletonBase<SaveManager>
	{
		public bool SaveFileExist(string filePath)
		{
			var savePath = GetGameSaveFilePath(filePath);
			return File.Exists(savePath);
		}

		/// <summary>
		/// 存储
		/// </summary>
		/// <param name="filePath"></param>
		/// <param name="saveObject"></param>
		public void Save(string filePath, object saveObject)
		{
			var savePath = GetGameSaveFilePath(filePath);

			using (var fileStream = new FileStream(savePath, FileMode.Create))
			{
				Serializer.Serialize(fileStream, saveObject);
				fileStream.Flush(true);
			}
		}

		/// <summary>
		/// 获取
		/// </summary>
		/// <param name="filePath"></param>
		/// <typeparam name="T"></typeparam>
		/// <returns></returns>
		public T Fetch<T>(string filePath)
		{
			var savePath = GetGameSaveFilePath(filePath);

			if (File.Exists(savePath))
			{
				using (var fileStream = new FileStream(savePath, FileMode.OpenOrCreate))
				{
					var data = Serializer.Deserialize<T>(fileStream);
					return data;
				}
			}

			return default(T);
		}

		/// <summary>
		/// 获取游戏存档的文件夹路径
		/// </summary>
		private string GetGameSaveFilePath(string name)
		{
			return Application.persistentDataPath + Path.DirectorySeparatorChar + name;
		}
	}
}