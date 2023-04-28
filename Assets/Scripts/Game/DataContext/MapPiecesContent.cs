using System.Collections;
using System.Collections.Generic;
using MailingJoy.Lua;
using UnityEngine;
using MailingJoy.Game.DataContext.Excel;
using XLua;

namespace MailingJoy.Game.DataContext
{
    public static class MapPiecesContent
    {

        private static LuaTable _data;

        public static LuaTable Data
        {
            get
            {
                if (_data == null)
                    _data = LuaEnvSingleton.LuaEnv.Global.Get<LuaTable>("mapPieces");
                return _data;
            }
        }

        [CSharpCallLua]
        public delegate Mapp1Excel[] GetMapPiecesDataByName(LuaTable self,string name);
        private static GetMapPiecesDataByName _getMapAction;

        [CSharpCallLua]
        public static Mapp1Excel[] GetMapPiecesData(string name)
        {
            if (_getMapAction == null)
                _getMapAction = Data.Get<GetMapPiecesDataByName>("get_map_pieces_by_name");
            Mapp1Excel[] str = _getMapAction?.Invoke(Data, name);
            return str; 
        }
        
        
    }
}
