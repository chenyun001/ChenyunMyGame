using UnityEngine;

namespace MailingJoy.Utils
{
    public class StringToValue
    {
        public static Vector2Int[] ToIntArray(string str)
        {
            if (str == null || str == "0") return null;
            var a = str.Split("|");
            
            Vector2Int[] array = new Vector2Int[a.Length];

            for (int i = 0; i < a.Length; i++)
            {
                var vec = a[i].Split(',');
                array[i] = new Vector2Int(int.Parse(vec[0]),int.Parse( vec[1]));
            }
            return array;
        }
    }
}