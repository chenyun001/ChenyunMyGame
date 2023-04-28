//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-17 14:28:23
//Description: 
//=========================================

using MailingJoy.Game.Start;
using PureMVC.Patterns.Facade;
using Unity.VisualScripting;
using XLua;

namespace MailingJoy.Core
{
    [LuaCallCSharp]
    public class AppFacade : Facade
    {
        protected override void InitializeController()
        {
            base.InitializeController();
            RegisterCommand(StartNotify.START_UP, () => new StartUpCommand());
        }

        public void StartUp()
        {
            SendNotification(StartNotify.START_UP);
        }

        private static AppFacade _instance;

        public static AppFacade GetInstance()
        {
            if (_instance == null)
            {
                _instance = new AppFacade();
            }

            return _instance;
        }
        
        
    }
}