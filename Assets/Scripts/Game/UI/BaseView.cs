/*
Author:hypnus
Create Date:20-05-21 04:22:52
*/


using System;
using MailingJoy.Core;
using MailingJoy.Core.UIFramework;
using MailingJoy.Lua;
using MailingJoy.Manager;
using UniRx;
using UnityEngine;
using UnityEngine.UI;
using XLua;

namespace Modules
{
	public enum PanelTweenMode
	{
		None,
		Up,
		Down,
		Left,
		Right,
		Bigger,
		Smaller,
		Manual,
	}

	[Obsolete]
	public class BaseView : LuaBehaviour
	{
		protected Button BtnBack;

		[HideInInspector]
		public string ModuleName;

		public event Action<BaseView> OnOpenCompleteEvent;

		[SerializeField]
		private PanelTweenMode TweenMode = PanelTweenMode.None;

		private object _data;
		private Action _pause;
		private Action _resume;

		protected void InitBackBtn(string path = "BtnBack")
		{
			BtnBack = transform.Find(path).GetComponent<Button>();
		}

		protected void InitBackBtn(Button btn)
		{
			BtnBack = btn;
		}

		public virtual void ExitPanel()
		{
			RemovePanel();
		}

		private void TweenEnter()
		{
			OnOpenCompleteEvent += OnCompleteHandler;
		}


		private void OnCompleteHandler(BaseView v)
		{
			OnEnterComplete();
		}


		protected virtual void Start()
		{
			ScriptEnv?.Set("ModuleName", ModuleName);
			base.Start();
			SendMessage("OnOpenPanel", _data, SendMessageOptions.DontRequireReceiver);
			TweenEnter();
		}

		public void RemoveSelf()
		{
			OnExit();
			Destroy(gameObject);
			Destroy(this);
		}

		public void RemovePanel()
		{
			//GameUIManager.Instance.CloseUI(typeof(ChapterPanel));
			// ModulesManager.Instance.PopPanel(ModuleName);
		}

		/// <summary>
		///     界面被显示出来
		/// </summary>
		public virtual void OnEnter(params object[] args)
		{
			_data = args;
			PlayDoTweenAnimation();
			if (ScriptEnv != null)
			{
				var luaEnter = ScriptEnv.Get<Action<LuaTable, object>>("on_enter");
				luaEnter?.Invoke(ScriptEnv, _data);
			}
		}

		private void PlayDoTweenAnimation()
		{
			OnDoTweenAnimationStart();
			//if (UiEffectManager.ShowUiEffect)
			//{
			//	gameObject.AddComponent<EnterAnimateController>().SetCallBack(OnDoTweenAnimationComplete);
			//}
			//else
			//{
			//	OnDoTweenAnimationComplete();
			//}
			OnDoTweenAnimationComplete();
		}


		public virtual void OnEnterComplete()
		{
			SendMessage("OnEnterCompleteFunc", _data, SendMessageOptions.DontRequireReceiver);
			if (BtnBack)
			{
				BtnBack.OnClickAsObservable().Subscribe(_ => { ExitPanel(); }).AddTo(this);
			}
		}

		protected virtual void OnDoTweenAnimationStart()
		{
			if (BtnBack)
			{
				BtnBack.interactable = false;
			}
		}

		protected virtual void OnDoTweenAnimationComplete()
		{
			OnOpenCompleteEvent?.Invoke(this);

			if (BtnBack)
			{
				BtnBack.interactable = true;
			}

			SendMessage("OnDoTweenAnimationCompleteFunc", SendMessageOptions.DontRequireReceiver);
		}

		/// <summary>
		///     界面暂停
		/// </summary>
		public virtual void OnPause()
		{
			if (ScriptEnv != null && _pause == null)
			{
				_pause = ScriptEnv.Get<Action>("pause");
			}

			_pause?.Invoke();
		}

		/// <summary>
		///     界面继续
		/// </summary>
		public virtual void OnResume()
		{
			SendMessage("OnResumeFunc", SendMessageOptions.DontRequireReceiver);
			if (ScriptEnv != null && _resume == null)
			{
				_resume = ScriptEnv.Get<Action>("resume");
			}

			_resume?.Invoke();
		}

		/// <summary>
		///     界面不显示,退出这个界面，界面被关闭
		/// </summary>
		public virtual void OnExit()
		{
			OnOpenCompleteEvent -= OnCompleteHandler;
		}
	}
}