//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-29 14:41:59
//Description: 
//=========================================

using MailingJoy.Core;
using UnityEngine;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;
using XLua;

namespace Ext
{
	[LuaCallCSharp]
	public static class ImageExt
	{
		/// <summary>
		/// 异步从图集中取得资源并显示
		/// </summary>
		/// <param name="image"></param>
		/// <param name="atlasName"></param>
		/// <param name="spriteId"></param>
		[LuaCallCSharp]
		public static AsyncOperationHandle SetSpriteFromAtlasAsync(this Image image, string atlasName, string spriteId)
		{
			var handle = AssetsManager.Instance.LoadSpriteFromAtlas(atlasName, spriteId, sprite =>
			{
				if (sprite != null)
				{
					image.sprite = sprite;
				}
			});

			return handle;
		}
		
		[LuaCallCSharp]
		public static AsyncOperationHandle SetSprite(this Image image, string atlasName)
		{
			
			var handle = AssetsManager.Instance.LoadSprite(atlasName, sprite =>
			{
				if (sprite != null)
				{
					image.sprite = sprite;
				}
			});

			return handle;
		}


		[LuaCallCSharp]
		public static void SetRect(this Image image,int width,int height)
		{
			image.rectTransform.sizeDelta = new Vector2(width, height);
		}
		
	
		[LuaCallCSharp]
		public static void SetAlpha(this Image image,float alpha)
		{
			image.color = new Color(1, 1, 1, alpha);
		}
	}
}