//=========================================
//Author: 洪金敏
//Create Date: 2019/01/27 14:46:42
//Description: 
//=========================================

using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace MailingJoy.Lua
{
	[System.Serializable]
	public class Injection
	{
		public string Name;
		public GameObject Value;
	}

	[System.Serializable]
	public class ButtonInjection
	{
		public string Name;
		public Button Value;
	}

	[System.Serializable]
	public class TextMeshProUGUIInjection
	{
		public string Name;
		public TextMeshProUGUI Value;
	}
}