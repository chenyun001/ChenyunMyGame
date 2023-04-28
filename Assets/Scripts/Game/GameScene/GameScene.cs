//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-24 23:34:41
//Description: 
//=========================================

using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using MailingJoy.Core;
using MailingJoy.Core.UIFramework;
using MailingJoy.Game.Modules.PlayGame;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
namespace MailingJoy.Game.GameScene
{
	public class GameScene : MonoBehaviour
	{
		public Button Button;
		private TextMeshProUGUI text;
		private async void Start()
		{
			// todo 先屏蔽掉 后面在处理
			//SoundManager.Instance.PlayBackgroundSound("bgm.mp3");
			//GameUIManager.Instance.OpenUI("PlayGame.prefab");
		}
		
	
	}
}