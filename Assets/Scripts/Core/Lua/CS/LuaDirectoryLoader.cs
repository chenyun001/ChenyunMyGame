//=========================================
//Author: 洪金敏
//Create Date: 2019/01/20 09:13:15
//Description: 
//=========================================

using System;
using UnityEngine;
using System.IO;
using System.Text;

namespace MailingJoy.Lua
{
    public class LuaDirectoryLoader
    {
        public static byte[] Loader(ref string filePath)
        {
            var content = LoaderStr(ref filePath);
            if (string.IsNullOrEmpty(content))
            {
                return null;
            }
            return Encoding.UTF8.GetBytes(LoaderStr(ref filePath));
        }

        public static string LoaderStr(ref string filePath)
        {
            var path = Environment.CurrentDirectory + Path.DirectorySeparatorChar + "Assets"
                       + Path.DirectorySeparatorChar + "Game"
                       + Path.DirectorySeparatorChar + "Lua"
                       + Path.DirectorySeparatorChar + filePath + ".lua.txt";

            if (File.Exists(path))
            {
                var streamReader = new StreamReader(path);
                var fileStr = streamReader.ReadToEnd();
                streamReader.Close();
                return fileStr;
            }
            else
            {
                return null;
            }
        }
    }
}