//=========================================
//Author: 洪金敏
//Create Date: 2019/01/20 09:13:22
//Description: 
//=========================================

using System.IO;
using System.Text;
using UnityEngine;

namespace MailingJoy.Lua
{
    public class LuaPersistentLoader
    {
        public static byte[] Loader(ref string filePath)
        {
            var path = Application.persistentDataPath + Path.DirectorySeparatorChar + "Lua" +
                       Path.DirectorySeparatorChar + filePath + ".lua";

            if (File.Exists(path))
            {
                var streamReader = new StreamReader(path);
                var fileStr = streamReader.ReadToEnd();
                streamReader.Close();
                Debug.LogFormat("Load {0}.lua from {1}", filePath, path);
                return Encoding.UTF8.GetBytes(fileStr);
            }
            else
            {
                return null;
            }
        }
    }
}