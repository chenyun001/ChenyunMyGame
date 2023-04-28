using System;
using MailingJoy.Core;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.U2D;
using UnityEngine.UI;
using XLua;

namespace MailingJoy.Core.Utils
{
	[Obsolete("废弃")]
	public static class LoadSpriteUtil
	{
		[Obsolete]
		public static Sprite LoadItemSprite(int itemId)
		{
//			var sp = AssetsManager.Instance
//				.GetSpriteFromAtlas("SpriteAtlas/ItemSpriteAtlas.spriteatlas", itemId.ToString());
//			return sp;
			return null;
		}

		[LuaCallCSharp]
		public static AsyncOperationHandle LoadSpriteFromAtlas(string atlas, string spriteId, Image image)
		{
			var handle = Addressables.LoadAssetAsync<Sprite>($"{atlas}[{spriteId}]");
//			handle.Completed += handler =>
//			{
//				if (handler.Status == AsyncOperationStatus.Succeeded)
//				{
//					var sprite = handler.Result;
//					image.sprite = sprite;
//				}
//				else
//				{
//					Debug.LogError(atlas + "    图集中不存在    " + spriteId);
//					image.sprite = null;
//				}
//			};
			return handle;
		}

		[LuaCallCSharp, Obsolete]
		public static AsyncOperationHandle LoadSprite(string spriteName, Image image, Action<bool> complete = null)
		{
			var h = Addressables.LoadAssetAsync<Texture2D>(spriteName);
			h.Completed += handler =>
			{
				if (handler.Status == AsyncOperationStatus.Succeeded)
				{
					var sprite = handler.Result;
					image.sprite = Sprite.Create(sprite, new Rect(0, 0, sprite.width, sprite.height),
						new Vector2(0.5f, 0.5f));
					complete?.Invoke(true);
				}
				else
				{
					complete?.Invoke(false);
				}
			};
			return h;
		}
	}
}