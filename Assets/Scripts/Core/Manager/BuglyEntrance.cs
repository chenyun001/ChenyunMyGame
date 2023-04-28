//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-12-01 20:17:47
//Description: 
//=========================================

using MailingJoy.Game;
using UnityEngine;

namespace MailingJoy.Core
{
	public class BuglyEntrance : MonoBehaviour
	{
		private const string BuglyAppID =
#if UNITY_IOS || UNITY_IPHONE
		"38758ac61a";
#elif UNITY_ANDROID
			"0f16960ad3";
#else
		"";
#endif

		private void Awake()
		{
			BuglyAgent.ConfigDebugMode(false);
			BuglyAgent.ConfigDefault(AppConst.PlatformName, null, null, 0);
			BuglyAgent.ConfigAutoReportLogLevel(LogSeverity.LogError);
			BuglyAgent.ConfigAutoQuitApplication(false);
			BuglyAgent.RegisterLogCallback(null);
			BuglyAgent.InitWithAppId(BuglyAppID);
			BuglyAgent.EnableExceptionHandler();
			
			Destroy(this);
		}
	}
}