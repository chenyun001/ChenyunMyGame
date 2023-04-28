//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-10-26 17:36:30
//Description: 
//=========================================

using MailingJoy.Core.Utils;

namespace Ext
{
	public static class ArrayExt
	{
		/// <summary>
		/// 随机数组中的一个值
		/// </summary>
		/// <param name="arr"></param>
		/// <typeparam name="T"></typeparam>
		/// <returns></returns>
		public static T Random<T>(this T[] arr)
		{
			var randomIndex = MathUtil.GetRandom(0, arr.Length);
			return arr[randomIndex];
		}
	}
}