//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-18 23:42:59
//Description: 
//=========================================

using UnityEngine;
using UnityEngine.UI;

namespace MailingJoy.Core.UIFramework
{
	public class MaskScreenManager : SingletonBase<MaskScreenManager>
	{
		private GameObject _mask;

		/// <summary>
		/// 打开遮罩面板
		/// </summary>
		/// <param name="screen">遮罩所需的参数,会根据param来设置关联的页面</param>
		public void Show(ScreenBase.ScreenBase screen)
		{
			if (_mask == null)
			{
				AssetsManager.Instance.GetAsset<GameObject>("ScreenMask.prefab", (mask, objects) =>
				{
					_mask = mask;
					AttachEvent(screen);
				});
			}
			else
			{
				AttachEvent(screen);
			}
		}

		private void AttachEvent(ScreenBase.ScreenBase screen)
		{
			// 以防界面当帧打开后又立即关闭,导致screen为null报错
			if (screen == null || screen.CtrlBase == null) return;
			var go = Object.Instantiate(_mask, screen.PanelRoot.transform);
			go.transform.SetAsFirstSibling();
			go.name = "UIAutoMask_Created by Mask ScreenManager";
			Button btnMask = go.GetComponent<Button>();
			if (btnMask != null && screen.CtrlBase.MaskClickEnable)
			{
				btnMask.onClick.AddListener(screen.OnClickMaskArea);
			}
		}
	}
}