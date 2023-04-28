//=========================================
//Author: 洪金敏
//Create Date: 2019/01/27 17:21:15
//Description: 
//=========================================

using System.IO;
using ExcelDataReader;

namespace MailingJoy.Core.Utils.Excel
{
    public static class ExcelReader
    {
        public static System.Data.DataTableCollection Read(string path)
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
    }
}