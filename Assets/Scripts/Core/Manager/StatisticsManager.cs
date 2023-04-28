//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-12-03 16:01:59
//Description: 
//=========================================

using System.Collections.Generic;
using System.Linq;
using MailingJoy.Game;
using MailingJoy.Game.Models;
using UniRx;
using UnityEngine;
using CardInfo = proto.core.CardInfo;

namespace MailingJoy.Core
{
	public class StatisticsManager : SingletonBase<StatisticsManager>
	{
		private const string STATISTICS_URL = "http://39.105.34.250:19999/";
//		private const string STATISTICS_URL = "http://172.20.0.84:19999/";

		private float _startMissionTime;

		public void StartMission(string missionId)
		{
			_startMissionTime = Time.realtimeSinceStartup;
			// TDGAMission.OnBegin(missionId);
		}

		public void SendMission(string missionId, int state, int star, List<CardInfo> cardInfos)
		{
			var currentTime = Time.realtimeSinceStartup;

			var duration = (int) (currentTime - _startMissionTime);
			if (state == StatisticsMissionState.LOSE)
			{
				// TDGAMission.OnFailed(missionId, "LOSE");
			}
			else if (state == StatisticsMissionState.WIN)
			{
				// TDGAMission.OnCompleted(missionId);
			}
			else if (state == StatisticsMissionState.EXIT)
			{
				// TDGAMission.OnFailed(missionId, "EXIT");
			}

			if (Application.platform != RuntimePlatform.OSXEditor &&
			    Application.platform != RuntimePlatform.WindowsEditor)
			{
				var url = STATISTICS_URL + "mission";
				var form = new WWWForm();
				form.AddField("missionId", missionId);
				//var account = UserModel.User.account;
				//form.AddField("roleName", account);
				form.AddField("state", state);
				form.AddField("platform", AppConst.PlatformName);
				form.AddField("cards", ParseCard2String(cardInfos));
				form.AddField("deviceModel", SystemInfo.deviceModel);
				form.AddField("star", star);
				form.AddField("duration", duration);
				ObservableWWW.PostWWW(url, form).Retry(10).Subscribe();
			}
		}

		private string ParseCard2String(List<CardInfo> cardInfos)
		{
			var ids = cardInfos.Select(c => c.Id);
			return string.Join(",", ids);
		}

		public void OnEvent(string actionId, Dictionary<string, object> p)
		{
			// TalkingDataGA.OnEvent(actionId, p);
		}
	}

	public class StatisticsMissionState
	{
		public static int LOSE = 0;
		public static int WIN = 1;
		public static int EXIT = 2;
	}

	public class StatisticsEvent
	{
		/// <summary>
		/// 打开推荐阵容
		/// </summary>
		public static string OPEN_RECOMMAND_PANEL = "OPEN_RECOMMAND_PANEL";

		/// <summary>
		/// 使用Machine
		/// </summary>
		public static string USE_MACHINE = "USE_MACHINE";
	}
}