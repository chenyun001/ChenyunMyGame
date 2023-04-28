//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-06-02 00:00:55
//Description: 
//=========================================

using System;
using System.Data;
using LitJson;
using MailingJoy.Utils;

using UnityEngine;

namespace MailingJoy.Core.Utils.Excel
{
    public static class Excel2Json
    {
        /// <summary>
        /// 判断一整行是空的
        /// </summary>
        /// <param name="rowData"></param>
        /// <param name="dataCount"></param>
        /// <returns></returns>
        private static bool CheckEmptyRow(object[] rowData, int dataCount)
        {
            for (int index = 0; index < dataCount; index++)
            {
                var data = rowData[index];
                if (data != DBNull.Value)
                {
                    return false;
                }
            }

            return true;
        }

        public static string ParseDataCollection(string tableName, DataRowCollection excelData)
        {
            var columns = excelData.Count;
            var variable = excelData[2].ItemArray;
            var types = excelData[1].ItemArray;

            //真实需要转换的数据
            var realCount = 0;
            foreach (var o in variable)
            {
                if (o.ToString() != string.Empty)
                {
                    realCount++;
                }
            }
            
            var jsonWriter = new JsonWriter();
            jsonWriter.WriteArrayStart();
            for (var c = 3; c < columns; c++)
            {
                var rows = excelData[c];

                //所有实际数据
                var rowData = rows.ItemArray;

                //一整行是空的 后面的都是注释
                if (CheckEmptyRow(rowData, realCount))
                {
                    break;
                }

                jsonWriter.WriteObjectStart();
                for (var i = 0; i < realCount; i++)
                {
                    var d = rowData[i];
                    //有个格子是空的丢弃 这一行 
                    if (d == DBNull.Value || d.ToString() == string.Empty)
                    {
                        break;
                    }

                    //变量名
                    var var = variable[i].ToString().Trim();
                    if (var.StartsWith("_"))
                    {
                        continue;
                    }

                    //类型
                    var typeStr = types[i].ToString().Trim().ToLower();


                    jsonWriter.WritePropertyName(var);
                    switch (typeStr)
                    {
                        case "boolean":
                        case "bool":
                            jsonWriter.Write(d.ToString() != "0");
                            break;

                        case "datetime":
                        case "intpair":
                        case "intvector3":
                        case "string":
                            var strData = Convert.ToString(d);
                            jsonWriter.Write(strData);
                            break;
                        case "int":
                            jsonWriter.Write(Convert.ToInt32(d));
                            break;

                        case "float":
                        case "number":
                            jsonWriter.Write(Convert.ToSingle(d));
                            break;

                        case "double":
                            jsonWriter.Write(Convert.ToDouble(d));
                            break;

                        case "boolean[]":
                        case "bool[]":
                            var boolStr = d.ToString();
                            var boolList = boolStr.Split(',');

                            jsonWriter.WriteArrayStart();
                            foreach (var b in boolList)
                            {
                                jsonWriter.Write(b != "0");
                            }
                            jsonWriter.WriteArrayEnd();
                            break;
                        case "string[]":
                            var str = d.ToString();
                            var strList = str.Split(',');

                            jsonWriter.WriteArrayStart();
                            foreach (var s in strList)
                            {
                                 jsonWriter.Write(s);
                            }
                            jsonWriter.WriteArrayEnd();
                            break;
                        case "int[]":
                            var intData = d.ToString();
                            var iList = intData.Split(',');
                            jsonWriter.WriteArrayStart();
                            foreach (var v in iList)
                            {
                                jsonWriter.Write(Convert.ToInt32(v));
                            }
                            jsonWriter.WriteArrayEnd();
                            break;

                        default:
                            Debugger.LogError($"{tableName}:{var}:{typeStr} 未配置类型");
                            break;
                    }
                }

                jsonWriter.WriteObjectEnd();
            }

            jsonWriter.WriteArrayEnd();

            return jsonWriter.ToString();
        }
    }
}