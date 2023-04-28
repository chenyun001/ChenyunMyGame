/*
Author:hypnus
Create Date:20-03-20 02:17:56
*/

using UnityEngine;
using XLua;

namespace MailingJoy.Lua
{
	public static class UIHelper
	{
		[LuaCallCSharp]
		public static void SetLocalPosition(GameObject trans, float x, float y, float z)
		{
			trans.transform.localPosition = new Vector3(x, y, z);
		}

		[LuaCallCSharp]
		public static void SetLocalScale(GameObject trans, float x, float y, float z)
		{
			trans.transform.localScale = new Vector3(x, y, z);
		}
	}
}