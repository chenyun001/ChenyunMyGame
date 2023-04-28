//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-24 13:55:27
//Description: 
//=========================================

using System;
using UnityEngine;

namespace MailingJoy.Core
{
	public abstract class MonoSingleton<T> : MonoBehaviour where T : Component
	{
		private static T _instance;

		public static T Instance
		{
			get
			{
				if (_instance == null)
				{
					Type type = typeof(T);

					_instance = (T) FindObjectOfType(type);
					if (_instance == null)
					{
						var go = new GameObject(typeof(T).Name);
						_instance = go.AddComponent<T>();

						var bootObj = GameObject.Find("BootObj");
						if (bootObj == null)
						{
							bootObj = new GameObject("BootObj");
							DontDestroyOnLoad(bootObj);
						}

						go.transform.SetParent(bootObj.transform);
						
					}
				}

				return _instance;
			}
		}

		public static void DestroyInstance()
		{
			if (_instance != null)
			{
				Destroy(_instance.gameObject);
			}

			_instance = null;
		}

		public static void ClearDestroy()
		{
			DestroyInstance();
		}

		/// <summary>
		///     OnDestroy消息，确保单件的静态实例会随着GameObject销毁
		/// </summary>
		protected virtual void OnDestroy()
		{
			if (_instance != null && _instance.gameObject == gameObject)
			{
				_instance = null;
			}
		}

		public virtual void DestroySelf()
		{
			_instance = null;
			Destroy(gameObject);
		}

		public static bool HasInstance()
		{
			return _instance != null;
		}


		protected virtual void Awake()
		{
			if (_instance != null && _instance.gameObject != gameObject)
			{
				if (Application.isPlaying)
				{
					Destroy(gameObject);
				}
				else
				{
					DestroyImmediate(gameObject);
				}
			}
			else if (_instance == null)
			{
				_instance = GetComponent<T>();
			}

			DontDestroyOnLoad(gameObject);
			Init();
		}

		protected virtual void Init()
		{
		}
	}
}