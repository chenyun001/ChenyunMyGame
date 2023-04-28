//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-24 14:37:00
//Description: 
//=========================================

using System;
using XLua;

namespace Ext
{
    [LuaCallCSharp]
    public static class ObjectExt
    {
        /// <summary>
        /// 对象如果为Null，抛出异常
        /// </summary>
        /// <param name="o"></param>
        /// <param name="message">异常消息</param>
        public static void ThrowIfNull(this object o, string message)
        {
            if (o == null) throw new NullReferenceException(message);
        }
    }
}