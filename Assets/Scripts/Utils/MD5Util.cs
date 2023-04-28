//=========================================
//Author: 洪金敏
//Create Date: 2019/01/02 15:28:33
//Description: 
//=========================================

using System;
using System.IO;
using System.Security.Cryptography;
using System.Text;

namespace MailingJoy.Utils
{
    public static class MD5Util
    {
        public static string GetMD5WithString(string sDataIn)
        {
            var str = "";
            var data = Encoding.GetEncoding("utf-8").GetBytes(sDataIn);
            MD5 md5 = new MD5CryptoServiceProvider();
            var bytes = md5.ComputeHash(data);
            for (var i = 0; i < bytes.Length; i++)
            {
                str += bytes[i].ToString("x2");
            }
            return str;
        }


        public static string GetMD5WithFilePath(string filePath)
        {
            var file = new FileStream(filePath, FileMode.Open, FileAccess.Read, FileShare.Read);
            var md5 = new MD5CryptoServiceProvider();
            var hashByte = md5.ComputeHash(file);
            var str = BitConverter.ToString(hashByte);
            str = str.Replace("-", "");
            file.Close();
            return str;
        }
    }
}