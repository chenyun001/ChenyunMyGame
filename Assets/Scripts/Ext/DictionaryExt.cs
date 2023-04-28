//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-24 14:07:31
//Description: 
//=========================================

using System;
using System.Collections.Generic;

namespace Ext
{
    public class DictionaryEx<TKey, TValue> : Dictionary<TKey, TValue>
    {
        public new TValue this[TKey indexKey]
        {
            set => base[indexKey] = value;
            get
            {
                try
                {
                    return base[indexKey];
                }
                catch (Exception)
                {
                    return default(TValue);
                }
            }
        }
    }
}