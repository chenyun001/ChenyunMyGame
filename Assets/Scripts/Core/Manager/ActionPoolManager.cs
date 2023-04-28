//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-02-04 16:51:01
//Description: 
//=========================================

using System;
using System.Collections.Generic;
using XLua;

namespace MailingJoy.Core
{
	[LuaCallCSharp]
	public class ActionPoolManager : MonoSingleton<ActionPoolManager>
	{
		private readonly Queue<Action> _queue = new Queue<Action>();

		private void Update()
		{
			while (_queue.Count > 0)
			{
				var action = Dequeue();
				action();
			}
		}

		public void Enqueue(Action action)
		{
			_queue.Enqueue(action);
		}

		public Action Dequeue()
		{
			return _queue.Dequeue();
		}
	}
}