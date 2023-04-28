//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-10-26 17:37:59
//Description: 
//=========================================

using System;
using TrueSync;
using UnityEngine;
using XLua;
using Random = UnityEngine.Random;

namespace MailingJoy.Core.Utils
{
    public class MathUtil
    {
        /// <summary>
        /// 更改随机数种子
        /// </summary>
        /// <param name="seed"></param>
        [LuaCallCSharp]
        public static void SetBattleSeed(int seed)
        {
            TSRandom.instance = TSRandom.New(seed);
        }

        /// <summary>
        /// 获取随机数
        /// </summary>
        /// <param name="minNumber"></param>
        /// <param name="maxNumber"></param>
        /// <param name="randomSeed"></param>
        /// <returns></returns>
        [LuaCallCSharp]
        public static float GetRandom(float minNumber, float maxNumber)
        {
            return TSRandom.Range(minNumber, maxNumber).AsFloat();
        }

        /// <summary>
        /// 获取随机数
        /// </summary>
        /// <param name="minNumber"></param>
        /// <param name="maxNumber"></param>
        /// <param name="randomSeed"></param>
        /// <returns></returns>
        [LuaCallCSharp]
        public static int GetRandom(int minNumber, int maxNumber)
        {
            return TSRandom.Range(minNumber, maxNumber);
        }

        /// <summary>
        /// 随机命中检测
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        [LuaCallCSharp]
        public static bool RandomTest(int value)
        {
            var r = GetRandom(0, 101);
            return value >= r;
        }

        /// <summary>
        /// 左移
        /// </summary>
        /// <param name="value"></param>
        /// <param name="shiftNum"></param>
        /// <returns></returns>
        [LuaCallCSharp]
        public static int LShift(int value, int shiftNum)
        {
            return value << shiftNum;
        }

        /// <summary>
        /// 右移
        /// </summary>
        /// <param name="value"></param>
        /// <param name="shiftNum"></param>
        /// <returns></returns>
        [LuaCallCSharp]
        public static int RShift(int value, int shiftNum)
        {
            return value >> shiftNum;
        }

        [LuaCallCSharp]
        public static int GetNumberPosFlag(int value, int pos)
        {
            //0000 1111		1111 1111
            value = value >> (32 - pos * 8);
            value &= 0xff;
            return value;
        }

        [LuaCallCSharp]
        public static int ArrayToBitNumber(int[] array)
        {
            var bitNumber = 0;
            foreach (var i in array)
            {
                if (i == 0)
                {
                    bitNumber = 0;

                    return bitNumber;
                }
                else if (i == 1)
                {
                    bitNumber = bitNumber + 1;
                }
                else
                {
                    bitNumber = bitNumber + (1 << (i));
                }
            }

            return bitNumber;
        }

        [LuaCallCSharp]
        public static int BitwiseAnd(int a, int b)
        {
            return a & b;
        }

        [LuaCallCSharp]
        public static int BitwiseOr(int a, int b)
        {
            return a | b;
        }

        [LuaCallCSharp]
        public static int BitwiseXor(int a, int b)
        {
            return a ^ b;
        }

        [LuaCallCSharp]
        public static int BitwiseUnary(int a)
        {
            return ~a;
        }


        public static int GetDir(float rotate)
        {
            if (rotate > Mathf.PI)
            {
                rotate = rotate - 2 * MathF.PI;
            }

            if (rotate is < MathF.PI / 4 and > -MathF.PI / 4)
            {
                return 0;
            }
            else if (rotate is > MathF.PI / 4 and < 3 * MathF.PI / 4)
            {
                return 1;
            }
            else if (rotate is > 3 * MathF.PI / 4 or < -3 * MathF.PI / 4)
            {
                return 2;
            }
            else if (rotate is < -MathF.PI / 4 and > -3 * MathF.PI / 4)
            {
                return 3;
            }

            return 0;
        }

        [LuaCallCSharp]
        public static Vector3[] LineCal(Vector3 startPos, Vector3 endPos, int needPointNumber)
        {
            Vector3 dis = startPos - endPos;
            Vector3 centerPos = startPos + new Vector3(0, dis.magnitude / 2, 0);
            float number = 1f * needPointNumber;
            //定义一个数组,用来存放路径点,他的长度是从0 - needPointNumber的长度,及从0-1
            Vector3[] targetPosArr = new Vector3[needPointNumber + 1];
            //只有在等于needPointNumber时Lerp()中最后一项的值才为1,所有比needPointNumber数多1
            for (int i = 0; i <= needPointNumber; i++)
            {
                //第一层
                Vector3 one1 = Vector3.Lerp(startPos, centerPos, i / number);
                Vector3 one2 = Vector3.Lerp(centerPos, endPos, i / number);
                //目标层
                Vector3 targetPos = Vector3.Lerp(one1, one2, i / number);
                //将目标层放入我们的路径点中
                targetPosArr[needPointNumber - i] = targetPos;
            }

            //在for循环结束之后得到所有的路径点
            return targetPosArr;
        }

        public static Vector3 HighBullet(Vector3 startPos, Vector3 endPos, float t,float height=-10)
        {
            Vector3 dis = startPos - endPos;
            Vector3 centerPos = startPos + new Vector3(dis.magnitude / 2, dis.magnitude / 2, height);
            Vector3 one1 = Vector3.Lerp(startPos, centerPos, t);
            Vector3 one2 = Vector3.Lerp(centerPos, endPos, t);
            Vector3 targetPos = Vector3.Lerp(one1, one2, t);
            return targetPos;
        }
    }
}