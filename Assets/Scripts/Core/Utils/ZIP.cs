//=========================================
//Author: 洪金敏
//Create Date: 2019/03/21 14:55:07
//Description: 
//=========================================

using System;
using System.IO;
using System.Text;
using ICSharpCode.SharpZipLib.GZip;
using ICSharpCode.SharpZipLib.Zip;
using UnityEngine;

namespace MailingJoy.Core.Utils
{
    public class ZIP
    {
        /// <summary>
        ///     压缩文件
        /// </summary>
        /// <param name="filename">filename生成的文件的名称，如：C\123\123.zip</param>
        /// <param name="directory">directory要压缩的文件夹路径</param>
        /// <returns></returns>
        public static bool PackFiles(string filename, string directory)
        {
            try
            {
                if (!Directory.Exists(directory))
                {
                    Directory.CreateDirectory(directory);
                }

                if (File.Exists(filename))
                {
                    File.Delete(filename);
                }

                var fz = new FastZip {CreateEmptyDirectories = true};
                fz.CreateZip(filename, directory, true, string.Empty);
                return true;
            }

            catch (Exception e)
            {
                Debug.LogError(e.Message);
                return false;
            }
        }

        /// <summary>解压文件</summary>
        /// <param name="file">压缩文件的名称，如：C:\123\123.zip</param>
        /// <param name="dir">dir要解压的文件夹路径</param>
        /// <returns></returns>
        public static bool UnpackFiles(string file, string dir)
        {
            if (!File.Exists(file))
            {
                return true;
            }

            if (!Directory.Exists(dir))
            {
                Directory.CreateDirectory(dir);
            }

            if (!File.Exists(file))
            {
                return false;
            }

            if (!dir.EndsWith("/"))
            {
                dir += "/";
            }

            var fastZip = new FastZip {CreateEmptyDirectories = true};
            Debug.Log("unpack files " + file + " ================>>> " + dir);
            fastZip.ExtractZip(file, dir, string.Empty);
            if (File.Exists(file))
            {
                File.Delete(file);
            }

            return true;
        }

        public static byte[] CompressString(byte[] rawData, int compressLevel)
        {
            MemoryStream ms = new MemoryStream();
            GZipOutputStream compressedZipStream = new GZipOutputStream(ms);
            compressedZipStream.SetLevel(compressLevel);
            compressedZipStream.Write(rawData, 0, rawData.Length);
            compressedZipStream.Finish();
            compressedZipStream.Close();
            return ms.ToArray();
        }

        public static string DeCompressString(byte[] byteArray)
        {
            int MAX_BYTE_LENGTH = 5120;

            var configStr = string.Empty;
            using (MemoryStream ms = new MemoryStream(byteArray) {Position = 0})
            {
                using (GZipInputStream stream = new GZipInputStream(ms))
                {
                    using (MemoryStream resultStream = new MemoryStream())
                    {
                        byte[] data = new byte[MAX_BYTE_LENGTH];
                        int count;
                        while ((count = stream.Read(data, 0, MAX_BYTE_LENGTH)) > 0)
                        {
                            resultStream.Write(data, 0, count);
                        }

                        configStr = Encoding.UTF8.GetString(resultStream.ToArray());
                    }
                }
            }

            return configStr;
        }
    }
}