//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020-12-08 16:26:25
//Description: 
//=========================================

using UniRx;
using UnityEngine.UI;

namespace MailingJoy.Core
{
	public class ButtonSoundPlay : SoundPlay
	{
		private void Awake()
		{
			var btn = GetComponent<Button>();
			btn.OnClickAsObservable().Subscribe(_ => Play()).AddTo(this);
		}
	}
}