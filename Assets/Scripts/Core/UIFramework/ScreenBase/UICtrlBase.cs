//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021/01/04 14:46:24
//Description: 
//=========================================

using System;
using Ext;
using UnityEngine;
using UnityEngine.UI;

namespace MailingJoy.Core.UIFramework.ScreenBase
{
	public class UICtrlBase : UISubCtrlBase
	{
		[HideInInspector]
		public Canvas CtrlCanvas;

		[Tooltip("显示层级")]
		public ScreenPriority ScreenPriority = ScreenPriority.PriorityLobbyForSystem;

		[Tooltip("打开黑色遮罩层")]
		public bool UseMask;

		[Tooltip("黑色遮罩层能否被点击(点击后关闭)")]
		public bool MaskClickEnable;

		public Action<float> OnUpdate;

		protected override void Awake()
		{
			CtrlCanvas = gameObject.EnsureComponent<Canvas>();
			gameObject.EnsureComponent<GraphicRaycaster>();
			var canvasScaler = gameObject.EnsureComponent<CanvasScaler>();
			
			CtrlCanvas.renderMode = RenderMode.ScreenSpaceCamera;
			if (canvasScaler.uiScaleMode != CanvasScaler.ScaleMode.ConstantPhysicalSize)
			{
				canvasScaler.uiScaleMode = CanvasScaler.ScaleMode.ConstantPixelSize;
				canvasScaler.referencePixelsPerUnit = 100;
				canvasScaler.scaleFactor = Screen.height / 1080f;
				// canvasScaler.referenceResolution = new Vector2(1920, 1080);
			}
			base.Awake();
		}

	

		protected virtual void Update()
		{
			OnUpdate?.Invoke(Time.deltaTime);
		}

		
	}
}