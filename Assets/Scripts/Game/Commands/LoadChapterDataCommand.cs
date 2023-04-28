using MailingJoy.Game.Models;
using PureMVC.Interfaces;
using PureMVC.Patterns.Command;
using UnityEngine;

namespace MailingJoy.Game.Commands
{
    public class LoadChapterDataCommand:SimpleCommand
    {
        public override void Execute(INotification notification)
        {
            //UserModel.GetData();
            // ChapterModel.GetUserData();
            // ChapterModel.GetChapterData();
            // ChapterModel.GetHeroData();
        }
    }
}