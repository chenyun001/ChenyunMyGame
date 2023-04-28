//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-24 13:12:43
//Description: 
//=========================================

using System.IO;
using UnityEngine;
using XLua;

namespace MailingJoy.Game
{
	public static class AppConst
	{
		/// <summary>
		/// 存档文件
		/// </summary>
		public const string DATA_FILE = "save.dat";

		/// <summary>
		/// 配置表路径
		/// </summary>
		public static readonly string ConfigPath =
			Application.streamingAssetsPath + Path.DirectorySeparatorChar + "config.dat";

		/// <summary>
		/// Excel 路径
		/// </summary>
		public static readonly string ExcelPath =
			System.Environment.CurrentDirectory + Path.DirectorySeparatorChar + "excel";


		/// <summary>
		/// 存放地图配置的文件夹路径
		/// </summary>
		public static string BattleMapConfigFolder = Application.dataPath + "/Game/Map/";

		/// <summary>
		/// 存放波数配置的文件夹路径
		/// </summary>
		public static string BattleRoundConfigFolder = Application.dataPath + "/Game/Round/";

		/// <summary>
		/// 战斗逻辑帧 一帧的时间
		/// </summary>
		public static readonly int BattleTickInterval = 20;

		/// <summary>
		/// 地图缩放
		/// </summary>
		public static float BattleMapScale = 1f;

		public static float StandardScreenWidth = 1920f;
		public static float StandardScreenHeight = 1080f;
		public static float ScreenWidth;
		public static float ScreenHeight;

		public static string deviceUniqueIdentifier = SystemInfo.deviceUniqueIdentifier;

		public static string PlatformName =
#if TAPTAP
			"taptap";
#elif WUFUN
			"5fun2";
#elif KUAIBAO
        "kuaibao3";
#else
			"default";
#endif
		public static string LuaDebugPath = "nodasdsadsadasdsa";
		public static bool LuaDebug = false;

	
	}
}