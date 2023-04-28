//=========================================
//Author: 洪金敏
//Create Date: 2019/01/30 14:01:36
//Description: 
//=========================================

using System;
using System.Collections;
using System.IO;
using System.Linq;
using System.Threading;
using UnityEngine;

namespace MailingJoy.Core.Utils
{
    public class FileUtil
    {
        public static void CopyFolder(string srcPath, string tarPath)
        {
            if (!Directory.Exists(tarPath))
            {
                
                Directory.CreateDirectory(tarPath);
            }

            CopyFile(srcPath, tarPath);
            var directionName = Directory.GetDirectories(srcPath);
            foreach (var dirPath in directionName)
            {
                var directionPathTemp = tarPath + "\\" + dirPath.Substring(srcPath.Length + 1);
                CopyFolder(dirPath, directionPathTemp);
            }
        }

        public static IEnumerator CopyFileByWWW(string srcPath, string tarPath)
        {
            var www = new WWW(srcPath);
            yield return www;
            if (www.isDone)
            {
                byte[] bytes = www.bytes;
                if (bytes.Length > 0)
                {
                    WriteFile(tarPath, bytes);
                }

                yield return new WaitForEndOfFrame();
            }
        }

        public static void CopyFileByWWWSync(string srcPath, string tarPath, Action cb = null)
        {
            var www = new WWW(srcPath);

            while (!www.isDone)
            {
                Thread.Sleep(TimeSpan.FromMilliseconds(50));
            }

            if (!string.IsNullOrEmpty(www.error))
            {
                Debug.LogError($"FileUtil CopyFileByWWWSync Error =>\n {www.error}");
            }

            WriteFile(tarPath, www.bytes);

            Debug.Log("拷贝完成 ===> " + srcPath);
            cb?.Invoke();
        }


        public static void CopyFile(string srcFolderPath, string tarFolderPath)
        {
            var filesList = Directory.GetFiles(srcFolderPath);

            if (!Directory.Exists(tarFolderPath))
            {
                Directory.CreateDirectory(tarFolderPath);
            }

            foreach (var f in filesList)
            {
                var fTarPath = tarFolderPath + Path.DirectorySeparatorChar +
                               f.Split(Path.DirectorySeparatorChar).Last();
                if (File.Exists(fTarPath))
                {
                    File.Copy(f, fTarPath, true);
                }
                else
                {
                    File.Copy(f, fTarPath);
                }
            }
        }

        public static void WriteFile(string filePath, byte[] bytes)
        {
            var fs = new FileStream(filePath, FileMode.Create);
            var streamWriter = new BinaryWriter(fs);
            streamWriter.Write(bytes);
            streamWriter.Flush();
            streamWriter.Close();
            fs.Close();
        }

        public static string FixWindowsPath(string path)
        {
            path = path.Replace("\\", "/");

            return path;
        }

        /// <summary>
        /// 将文件转换成byte[]数组
        /// </summary>
        /// <param name="fileUrl">文件路径文件名称</param>
        /// <returns>byte[]数组</returns>
        public static byte[] FileToByte(string fileUrl)
        {
            try
            {
                using (FileStream fs = new FileStream(fileUrl, FileMode.Open, FileAccess.Read))
                {
                    byte[] byteArray = new byte[fs.Length];
                    fs.Read(byteArray, 0, byteArray.Length);
                    return byteArray;
                }
            }
            catch
            {
                return null;
            }
        }

        /// <summary>
        /// 将byte[]数组保存成文件
        /// </summary>
        /// <param name="byteArray">byte[]数组</param>
        /// <param name="fileName">保存至硬盘的文件路径</param>
        /// <returns></returns>
        public static bool ByteToFile(byte[] byteArray, string fileName)
        {
            bool result = false;
            try
            {
                using (FileStream fs = new FileStream(fileName, FileMode.Create, FileAccess.Write))
                {
                    fs.Write(byteArray, 0, byteArray.Length);
                    result = true;
                }
            }
            catch (Exception e)
            {
                Debug.LogError(e);
                result = false;
            }

            return result;
        }
    }
}