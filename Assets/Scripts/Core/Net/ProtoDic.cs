using System;
using System.Collections.Generic;
using Ext;
using Google.Protobuf;
using MailingJoy.Core;

namespace Core.Net
{
    public class ProtoDic : SingletonBase<ProtoDic>
    {
        private Dictionary<int, MessageParser> _dic;

        public void Init()
        {
            _dic = new Dictionary<int, MessageParser>();
            /*基础数据*/
            // Add(0, int.Parser);
            // Add(1, string.Parser);
            // Add(2, byte.Parser);
            // Add(3, int.Parser);
            // Add(4, long.Parser);
            // Add(5, float.Parser);
            // Add(6, double.Parser);
            // Add(7, bool.Parser);
            // Add(8, byte[].Parser);
            // Add(9, long.Parser);
            //MessageParser[] a = new[] {AuthResponse.Parser};
            
            
        }

        private void Add(int cmd, MessageParser type)
        {

            _dic.Add(cmd, type);
        }

        public MessageParser Get(int cmd)
        {
            return _dic[cmd];
        }
    }
}