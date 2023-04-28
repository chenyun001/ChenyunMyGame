//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-12-08 15:44:06
//Description: 
//=========================================

using System.Linq;
using System.Net.Security;
using MailingJoy.Core.Utils;
using UnityEngine;
using XLua;

namespace MailingJoy.Core
{
	public class SoundManager : MonoSingleton<SoundManager>
	{
		private static AudioSource _backgroundAudioSource;
		private static AudioSource _uiAudioSource;
		private static AudioSource[] _sfxAudioSources;

		#region 静音

		/// <summary>
		///  0.未设置 / 1.开启静音 / -1.关闭静音
		/// </summary>
		private static int _isMute = 0;

		public static bool IsMute
		{
			set
			{
				if (value)
				{
					_isMute = 1;
				}
				else
				{
					_isMute = -1;
				}

				PlayerPrefs.SetInt("IsMute", _isMute);
			}
			get
			{
				if (_isMute == 0) //没有获取过
				{
					if (PlayerPrefs.GetInt("IsMute") == 0) // 没有设置过
					{
						IsMute = false;
					}
				}

				return _isMute == 1;
			}
		}

		#endregion

		#region 背景音量

		private static float _backVolume = 0f;

		public static float BackVolume
		{
			set
			{
				_backVolume = value;
				PlayerPrefs.SetFloat("AudioBackgroundVolume", value);
			}
			get
			{
				if (!PlayerPrefs.HasKey("AudioBackgroundVolume"))
				{
					BackVolume = 1f;
				}

				return PlayerPrefs.GetFloat("AudioBackgroundVolume");
			}
		}

		#endregion

		#region 特效音量

		private static float _effectVolume = 0f;

		public static float EfVolume
		{
			set
			{
				_effectVolume = value;
				PlayerPrefs.SetFloat("AudioEffectVolume", value);
			}
			get
			{
				if (!PlayerPrefs.HasKey("AudioEffectVolume"))
				{
					EfVolume = 1f;
				}

				return PlayerPrefs.GetFloat("AudioEffectVolume");
			}
		}

		#endregion

		protected override void Awake()
		{
			base.Awake();
			DontDestroyOnLoad(this);
			var audioSources = GetComponentsInChildren<AudioSource>();
			_backgroundAudioSource = audioSources[0];
			_uiAudioSource = audioSources[1];
			_sfxAudioSources = audioSources.Skip(2).ToArray();
			_uiAudioSource.playOnAwake = false;
			_backgroundAudioSource.playOnAwake = false;
			_sfxAudioSources.ToList().ForEach(audioSource => audioSource.playOnAwake = false);
			_uiAudioSource.volume = EfVolume;
			_backgroundAudioSource.volume = BackVolume;
		}

		public void PlayBackgroundSound(string soundName)
		{
			// return;
			if (!string.IsNullOrEmpty(soundName))
			{
				if (_backgroundAudioSource.clip == null || _backgroundAudioSource.clip.name != soundName)
				{
					AssetsManager.Instance.GetAsset<AudioClip>(soundName, (clip, _) =>
					{
						_backgroundAudioSource.clip = clip;
						_backgroundAudioSource.loop = true;
						_backgroundAudioSource.Play();

						var r = _backgroundAudioSource.GetComponent<SoundRecord>();
						r.AudioName = soundName;
						r.Priority = int.MaxValue;
					});
				}
			}
		}

		public void PlayUISound(string soundName)
		{
			if (!string.IsNullOrEmpty(soundName))
			{
				if (_uiAudioSource.clip == null || _uiAudioSource.clip.name != soundName)
				{
					AssetsManager.Instance.GetAsset<AudioClip>(soundName, (clip, _) =>
					{
						_uiAudioSource.PlayOneShot(clip);

						var r = _uiAudioSource.GetComponent<SoundRecord>();
						r.AudioName = soundName;
						r.Priority = 0;
					});
				}
			}
		}

		public void PlayEffectSound(string soundName, int priority)
		{
			if (!string.IsNullOrEmpty(soundName))
			{
				if (soundName == "0")
				{
					return;
				}
				AssetsManager.Instance.GetAsset<AudioClip>(soundName, (clip, _) =>
				{
					foreach (var sfxAudioSource in _sfxAudioSources)
					{
						if (!sfxAudioSource.isPlaying)
						{
							sfxAudioSource.PlayOneShot(clip);
						}
					}

					var lowestPriorityAudio = GetLowestPriorityAudioSource();
					if (lowestPriorityAudio != null)
					{
						var r = lowestPriorityAudio.GetComponent<SoundRecord>();
						r.AudioName = soundName;
						r.Priority = priority;
						
						lowestPriorityAudio.PlayOneShot(clip);
					}
				});
			}
		}

		/// <summary>
		/// 找个优先级最低的播放组件
		/// </summary>
		/// <returns></returns>
		private static AudioSource GetLowestPriorityAudioSource()
		{
			var lowestPriority = int.MaxValue;
			AudioSource lowestSound = null;
			_sfxAudioSources.ToList().ForEach(s =>
			{
				var r = s.GetComponent<SoundRecord>();
				if (lowestPriority > r.Priority)
				{
					lowestPriority = r.Priority;
					lowestSound = s;
				}
			});

			return lowestSound;
		}

		/// <summary>
		/// 设置音量
		/// </summary>
		/// <param name="type">1:音乐，2：音效</param>
		/// <param name="volume"></param>
		[LuaCallCSharp]
		public  void SetVolume(int type, float volume)
		{
			if (type == 1)
			{
				BackVolume = volume;
				_backgroundAudioSource.volume = volume;
			}
			else if (type == 2)
			{
				EfVolume = volume;

				_uiAudioSource.volume = volume*0.4f;
				_sfxAudioSources.ToList().ForEach(audio => audio.volume = volume*0.4f);
			}
		}

		/// <summary>
		/// 设置静音
		/// </summary>
		/// <param name="isMute"></param>
		public static void SetMute(bool isMute)
		{
			_backgroundAudioSource.mute = isMute;
			_uiAudioSource.mute = isMute;
			_sfxAudioSources.ToList().ForEach(audio => audio.mute = isMute);
		}
	}
}