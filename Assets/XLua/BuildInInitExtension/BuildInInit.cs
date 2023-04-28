//=========================================
//Author: 洪金敏
//Create Date: 2019/01/21 18:14:00
//Description: 
//=========================================

using MailingJoy.Game;
using UnityEngine;

namespace XLua.LuaDLL
{
    using System.Runtime.InteropServices;

    public partial class Lua
    {
        [DllImport(LUADLL, CallingConvention = CallingConvention.Cdecl)]
        public static extern int luaopen_rapidjson(System.IntPtr L);

        [MonoPInvokeCallback(typeof(LuaDLL.lua_CSFunction))]
        public static int LoadRapidJson(System.IntPtr L)
        {
            return luaopen_rapidjson(L);
        }

        [DllImport(LUADLL, CallingConvention = CallingConvention.Cdecl)]
        public static extern int luaopen_pb(System.IntPtr L);

        [MonoPInvokeCallback(typeof(LuaDLL.lua_CSFunction))]
        public static int LoadLuaProtobuf(System.IntPtr L)
        {
            
            return luaopen_pb(L);
        }

        [DllImport(LUADLL, CallingConvention = CallingConvention.Cdecl)]
        public static extern int luaopen_mime_core(System.IntPtr L);

        [MonoPInvokeCallback(typeof(LuaDLL.lua_CSFunction))]
        public static int LoadMimeCore(System.IntPtr L)
        {
            return luaopen_mime_core(L);
        }

#if UNITY_EDITOR_WIN || UNITY_STANDALONE_WIN
        [DllImport("emmy_core", CallingConvention =CallingConvention.Cdecl)]
#else
        [DllImport(LUADLL, CallingConvention =CallingConvention.Cdecl)]
#endif  
        public static extern int luaopen_emmy_core(System.IntPtr L);
        
        [MonoPInvokeCallback(typeof(lua_CSFunction))]
        public static int LoadEmmyCore(System.IntPtr L)
        {
            return luaopen_emmy_core(L);
        }
    }
}