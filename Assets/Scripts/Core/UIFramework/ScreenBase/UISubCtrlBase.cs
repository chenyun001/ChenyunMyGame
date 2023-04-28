//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-04 21:37:46
//Description: 
//=========================================

using System;
using MailingJoy.Game.DataContext;
using MailingJoy.Lua;
using UnityEngine;

namespace MailingJoy.Core.UIFramework.ScreenBase
{
	public class UISubCtrlBase : CustomBehaviour
	{
		#region Lua

		public string LuaFilePath;
		public Injection[] Injections;
		public ButtonInjection[] BtnInjections;
		public TextMeshProUGUIInjection[] TMPInjections;


		public TextMeshProUGUIInjection[] BaseText;

		protected virtual void Awake()
		{
			foreach (var singleText in BaseText)
			{
				singleText.Value.text = LanguageDataContext.GetLanguage(singleText.Name);
			}
			
			
		}

		#endregion
	}
}