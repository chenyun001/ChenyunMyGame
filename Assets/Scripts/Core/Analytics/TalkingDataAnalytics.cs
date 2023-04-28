// //=========================================
// //Author: 洪金敏
// //Email: jonny.hong91@gmail.com
// //Create Date: 2020-11-20 17:52:18
// //Description: 
// //=========================================
//
// using System;
// using MailingJoy.Game;
// using UnityEngine;
//
// namespace MailingJoy.Core.Analytics
// {
// 	public class TalkingDataAnalytics : MonoSingleton<TalkingDataAnalytics>
// 	{
// 		public void Start()
// 		{
// 			TalkingDataGA.BackgroundSessionEnabled();
// 			TalkingDataGA.OnStart("746C046A90214611B347F8D6A48CD10F", AppConst.PlatformName);
// 		}
//
// 		private void Update()
// 		{
// #if TDGA_PUSH
// 			TalkingDataGA.SetDeviceToken();
// 			TalkingDataGA.HandlePushMessage();
// #endif
// 		}
//
// 		protected override void OnDestroy()
// 		{
// 			TalkingDataGA.OnEnd();
// 		}
// 	}
// }