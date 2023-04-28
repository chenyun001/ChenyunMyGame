/*
Author:hypnus
Create Date:20-06-05 09:36:46
*/

using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using LitJson;
using MailingJoy.Game;
using MailingJoy.Utils;
using UnityEngine;


namespace MailingJoy.Core.Utils.Excel
{
    public class ExcelPacker
    {
        public static string DataOutputFile =
            Path.Combine(Application.streamingAssetsPath, "config.dat");

        private static Dictionary<string, string> JsonDic = new Dictionary<string, string>();

        public static void ParseExcel()
        {
            JsonDic.Clear();
            try
            {
                LoadExcelDirectory(AppConst.ExcelPath);
                MakeFile();
//                CopyDataFile();
            }
            catch (Exception e)
            {
                Debugger.LogError(e);
            }
        }

        public static void ReadConfig()
        {
            LoadDataFile(DataOutputFile);
        }

        private static void LoadExcelDirectory(string dirPath)
        {
            if (Directory.Exists(dirPath))
            {
                var directoryInfo = new DirectoryInfo(dirPath);
                foreach (var info in directoryInfo.GetFileSystemInfos())
                {
                    if (info.Name == ".svn")
                    {
                        continue;
                    }

                    if (info is DirectoryInfo)
                    {
                        LoadExcelDirectory(info.FullName);
                    }
                    else if (info is FileInfo)
                    {
                        LoadExcelFile(info.FullName);
                    }
                }
            }

            LoadExcelFile(dirPath);
        }

        /// <summary>
        /// Sheet 开头的 认为是建立 EXCEL 时候默认创建的
        /// 不去解析
        /// </summary>
        private static Regex Regex = new Regex("^Sheet[0-9]|^_");

        private static void LoadExcelFile(string excelPath)
        {
            if (File.Exists(excelPath))
            {
                var fileInfo = new FileInfo(excelPath);
                if (fileInfo.Extension == ".xlsx" &&
                    fileInfo.Name.IndexOf('~') == -1)
                {
                    var tableCollection = ExcelReader.Read(fileInfo.FullName);
                    var tableCount = tableCollection.Count;
                    for (var index = 0; index < tableCount; index++)
                    {
                        var table = tableCollection[index];
                        var tableName = table.TableName;
                        if (Regex.IsMatch(tableName))
                        {
                            continue;
                        }

                        try
                        {
                            var json = Excel2Json.ParseDataCollection(tableName, table.Rows);
                            if (!JsonDic.ContainsKey(tableName))
                                JsonDic[tableName] = json;
                        }
                        catch (Exception e)
                        {
                            throw new Exception($"excel {tableName} table error: {e}");
                        }
                    }
                }
            }
        }

        private static void MakeFile()
        {
            var jsonWriter = new JsonWriter();
            jsonWriter.WriteObjectStart();
            foreach (var vk in JsonDic)
            {
                jsonWriter.WritePropertyName(vk.Key);
                jsonWriter.Write(vk.Value);
            }

            jsonWriter.WriteObjectEnd();
            JsonDic.Clear();
            var content = jsonWriter.ToString();
            var contentBytes = Encoding.UTF8.GetBytes(content);
            //自动生成out文件夹
            var file = new FileInfo(DataOutputFile);
            if (!file.Directory.Exists)
            {
                Directory.CreateDirectory(file.DirectoryName);
            }

            contentBytes = ZIP.CompressString(contentBytes, 3);
            File.WriteAllBytes(file.FullName, contentBytes);
        }

        private static void LoadDataFile(string cfgFile)
        {
            FileStream fileStream =
                new FileStream(cfgFile, FileMode.Open, FileAccess.Read, FileShare.Read);
            byte[] bytes = new byte[fileStream.Length];
            fileStream.Read(bytes, 0, bytes.Length);
            fileStream.Close();
            string dataStr = ZIP.DeCompressString(bytes);

            var dict = JsonUtility.FromJson<Dictionary<string, object>>(dataStr);
            foreach (var configKey in dict.Keys)
            {
                var jsonDataStr = dict[configKey] as string;
            }

//            if (Json.Deserialize(dataStr) is Dictionary<string, object> dict)
//            {
//                foreach (var configKey in dict.Keys)
//                {
//                    var jsonDataStr = dict[configKey] as string;
//                }
//            }
        }

        private static void CopyDataFile()
        {
            var configFolder = Directory.GetParent(AppConst.ConfigPath);
            if (!configFolder.Exists)
            {
                configFolder.Create();
            }

            File.Copy(DataOutputFile, AppConst.ConfigPath, true);
        }
    }
}