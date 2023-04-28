//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-01-19 18:19:37
//Description: 
//=========================================

using MailingJoy.Game.DataContext;
using UnityEngine;
using UnityEngine.UI;

namespace Core.Helper
{
    public class NumberStringConvert
    {
        public static string FightVal(long fightVal)
        {
            string val = "";
            string fight = "";
            int type = 0;
            if (fightVal > 10000000)
            {
                val = (fightVal / 1000000f).ToString("F1");
                type = 3;
                if (val[val.Length - 1] == '0')
                {
                    fight =val.Remove(val.Length - 2, 2);
                }
                fight = val.ToString();

            }
            else if (fightVal > 100000)
            {
                val = (fightVal / 1000f).ToString("F1");
                type = 2;
                if (val[val.Length - 1] == '0')
                {
                    fight=val.Remove(val.Length - 2, 2);

                }

                fight = val.ToString();
            }
            else
            {
                fight= (fightVal).ToString();
                type = 1;
            }
            InputField a;
            fight = LanguageDataContext.GetLanguage("ValueType_" + type, fight);
            return fight;
        }
    }
}