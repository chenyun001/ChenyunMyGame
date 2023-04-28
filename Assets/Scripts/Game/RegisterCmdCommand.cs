//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-17 14:35:38
//Description: 
//=========================================

using GameBase;
using MailingJoy.Game.Commands;
using MailingJoy.Game.Notify;
using PureMVC.Interfaces;
using PureMVC.Patterns.Command;

namespace MailingJoy.Game
{
	public class RegisterCmdCommand : SimpleCommand
	{
		public override void Execute(INotification notification)
		{
			base.Execute(notification);

			Facade.RegisterCommand(GameNotify.ASSET_UPDATE, () => new AssetUpdateCommand());
			Facade.RegisterCommand(ChapterNotify.LoadChapterData, () => new LoadChapterDataCommand());

			Facade.RegisterCommand(NotifyConst.SendToLua,()=>new SendCommandToLua());
			
		}
	}


}