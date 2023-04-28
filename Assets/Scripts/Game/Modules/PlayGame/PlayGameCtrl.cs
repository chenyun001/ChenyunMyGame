//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-13 21:37:38
//Description: 
//=========================================

using System;
using MailingJoy.Core;
using MailingJoy.Core.UIFramework.ScreenBase;
using UnityEngine;

namespace MailingJoy.Game.Modules.PlayGame
{
	public class PlayGameCtrl : UICtrlBase
	{
		private void Start()
		{
			Invoke("Load",3);
		}

		private void Load()
		{
			AssetsManager.Instance.GetAsset<GameObject>("MainPanel.prefab");

		}
		
	}
}