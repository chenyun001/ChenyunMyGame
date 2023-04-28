using System;

namespace MailingJoy.Core.Utils
{
    public class TimeUtil
    {
        public static readonly int DAY = 24 * 60 * 60;
        public static readonly int HOUR = 60 * 60;
        public static readonly int MIN = 60;

        public static string ToMinuteAndSecString(int timeSec)
        {
            int sec = timeSec % 60;
            int minute = (timeSec - sec) / 60;
            if (sec < 10)
            {
                return minute + ":0" + sec;
            }
            else
            {
                return minute + ":" + sec;
            }
        }

        public static long[] ToDHMS(long timeSec)
        {
            var day = timeSec / DAY;
            var hour = (timeSec - day * DAY) / HOUR;
            var min = timeSec / 60 - hour * 60 - day * 60 * 24;
            var sec = timeSec % MIN;

            return new[] {day, hour, min, sec};
        }


        public static string CheckDeltaDay(long timeSec)
        {
            long sec = timeSec % 60;
            long minute = timeSec / 60;
            long hour = minute / 60;
//		minute = minute % 60;
            if (hour >= 24)
            {
                return hour / 24 + "天"+hour%24+"小时"+minute%60+"分";
            }

            if (minute >= 60)
            {
                return hour + "小时"+minute%60+"分";
            }
            else
            {
                return minute + "分";
            }
        }

        /// <summary>
        /// 转带小时的
        /// </summary>
        /// <param name="timeSec"></param>
        /// <returns></returns>
        public static string ToHourAndMinuteAndSecString(long timeSec)
        {
            long sec = timeSec % 60;
            long minute = timeSec / 60;
            long hour = minute / 60;
            minute = minute % 60;
            string str;
            if (hour < 10)
            {
                str = "0" + hour + ":";
            }
            else
            {
                str = hour + ":";
            }

            if (minute < 10)
            {
                str += "0" + minute + ":";
            }
            else
            {
                str += minute + ":";
            }

            if (sec < 10)
            {
                return str + "0" + sec;
            }
            else
            {
                return str + "" + sec;
            }
        }

        /// <summary>        
        /// 时间戳转为C#格式时间        
        /// </summary>        
        /// <param name="timeStamp"></param>        
        /// <returns></returns>        
        public static DateTime ConvertStringToDateTime(string timeStamp)
        {
            DateTime dtStart = TimeZone.CurrentTimeZone.ToLocalTime(new DateTime(1970, 1, 1));
            long lTime = long.Parse(timeStamp + "0000");
            TimeSpan toNow = new TimeSpan(lTime);
            return dtStart.Add(toNow);
        }

        /// <summary>
        /// 从1970到现在的毫秒数
        /// </summary>
        /// <returns></returns>
        public static long CurrentMS()
        {
            long currentTicks = DateTime.Now.ToUniversalTime().Ticks;
            DateTime dtFrom = new DateTime(1970, 1, 1, 0, 0, 0, 0);
            long currentMillis = (currentTicks - dtFrom.Ticks) / 10000;

            return currentMillis;
        }


        public static string OpeningDayTime(long openTime, long endTime)
        {
            string ot = ConvertStringToDateTime(openTime.ToString()).ToString();
            string et = ConvertStringToDateTime(endTime.ToString()).ToString();
            return $"{ot}-{et}";
        }
    }
}