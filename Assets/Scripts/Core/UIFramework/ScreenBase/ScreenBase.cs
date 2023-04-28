//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-04 14:43:17
//Description: 界面基类
//=========================================

using System;
using UnityEngine;
using Object = UnityEngine.Object;

namespace MailingJoy.Core.UIFramework.ScreenBase
{
	public class ScreenBase : UILuaBase
	{
		private UICtrlBase _ctrlBase;
		private string _uiName;
		public string uiName {
			get 
			{
				return _uiName; 
			}
			set 
			{
				_uiName = value;
			}
		}
		protected UIOpenScreenParameterBase OpenParam;

		public GameObject PanelRoot { set; get; }
		public UICtrlBase CtrlBase => _ctrlBase;
		public int OpenOrder { private set; get; }
		public int SortingLayer;

		public ScreenBase(string uiName, UIOpenScreenParameterBase param = null)
		{
			StartLoad(uiName, param);
		}

		private void StartLoad(string uiName, UIOpenScreenParameterBase param)
		{
			_uiName = uiName;
			OpenParam = param;
			AssetsManager.Instance.GetAsset<GameObject>(_uiName, PanelLoadComplete);
		}

		private void PanelLoadComplete(GameObject go, object[] param)
		{
			PanelRoot = Object.Instantiate(go, GameUIManager.Instance.GetUIRootTransform());
			_ctrlBase = PanelRoot.GetComponent<UICtrlBase>();

			//初始化Lua逻辑
			InitLua(_ctrlBase.LuaFilePath,
				_ctrlBase.Injections,
				_ctrlBase.BtnInjections,
				_ctrlBase.TMPInjections,
				PanelRoot, OpenParam);
			// 更新层级信息
			UpdateLayoutLevel();

			OnLoadSuccess();

			//添加进控制层
			GameUIManager.Instance.AddUI(this);
		}

		protected override void OnLoadSuccess()
		{
			base.OnLoadSuccess();
			if (_ctrlBase.UseMask)
			{
				MaskScreenManager.Instance.Show(this);
			}
			_ctrlBase.OnUpdate += Update;
			
		}

		

		public virtual void OnClose()
		{
			GameUIManager.Instance.RemoveUI(this, _uiName);
		}

		public override void Dispose()
		{
			try
			{
				base.Dispose();
			}
			catch (Exception e)
			{
				Debug.LogError(e);
			}

			Object.Destroy(PanelRoot);
		}

		public void SetOpenOrder(int openOrder)
		{
			OpenOrder = openOrder;
			if (_ctrlBase != null && _ctrlBase.CtrlCanvas != null)
			{
				_ctrlBase.CtrlCanvas.sortingOrder = OpenOrder;
			}
		}

		private void UpdateLayoutLevel()
		{
			var camera = GameUIManager.Instance.GetUICamera();
			if (camera != null)
			{
				_ctrlBase.CtrlCanvas.worldCamera = camera;
			}

			_ctrlBase.CtrlCanvas.pixelPerfect = true;
			_ctrlBase.CtrlCanvas.overrideSorting = true;
			SortingLayer = (int) _ctrlBase.ScreenPriority;
			// _ctrlBase.CtrlCanvas.sortingLayerID = SortingLayer;
			_ctrlBase.CtrlCanvas.sortingLayerName = _ctrlBase.ScreenPriority.ToString();
			_ctrlBase.CtrlCanvas.sortingOrder = OpenOrder;
		}

		public void OnClickMaskArea()
		{
			OnClose();
		}
	}
}