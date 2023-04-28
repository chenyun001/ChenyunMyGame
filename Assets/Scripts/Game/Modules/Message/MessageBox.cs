//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-10 15:27:18
//Description: 
//=========================================

using System;
using Game.Modules.Message;
using MailingJoy.Core.UIFramework;
using MailingJoy.Core.UIFramework.ScreenBase;
using UnityEngine;
using XLua;

namespace MailingJoy.Game.Modules.Message
{
	public class MessageBox : ScreenBase
	{
		public MessageBox(UIOpenScreenParameterBase param = null) : base("MessageBox.prefab", param)
		{
		}

		/// <summary>
		/// 通用弹框
		/// </summary>
		/// <param name="messageBoxType">MessageBoxType</param>
		/// <param name="message">对话框内容</param>
		/// <param name="callback">点击按钮回调函数</param>
		/// <param name="okField">OK按钮内容</param>
		/// <param name="cancelField">Cancel按钮内容</param>
		[LuaCallCSharp]
		public static void Show(int messageBoxType, string message,
			Action<int> callback,
			string okField = "",
			string cancelField = "")
		{
			GameUIManager.Instance.OpenUI(typeof(MessageBox),
				new MessageBoxUIOpenScreenParameter
				{
					MessageBoxType = messageBoxType,
					Message = message,
					OkField = okField,
					CancelField = cancelField,
					CallbackHandle = callback,
				});
		}

		[LuaCallCSharp]
		public static void ShowError(string errorMessage)
		{
		
			Tips.Tips.Show(errorMessage,1);

		}

		[LuaCallCSharp]
		public static void ShowTips(string errorMessage, Color color)
		{
			Tips.Tips.Show(errorMessage,1);
		}
	}
}