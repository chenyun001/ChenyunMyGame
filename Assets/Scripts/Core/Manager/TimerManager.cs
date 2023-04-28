//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-24 13:53:10
//Description: 
//=========================================

using System;
using System.Collections.Generic;
using Ext;
using UnityEngine;
using XLua;

namespace MailingJoy.Core
{
	[LuaCallCSharp]
	public class TimerManager : MonoSingleton<TimerManager>
	{
		/// <summary>
		/// ID累加器
		/// </summary>
		private int _ID = 0;

		private List<Timer> _updateTimerList;
		private List<Timer> _fixedUpdateTimerList;
		private DictionaryEx<int, Timer> _timerDic;

		private List<Timer> _readyDeleteList;

		protected override void Awake()
		{
			_updateTimerList = new List<Timer>();
			_fixedUpdateTimerList = new List<Timer>();
			_timerDic = new DictionaryEx<int, Timer>();
			_readyDeleteList = new List<Timer>();
			base.Awake();
		}

		public Timer Register(float time, TimerType timerType, Action<float> cb = null, int times = 1)
		{
			var timer = new Timer
			{
				ID = ++_ID,
				Time = time,
				TimerType = timerType,
				Times = times,
				CurrentTimes = times,
				Callback = cb,
			};

			_timerDic.Add(timer.ID, timer);
			if (timerType == TimerType.UPDATE)
			{
				_updateTimerList.Add(timer);
			}
			else if (timerType == TimerType.FIXED_UPDATE)
			{
				_fixedUpdateTimerList.Add(timer);
			}

			return timer;
		}

		public void Cancel(Timer timer)
		{
			if (timer == null) return;
			var id = timer.ID;
			var timerType = timer.TimerType;
			_timerDic.Remove(id);
			if (timerType == TimerType.UPDATE)
			{
				_updateTimerList.Remove(timer);
			}
			else if (timerType == TimerType.FIXED_UPDATE)
			{
				_fixedUpdateTimerList.Remove(timer);
			}
		}

		private void Update()
		{
			DeleteTimers();
			Tick(ref _updateTimerList, Time.deltaTime);
		}

		private void FixedUpdate()
		{
			DeleteTimers();
			TickFix(ref _fixedUpdateTimerList, Time.fixedDeltaTime);
		}

		private void TickFix(ref List<Timer> list, float deltaTime)
		{
			for (int timerIndex = 0; timerIndex < list.Count; timerIndex++)
			{
				var timer = list[timerIndex];
				//暂停计时
				if (timer.IsPause)
				{
					continue;
				}

				
				timer.CurrentTime += deltaTime;
				if (timer.ReachTime() && !timer.Obsolete)
				{
					timer.CurrentTime -= timer.Time;
					//有限次
					if (timer.Times > 0)
					{
						timer.CurrentTimes--;
						//次数到了
						if (timer.CurrentTimes == 0)
						{
							timer.Callback?.Invoke(deltaTime);

							timer.Obsolete = true;
							_readyDeleteList.Add(timer);
						}
					}
					else
					{

						timer.Callback?.Invoke(deltaTime);
					}
				}
			}
		}
		private void Tick(ref List<Timer> list, float deltaTime)
		{
			for (int timerIndex = 0; timerIndex < list.Count; timerIndex++)
			{
				var timer = list[timerIndex];
				//暂停计时
				if (timer.IsPause)
				{
					continue;
				}

				timer.CurrentTime += deltaTime;
				if (timer.ReachTime() && !timer.Obsolete)
				{
					timer.CurrentTime -= timer.Time;
					//有限次
					if (timer.Times > 0)
					{
						timer.CurrentTimes--;
						//次数到了
						if (timer.CurrentTimes == 0)
						{
							timer.Callback?.Invoke(deltaTime);

							timer.Obsolete = true;
							_readyDeleteList.Add(timer);
						}
					}
					else
					{
						timer.Callback?.Invoke(deltaTime);
					}
				}
			}
		}

		private void DeleteTimers()
		{
			foreach (var readyDelete in _readyDeleteList)
			{
				Cancel(readyDelete);
			}

			_readyDeleteList.Clear();
		}
	}

	public class Timer
	{
		public float Time { get; set; }
		public TimerType TimerType { get; set; }
		public Action<float> Callback { get; set; }

		/// <summary>
		/// 暂停计时
		/// </summary>
		public bool IsPause;

		/// <summary>
		/// 执行次数
		/// </summary>
		public int Times { get; set; }

		public int ID;
		public bool Obsolete { get; set; }


		/// <summary>
		/// 当前计时器
		/// </summary>
		public float CurrentTime { get; set; }

		/// <summary>
		/// 当前计数器
		/// </summary>
		public float CurrentTimes { get; set; }

		/// <summary>
		/// 时间到了
		/// </summary>
		/// <returns></returns>
		public bool ReachTime()
		{
			return CurrentTime >= Time;
		}
	}

	public enum TimerType
	{
		UPDATE,
		FIXED_UPDATE,
	}
}