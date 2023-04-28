using System.Collections;
using System.Collections.Generic;
using MailingJoy.Lua;
using UnityEngine;
using MailingJoy.Game.DataContext.Excel;
using XLua;

namespace MailingJoy.Game.DataContext
{
    public static class MapDataContext
    {

        private static LuaTable _data;

        public static LuaTable Data
        {
            get
            {
                if (_data == null)
                    _data = LuaEnvSingleton.LuaEnv.Global.Get<LuaTable>("mapData");
                return _data;
            }
        }

        [CSharpCallLua]
        public delegate MapDataExcel GetMapById(LuaTable self,int id);
        private static GetMapById _getMapAction;

        [CSharpCallLua]
        public static MapDataExcel GetmapData(int id)
        {
            if (_getMapAction == null)
                _getMapAction = Data.Get<GetMapById>("get_map_by_id");
            MapDataExcel str = _getMapAction?.Invoke(Data,id);
            return str; 
        }
        
        
    }
}
