//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2019/08/07 12:57:31
//Description: 
//=========================================

using System;

namespace MSocketLib
{
    [Serializable]
    public abstract class MNetData
    {
        public int Cmd;
        public int Err;
    }
}