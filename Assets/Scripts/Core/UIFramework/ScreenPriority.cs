//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-04 17:36:53
//Description: 
//=========================================

namespace MailingJoy.Core.UIFramework
{
	public enum ScreenPriority
	{
		Default = 0, //大厅以下 预留 目前没有使用到
		PriorityLobby = 10, //大厅层
		PriorityLobbyFace = 15, //大厅上运营活动
		PriorityLobbyForSystem = 20, //大厅上各种外围系统层级
		PriorityLobbyForMatchingSystem0 = 40, //大厅上的各种邀请或者浮动界面 
		PriorityLowLoadingCommonMessageBoxTips0 = 50, //游戏中各种通用弹框（低于loading页面）
		PriorityLobbyForLoading0 = 60, //各种loading页面层级
		PriorityUpLoadingCommonMessageBoxTips0 = 70, //游戏中各种通用弹框层级（高于loading页面）
		PriorityLobbyForNewPlayerGuide0 = 80, //游戏中新手指引层级

		//PriorityCount = 100
	};
}