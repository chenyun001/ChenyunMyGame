//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020/10/20 14:26:52
//Description: 
//=========================================

using System;
using System.Collections.Generic;
using Ext;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace MailingJoy.Core
{
	public class ObjectPoolManager : MonoSingleton<ObjectPoolManager>
	{
		private DictionaryEx<string, Stack<IRecycle>> _pool = new DictionaryEx<string, Stack<IRecycle>>();

		private void Start()
		{
			gameObject.SetActive(false);
		}

		/// <summary>
		/// 从池中取出一个对象
		/// </summary>
		/// <param name="assetPath"></param>
		/// <param name="parent"></param>
		/// <param name="cb">完成回调</param>
		/// <param name="args">一些参数</param>
		/// <returns></returns>
		public async void Spawn(string assetPath, Transform parent, Action<GameObject, object> cb, object args = null)
		{
			if (!_pool.ContainsKey(assetPath))
			{
				_pool.Add(assetPath, new Stack<IRecycle>());
			}

			var p = _pool[assetPath];
			if (p.Count > 0)
			{
				var obj = p.Pop();
				obj.Transform.SetParent(parent, false);
				cb?.Invoke(obj.GameObject, args);
			}
			else
			{
				var handle = AssetsManager.Instance.GetAsset<GameObject>(assetPath);
				var prefab = await handle;
				var go = Instantiate(prefab, parent);
				cb?.Invoke(go, args);
			}
		}

		/// <summary>
		/// 归还池中
		/// </summary>
		/// <param name="obj"></param>
		/// <param name="poolName"></param>
		public void Recycle(IRecycle obj, string poolName)
		{
			if (!_pool.ContainsKey(poolName))
			{
				_pool.Add(poolName, new Stack<IRecycle>());
			}

			var p = _pool[poolName];
			obj.Recycle();
			obj.Transform.SetParent(transform, false);
			
			p.Push(obj);
		}
	}

	/// <summary>
	/// 进对象池的目标
	/// </summary>
	public interface IRecycle
	{
		void Recycle();

		/// <summary>
		/// 对象池名称
		/// </summary>
		string PoolName { get; set; }

		GameObject GameObject { get; }

		Transform Transform { get; }
	}
}