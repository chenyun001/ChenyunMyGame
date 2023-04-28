//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-12-08 16:26:48
//Description: 
//=========================================

using MailingJoy.Core.Enums;
using UnityEngine;

namespace MailingJoy.Core
{
	public class SoundPlay : MonoBehaviour
	{
		public SoundType SoundType;
		public string AudioName;
		public bool IsAutoPlay;

		/// <summary>
		/// 播放优先级
		/// </summary>
		public int Priority = 0;

		private void OnEnable()
		{
			if (!string.IsNullOrEmpty(AudioName) && IsAutoPlay)
			{
				Play();
			}
		}

		public void Play()
		{
			switch (SoundType)
			{
				case SoundType.Background:
					SoundManager.Instance.PlayBackgroundSound(AudioName);
					break;
				case SoundType.Effect:
					SoundManager.Instance.PlayEffectSound(AudioName, Priority);
					break;
				case SoundType.UI:
					SoundManager.Instance.PlayUISound(AudioName);
					break;
			}
		}

		public void Play(SoundType soundType, string audioName, int priority)
		{
			SoundType = soundType;
			AudioName = audioName;
			Priority = priority;

			Play();
		}

		public void UnPause()
		{
		}

		public void Pause()
		{
		}

		public void Stop()
		{
		}
	}
}