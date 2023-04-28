using System;

namespace Model.Excel
{
    [Serializable]
    public class UIEffectExcel
    {
        public string effectName;
        public string address;
        public int type;
        public string animationName;
        public bool loop;
        public float endTime;
        public float completeTime;
    }
}