//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-09-29 10:57:08
//Description: 
//=========================================

using UnityEngine;

namespace MailingJoy.Core.Enums
{
	public static class LayerMasks
	{
		/// <summary>
		/// 看不见的层
		/// </summary>
		public static LayerMask OutView = LayerMask.NameToLayer("OutView");

		/// <summary>
		/// 默认层
		/// </summary>
		public static LayerMask Default = LayerMask.NameToLayer("Default");
	}
}