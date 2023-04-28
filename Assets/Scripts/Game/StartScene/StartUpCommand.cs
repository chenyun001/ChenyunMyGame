//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-17 14:35:09
//Description: 
//=========================================

using PureMVC.Patterns.Command;

namespace MailingJoy.Game.Start
{
    public class StartUpCommand : MacroCommand
    {
        protected override void InitializeMacroCommand()
        {
            AddSubCommand(() => new RegisterCmdCommand());
            AddSubCommand(() => new RegisterProxyCommand());
            AddSubCommand(() => new StartCommand());
        }
    }
}