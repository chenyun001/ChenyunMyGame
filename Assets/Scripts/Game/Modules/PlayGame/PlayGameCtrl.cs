//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-13 21:37:38
//Description: 
//=========================================

using System;
using MailingJoy.Core;
using MailingJoy.Core.UIFramework;
using MailingJoy.Core.UIFramework.ScreenBase;
using UnityEngine;
using UnityEngine.UI;

namespace MailingJoy.Game.Modules.PlayGame
{
	public class PlayGameCtrl : UICtrlBase
	{
        protected  override void Awake()
        {
			base.Awake();
			Button button = transform.Find("obj_main/btn_start").GetComponent<Button>();
			button.onClick.AddListener(() => {
				GameUIManager.Instance.OpenUI("LoadingScreen.prefab");
			});

		}
        private void Start()
		{
			Invoke("Load",3);
		}

		private void Load()
		{
			AssetsManager.Instance.GetAsset<GameObject>("mainScreen.prefab");

		}
		
	}
}