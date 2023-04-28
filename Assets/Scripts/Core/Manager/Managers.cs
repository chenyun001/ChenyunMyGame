//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-17 14:50:29
//Description: 
//=========================================

//using Core.Chat;
using MailingJoy.Lua;
using XLua;

namespace MailingJoy.Core
{
    [LuaCallCSharp]
    public class Managers
    {
        public static LuaFrameworkEntry LuaFrameworkEntry;


        // public static IPlatform Platform
        // {
        //     get
        //     {
        //         return _platform ?? (_platform =
        //             (AppFacade.GetInstance().RetrieveProxy(Modules.Platform.Platform.NAME) as IPlatform));
        //     }
        // }
        //
        // private static IPlatform _platform;

        //public static IChatService ChatService
        //{
        //    get
        //    {
        //        return _chatService ??= AppFacade.GetInstance().RetrieveProxy("ChatProxy") as IChatService;
        //    }
        //}

        //private static IChatService _chatService;
    }
}