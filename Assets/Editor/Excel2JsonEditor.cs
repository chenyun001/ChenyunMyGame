//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-06-02 00:08:08
//Description: 
//=========================================

using MailingJoy.Core.Utils.Excel;
using UnityEditor;

public class Excel2JsonEditor : Editor
{
    [MenuItem("Tools/Excel/Excel To Json")]
    public static void ParseExcel2Json()
    {
        ExcelPacker.ParseExcel();
        AssetDatabase.Refresh();
    }

    [MenuItem("Tools/Excel/Test Json Config")]
    public static void ReadConfig()
    {
        ExcelPacker.ReadConfig();
    }
}