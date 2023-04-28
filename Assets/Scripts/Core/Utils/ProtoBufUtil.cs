//=========================================
//Author: 洪金敏
//Create Date: 2018/12/28 18:29:15
//Description: 
//=========================================

using System.IO;
using Google.Protobuf;
using ProtoBuf;

namespace MailingJoy.Core.Utils
{
    public static class ProtoBufUtil
    {
        public static byte[] Serialize(object obj)
        {
            using (MemoryStream ms = new MemoryStream())
            {
                Serializer.Serialize(ms, obj);
                var result = new byte[ms.Length];
                ms.Position = 0;
                ms.Read(result, 0, result.Length);
                return result;
            }
            
        }

        public static byte[] Serialize(IMessage msg)
        {
            using (MemoryStream ms = new MemoryStream())
            {
                CodedOutputStream output = new CodedOutputStream(ms);
                output.WriteMessage(msg);
                output.Flush();
                byte[] result = ms.ToArray();
                return result;
            }
        }

        public static T Deserialize<T>(byte[] dataBytes) where T : IMessage, new()
        {
            CodedInputStream ms = new CodedInputStream(dataBytes);
            T msg = new T();
            ms.ReadMessage(msg);
            return msg;
        }

        public static int Serialize<T>(object obj, ref byte[] buffer, bool isPrefix = false) where T : class
        {
            using (MemoryStream ms = new MemoryStream())
            {
                if (obj != null)
                {
                    if (isPrefix)
                    {
                        Serializer.SerializeWithLengthPrefix(ms, (T) obj, PrefixStyle.Base128);
                    }
                    else
                    {
                        Serializer.Serialize(ms, obj);
                    }
                }

                ms.Position = 0;
                int length = (int) ms.Length;
                ms.Read(buffer, 0, length);
                return length;
            }

            return 0;
        }

        public static T Deserialize<T>(byte[] bytes, bool isPrefix = false)
        {
            T result;
            using (MemoryStream ms = new MemoryStream())
            {
                ms.Write(bytes, 0, bytes.Length);
                ms.Position = 0;
                if (isPrefix)
                {
                    result = Serializer.DeserializeWithLengthPrefix<T>(ms, PrefixStyle.Base128);
                }
                else
                {
                    result = Serializer.Deserialize<T>(ms);
                }
                ms.Flush();
                ms.Close();
                return result;
            }
        }
    }
}