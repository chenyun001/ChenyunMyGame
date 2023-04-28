//=========================================
//Author: 洪金敏
//Create Date: 2019/01/20 11:17:57
//Description: 
//=========================================

using System;
using System.IO;
using System.Text;
using UnityEngine;

namespace MailingJoy.Lua
{
    /// <summary>
    /// 解决 require 'xx.yy'这种情况 实际路径xx/yy
    /// </summary>
    public class LuaDirectoryPathWithPointLoader
    {
        public static byte[] Loader(ref string filePath)
        {
            filePath = filePath.Replace('.', '/');
            return LuaDirectoryLoader.Loader(ref filePath);
        }

        public static string LoaderStr(ref string filePath)
        {
            filePath = filePath.Replace('.', '/');
            return LuaDirectoryLoader.LoaderStr(ref filePath);
        }
    }
}