﻿using System;

namespace Model.Excel
{
    [Serializable]
    public class ItemExcel
    {
        public int itemId;
        public int pileAmount;
        public int sellPrice;
        public int type;
        public bool canUse;
        public bool canSell;
        public string name;
        public int color;
        public string detail;
        public int packageId;
        public int sortId;
        public int checkType;
        public int arg1;
    }
}
