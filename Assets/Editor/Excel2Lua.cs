using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using System.Data;
using System.Drawing;
using System.Text.RegularExpressions;
using DG.DemiEditor;
using ExcelDataReader;
using MailingJoy.Game;

using UnityEditor;

public class Excel2Lua
{
    private static readonly string luaPath =
        Application.dataPath + Path.DirectorySeparatorChar +
        "Game" + Path.DirectorySeparatorChar + "Lua" +
        Path.DirectorySeparatorChar + "data" + Path.DirectorySeparatorChar;

    private static readonly string csPath =
        Application.dataPath + Path.DirectorySeparatorChar +
        "Scripts" + Path.DirectorySeparatorChar + "Game" +
        Path.DirectorySeparatorChar + "DataContext" +
        Path.DirectorySeparatorChar + "Excel" + Path.DirectorySeparatorChar;

    private static readonly string excelPath = AppConst.ExcelPath;

    [MenuItem("Tools/Excel/Excel To Lua")]
    private static void ExcelToLua()
    {
        Debug.Log(excelPath+ "-----------excelPath---------------");
        if (!Directory.Exists(excelPath))
        {
            Debug.LogError("excel folder is not exist");
            return;
        }

        EmptyFolder(luaPath);
        ParseExcel(false);
        LoadLuaFile(luaPath);
        WriteConfig();
        AssetDatabase.Refresh();
    }

    [MenuItem("Tools/Excel/Excel To Cs")]
    private static void ExcelToCs()
    {
        if (!Directory.Exists(excelPath))
        {
            Debug.LogError("excel folder is not exist");
            return;
        }

        EmptyFolder(csPath);
        ParseExcel(true);
        AssetDatabase.Refresh();
    }

    private static void EmptyFolder(string folderPath)
    {
        if (Directory.Exists(folderPath))
        {
            foreach (var file in Directory.EnumerateFiles(folderPath))
            {
               File.Delete(file);
            }
        }
        else
        {
            Directory.CreateDirectory(folderPath);
        }
    }

    private static void ParseExcel(bool isCs)
    {
        try
        {
            LoadExcelDir(excelPath, isCs);
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            throw;
        }
        finally
        {
            // EditorUtility.OpenFolderPanel("LuaFilePath", luaPath, "");
        }
    }

    private static DataTableCollection ReadExcel(string path)
    {
        using (var stream = File.Open(path, FileMode.Open, FileAccess.Read))
        {
            using (var excelReader = ExcelReaderFactory.CreateOpenXmlReader(stream))
            {
                var result = excelReader.AsDataSet();
                return result.Tables;
            }
        }
    }

    private static void LoadExcelDir(string excelDirPath, bool isCs)
    {
        if (Directory.Exists(excelDirPath))
        {
            var dirInfo = new DirectoryInfo(excelDirPath);
            var files = dirInfo.GetFileSystemInfos();
            foreach (var file in files)
            {
                if (file.Name == ".svn")
                {
                    continue;
                }

                if (file is DirectoryInfo)
                {
                    LoadExcelDir(file.FullName, isCs);
                }
                else if (file is FileInfo)
                {
                    if (isCs)
                        LoadExcelToCs(file.FullName);
                    else
                        LoadExcel(file.FullName);
                }
            }
        }

        if (isCs)
            LoadExcelToCs(excelDirPath);
        else
            LoadExcel(excelDirPath);
    }

    private static Regex Regex = new Regex("^Sheet[0-9]|^_");

    #region Excel2Cs

    public static void LoadExcelToCs(string excelPath)
    {
        if (File.Exists(excelPath))
        {
            var fileInfo = new FileInfo(excelPath);
            var fileName = fileInfo.Name.Split('.')[0];
            if (fileInfo.Extension == ".xlsx" && fileInfo.Name.IndexOf("~") == -1)
            {
                var csStr =
                    "//// Generated from Excel File.\n //DONOT EDIT IT !!!\n\nnamespace MailingJoy.Game.DataContext.Excel \n{\n";
                var tableCollection = ReadExcel(fileInfo.FullName);
                var tableCount = tableCollection.Count;
                for (int i = 0; i < tableCount; i++) //table count iterator
                {
                    var table = tableCollection[i];
                    var tableName = table.TableName.Trim();
                    if (Regex.IsMatch(tableName))
                        continue;
                    if (table.Rows.Count < 4)
                        continue;
                    var RowType = table.Rows[1];
                    var RowKey = table.Rows[2];
                    // for (int row = 3; row < table.Rows.Count; row++) //table row iterator
                    // {
                    DataRow dr = table.Rows[3];
                    var emptyCount = 0;
                    foreach (var variable in dr.ItemArray)
                    {
                        if (variable.ToString() == string.Empty)
                        {
                            emptyCount++;
                        }
                    }

                    if (emptyCount >= RowKey.ItemArray.Length)
                    {
                        continue;
                    }

                    var className = tableName.Substring(0, 1).ToUpper() + tableName.Substring(1);
                    csStr += "    [System.Serializable]\n    public partial class " + className + "Excel\n    {\n";
                    for (int col = 0; col < table.Columns.Count; col++) //table col iterator
                    {
                        DataColumn dc = table.Columns[col];
                        if (RowKey[dc].ToString().Contains("_") || RowKey[dc].ToString().Contains("remark"))
                            continue;
                        // var value = dr[dc].ToString();
                        // if (String.IsNullOrEmpty(value))
                        //     continue;
                        var variable = RowType[dc].ToString().ToLower();
                        if (string.IsNullOrEmpty(variable))
                            continue;
                        var _rowKey = RowKey[dc].ToString();
                        if (_rowKey.Contains("#"))
                        {
                            _rowKey = _rowKey.Split('#')[1];
                        }

                        switch (variable)
                        {
                            case "intpair":
                            case "datetime":
                            case "intvector3":
                            case "string":
                                csStr += "        public string " + _rowKey + ";\n";
                                break;
                            case "string[]":
                                csStr += "        public string[] " + _rowKey + ";\n";
                                break;
                            case "string{}[]":
                                csStr += "        public string[][] " + _rowKey + ";\n";
                                break;
                            case "int{}[]":
                                csStr += "        public int[][] " + _rowKey + ";\n";
                                break;
                            case "vector3[]":
                                csStr += "        public UnityEngine.Vector3[] " + _rowKey + ";\n";
                                break;
                            case "vector2[]":
                                csStr += "        public UnityEngine.Vector2[] " + _rowKey + ";\n";
                                break;
                            case "vector2int[]":
                                csStr += "        public UnityEngine.Vector2Int[] " + _rowKey + ";\n";
                                break;
                            case "vector3":
                                csStr += "        public UnityEngine.Vector3 " + _rowKey + ";\n";
                                break;
                            case "vector2":
                                csStr += "        public UnityEngine.Vector2 " + _rowKey + ";\n";
                                break;
                            case "vector2int":
                                csStr += "        public UnityEngine.Vector2Int " + _rowKey + ";\n";
                                break;
                            case "bool":
                            case "boolean":
                                csStr += "        public bool " + _rowKey + ";\n";
                                break;
                            case "bool[]":
                            case "boolean[]":
                                csStr += "        public bool[] " + _rowKey + ";\n";
                                break;
                            case "int":
                                csStr += "        public int " + _rowKey + ";\n";
                                break;
                            case "long":
                                csStr += "        public long " + _rowKey + ";\n";
                                break;
                            case "float":
                                csStr += "        public float " + _rowKey + ";\n";
                                break;
                            case "number":
                                csStr += "        public int " + _rowKey + ";\n";
                                break;
                            case "double":
                                csStr += "        public double " + _rowKey + ";\n";
                                break;
                            case "int[]":
                            {
                                csStr += "        public int[] " + _rowKey + ";\n";
                            }
                                break;
                            default:
                                Debug.LogError($"没有{variable}类型");
                                break;
                        }
                    }

                    // }
                    csStr += "    }\n\n";
                }

                csStr += "}";
                var csFile = csPath + fileName + "Excel.cs";
                File.WriteAllText(csFile, csStr);
            }
        }
    }

    #endregion

    #region Excel2Lua

    private static Dictionary<string,int> keys =new Dictionary<string,int>();
    public static void LoadExcel(string excelPath)
    {
        
        //if (File.Exists(excelPath))
        //{
        //    Debug.Log("读表中"+excelPath);
        //    var fileInfo = new FileInfo(excelPath);
        //    var fileName = fileInfo.Name.Split('.')[0];
        //    if (fileInfo.Extension == ".xlsx" && fileInfo.Name.IndexOf("~") == -1)
        //    {
        //        List<string> tableNames = new List<string>();
        //        Queue<int> keyIndexQueue = new Queue<int>();
        //        var luaStr = "local config = {\n";
        //        var subKeyStr = "";
        //        var tableCollection = ReadExcel(fileInfo.FullName);
        //        var tableCount = tableCollection.Count;
        //        for (int i = 0; i < tableCount; i++) //table count iterator
        //        {
        //            keys.Clear();

        //            bool hasKeyValue = false; //contans #
        //            var table = tableCollection[i];
        //            var tableName = table.TableName.Trim();
        //            if (Regex.IsMatch(tableName))
        //                continue;
        //            if (table.Rows.Count < 4)
        //                continue;
        //            tableNames.Add(tableName);
        //            var tableStr = "     [\"" + tableName + "\"]={\n";
        //            var RowType = table.Rows[1];
        //            var RowKey = table.Rows[2];
        //            for (int j = 0; j < RowKey.ItemArray.Length; j++)
        //            {
        //                if (RowKey.ItemArray[j].ToString().Contains("#"))
        //                {
        //                    hasKeyValue = true;
        //                    keyIndexQueue.Enqueue(j);
        //                }
        //            }

        //            int mainKeyIndex = 0;
        //            if (keyIndexQueue.Count > 0)
        //            {
        //                mainKeyIndex = keyIndexQueue.Dequeue();
        //            }

        //            for (int row = 3; row < table.Rows.Count; row++) //table row iterator
        //            {
        //                DataRow dr = table.Rows[row];
        //                var emptyCount = 0;
        //                foreach (var variable in dr.ItemArray)
        //                {
        //                    if (variable.ToString() == string.Empty)
        //                    {
        //                        emptyCount++;
        //                    }
        //                }

        //                if (emptyCount >= RowKey.ItemArray.Length)
        //                    break;

        //                var rowStr = string.Empty;
        //                var mainKeyStr = string.Empty;
        //                if (hasKeyValue)
        //                {
        //                    var mainKey = dr[mainKeyIndex];
        //                    mainKeyStr = "          [" + mainKey + "]";
        //                    if (RowType[mainKeyIndex].ToString() == "string")
        //                    {
        //                        mainKeyStr = "          [\"" + mainKey + "\"]";
        //                    }

        //                    if (keys.ContainsKey(mainKey.ToString()))
        //                    {
        //                        Debug.LogErrorFormat(@"SheetName:{0}有唯一id有重复参数:{1},上一行在:{2},最新行:{3}", tableName, mainKey,
        //                            keys[mainKey.ToString()], row + 1);
        //                    }
        //                    else
        //                    {
        //                    }
        //                    keys[mainKey.ToString()]=row+1;
        //                }
        //                else
        //                {
        //                    var index = row - 2;
        //                    mainKeyStr = "          [" + index + "]";
        //                }

        //                rowStr += mainKeyStr + "={\n";
        //                for (int col = 0; col < table.Columns.Count; col++) //table col iterator
        //                {
        //                    var colStr = "";
        //                    DataColumn dc = table.Columns[col];
        //                    if (RowKey[dc].ToString().Contains("_") || RowKey[dc].ToString().Contains("remark"))
        //                    {
        //                        continue;
        //                    }

        //                    var value = dr[dc].ToString();
        //                    if (String.IsNullOrEmpty(value))
        //                        continue;

        //                    var variable = RowType[dc].ToString().ToLower();
        //                    // if (string.IsNullOrEmpty(variable))
        //                    // {
        //                    //     continue;
        //                    // }

        //                    var format = "";
        //                    var _rowKey = RowKey[dc].ToString();
        //                    if (_rowKey.Contains("#"))
        //                    {
        //                        _rowKey = _rowKey.Split('#')[1];
        //                    }

        //                    switch (variable)
        //                    {
        //                        case "intpair":
        //                        case "datetime":
        //                        case "param":
        //                            format =  value;
        //                            colStr += "                [\"" + _rowKey + "\"]=" + format + ",\n";
        //                            break;
        //                        case "string":
        //                            format = string.Format("\"{0}\"", value);
        //                            colStr += "                [\"" + _rowKey + "\"]=" + format + ",\n";
        //                            break;
        //                        case "string[]":
        //                        {
        //                            format = "{\n";
        //                            var tempStr = "";
        //                            var splitStr = value.Split(',');
        //                            for (int index = 1; index <= splitStr.Length; index++)
        //                            {
        //                                tempStr += "                                  [" + index.ToString() + "]=" +
        //                                           "\"" + splitStr[index - 1] + "\"";
        //                                tempStr += ",\n";
        //                            }

        //                            format += tempStr + "                                }";
        //                            colStr += "                [\"" + _rowKey + "\"]=" + format + ",\n";
        //                        }
        //                            break;
        //                        case "string{}[]":
        //                        {
        //                            format = "{\n";
        //                            var tempStr = "";

        //                            var splitStr = value.Split('|');
        //                            for (int index = 1; index <= splitStr.Length; index++)
        //                            {
        //                                splitStr[index - 1] = splitStr[index - 1].Replace(",", "\",\"");
        //                                tempStr += "                                  [" + index.ToString() + "]=" +
        //                                           "{\"" + splitStr[index - 1] + "\"}";
        //                                tempStr += ",\n";
        //                            }

        //                            format += tempStr + "                                }";
        //                            colStr += "                [\"" + _rowKey + "\"]=" + format + ",\n";
        //                        }
        //                            break;
        //                        case "int{}[]":
        //                        {
        //                            format = "{\n";
        //                            var tempStr = "";

        //                            var splitStr = value.Split('|');
        //                            for (int index = 1; index <= splitStr.Length; index++)
        //                            {
        //                                tempStr += "                                  [" + index.ToString() + "]=" +
        //                                           "{" + splitStr[index - 1] + "}";
        //                                tempStr += ",\n";
        //                            }

        //                            format += tempStr + "                                }";
        //                            colStr += "                [\"" + _rowKey + "\"]=" + format + ",\n";
        //                        }
        //                            break;
        //                        case "vector3[]":
        //                        {
        //                            format = "{\n";
        //                            var tempStr = "";

        //                            var splitStr = value.Split('|');
        //                            for (int index = 1; index <= splitStr.Length; index++)
        //                            {
        //                                var array = splitStr[index - 1].Split(',');
        //                                var vector = $"[\"x\"]={array[0]},[\"y\"]={array[1]},[\"z\"]={array[2]}";
        //                                tempStr += "                                  [" + index.ToString() + "]=" +
        //                                           "{" + vector + "}";
        //                                tempStr += ",\n";
        //                            }

        //                            format += tempStr + "                                }";
        //                            colStr += "                [\"" + _rowKey + "\"]=" + format + ",\n";
        //                        }
        //                            break;
        //                        case "vector2[]":
        //                        {
        //                            format = "{\n";
        //                            var tempStr = "";
        //                            try
        //                            {
        //                                if (value == "0")
        //                                {
        //                                    value = "0,0";
        //                                }
        //                                var splitStr = value.Split('|');
        //                                for (int index = 1; index <= splitStr.Length; index++)
        //                                {
        //                                    var array = splitStr[index - 1].Split(',');
        //                                    var vector = $"[\"x\"]={array[0]},[\"y\"]={array[1]}";
        //                                    tempStr += "                                  [" + index.ToString() + "]=" +
        //                                               "{" + vector + "}";
        //                                    tempStr += ",\n";
        //                                }

        //                                format += tempStr + "                                }";
        //                                colStr += "                [\"" + _rowKey + "\"]=" + format + ",\n";
        //                            }
        //                            catch (Exception e)
        //                            {
        //                                Debug.LogError(value+"字段报错vector2[]");
        //                                throw;
        //                            }
                                  
        //                        }
        //                            break;
        //                        case "vector2int[]":
        //                        {
        //                            format = "{\n";
        //                            var tempStr = "";

        //                            var splitStr = value.Split('|');
        //                            for (int index = 1; index <= splitStr.Length; index++)
        //                            {
        //                                var array = splitStr[index - 1].Split(',');
        //                                var vector = $"[\"x\"]={array[0]},[\"y\"]={array[1]}";
        //                                tempStr += "                                  [" + index.ToString() + "]=" +
        //                                           "{" + vector + "}";
        //                                tempStr += ",\n";
        //                            }

        //                            format += tempStr + "                                }";
        //                            colStr += "                [\"" + _rowKey + "\"]=" + format + ",\n";
        //                        }
        //                            break;
        //                        case "vector3":
        //                        {
        //                            format = "{";
        //                            var tempStr = "";

        //                            var array = value.Split(',');
        //                            var vector = $"[\"x\"]={array[0]},[\"y\"]={array[1]},[\"z\"]={array[2]}";
        //                            tempStr +=
        //                                vector;
        //                            format += tempStr + "}";
        //                            colStr += "                [\"" + _rowKey + "\"]=" + format + ",\n";
        //                        }
        //                            break;
        //                        case "vector2":
        //                        {
        //                            format = "{";
        //                            var tempStr = "";

        //                            var array = value.Split(',');
        //                            var vector = $"[\"x\"]={array[0]},[\"y\"]={array[1]}";
        //                            tempStr += vector;

        //                            format += tempStr + "}";
        //                            colStr += "                [\"" + _rowKey + "\"]=" + format + ",\n";
        //                        }
        //                            break;
        //                        case "vector2int":
        //                        {
        //                            format = "{";
        //                            var tempStr = "";

        //                            var array = value.Split(',');
        //                            var vector = $"[\"x\"]={array[0]},[\"y\"]={array[1]}";
        //                            tempStr += vector;

        //                            format += tempStr + "}";
        //                            colStr += "                [\"" + _rowKey + "\"]=" + format + ",\n";
        //                        }
        //                            break;
        //                        case "bool":
        //                        case "boolean":
        //                        {
        //                            var f = value != "0";
        //                            format = f.ToString().ToLower();
        //                            colStr += "                [\"" + _rowKey + "\"]=" + format + ",\n";
        //                        }
        //                            break;
        //                        case "bool[]":
        //                        case "boolean[]":
        //                        {
        //                            format = "{\n";
        //                            var tempStr = "";
        //                            var splitStr = value.Split(',');
        //                            for (int index = 1; index <= splitStr.Length; index++)
        //                            {
        //                                tempStr += "                                  [" + index.ToString() + "] = " +
        //                                           (splitStr[index - 1] != "0").ToString().ToLower();
        //                                tempStr += ",\n";
        //                            }

        //                            format += tempStr + "                                }";
        //                            colStr += "                [\"" + _rowKey + "\"]=" + format + ",\n";
        //                        }
        //                            break;
        //                        case "int":
        //                        case "float":
        //                        case "number":
        //                        case "long":
        //                        case "double":
        //                            format = string.Format("{0}", value);
        //                            colStr += "                [\"" + _rowKey + "\"]=" + format + ",\n";
        //                            break;
        //                        case "int[]":
        //                        {
        //                            format = "{\n";
        //                            var tempStr = "";
        //                            var splitStr = value.Split(',');
        //                            for (int index = 1; index <= splitStr.Length; index++)
        //                            {
        //                                tempStr += "                                  [" + index.ToString() + "]=" +
        //                                           splitStr[index - 1];
        //                                tempStr += ",\n";
        //                            }

        //                            format += tempStr + "                                }";
        //                            colStr += "                [\"" + _rowKey + "\"]=" + format + ",\n";
        //                        }
        //                            break;
        //                        default:
        //                            Debug.LogError($"没有{variable}类型");
        //                            break;
        //                    }

        //                    rowStr += colStr;
        //                } //col

        //                //添加 sub key
        //                var c = "config." + tableName;
        //                var k = "";
               
        //                foreach (var keyIndex in keyIndexQueue)
        //                {
        //                    var key = dr[keyIndex];
        //                    k = "[" + key + "] = ";
        //                    if (RowType[keyIndex].ToString() == "string")
        //                    {
        //                        k = "[\"" + key + "\"] = ";
        //                    }

        //                    subKeyStr += c + k + c + mainKeyStr.Trim() + "\n";

        //                }
        //                tableStr += rowStr + "                 },\n";
        //            }

        //            keyIndexQueue.Clear();
        //            luaStr += tableStr + "     },\n";
        //        }

        //        luaStr += "}\n";
        //        luaStr += subKeyStr;
        //        var returnStr = "return {\n";
        //        foreach (var table in tableNames)
        //        {
        //            returnStr += table + "= config[\"" + table + "\"],\n";
        //        }

        //        returnStr += "}\n";
        //        luaStr += returnStr;
        //        tableNames.Clear();
        //        var luaFile = luaPath + fileName + ".lua.txt";
        //        File.WriteAllText(luaFile, luaStr);
        //    }
        //}
    }

    private static List<string> luaFiles = new List<string>();

    private static void LoadLuaFile(string path)
    {
        var directInfo = new DirectoryInfo(path);
        var fileInfos = directInfo.GetFiles();

        foreach (var fileInfo in fileInfos)
        {
            if (fileInfo is FileInfo)
            {
                var fileName = fileInfo.Name.Split('.')[0];
                if (!luaFiles.Contains(fileName))
                    luaFiles.Add(fileName);
            }
        }
    }

    private static void WriteConfig()
    {
        var requireStr = "\n\n\n";
        foreach (var luaFile in luaFiles)
        {
            requireStr += $"require (\"data/{luaFile}\")\n";
        }

        var index = luaPath.IndexOf("data");
        var path = luaPath.Substring(0, index);
        var configFilePath = path + Path.DirectorySeparatorChar + "data" +
                             Path.DirectorySeparatorChar + "config.lua.txt";
        File.WriteAllText(configFilePath, requireStr);
    }

    #endregion
}