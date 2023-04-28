//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-10-30 14:01:52
//Description: 
//=========================================

using System.Collections.Generic;

namespace Ext
{
	public static class ListExt
	{
		/// <summary>
		/// 赋值列表内容
		/// </summary>
		/// <param name="l"></param>
		/// <typeparam name="T"></typeparam>
		/// <returns></returns>
		public static List<T> Copy<T>(this List<T> l)
		{
			var list = new List<T>();
			l.ForEach(list.Add);
			return list;
		}
	}
}