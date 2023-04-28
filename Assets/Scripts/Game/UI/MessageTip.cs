using System;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace MailingJoy.Modules.MessageBox
{
  
    public class MessageTip : MonoBehaviour
    {
        [SerializeField]
        private Text _text;

        // [SerializeField] private SoundPlay _soundPlay;

        public static Color DefaultColor = new Color(1,183/255f,28/255f);
        private void Awake()
        {
            transform.DOScale(new Vector3(1, 1, 1), 0.8f).SetEase(Ease.OutBack).OnComplete(delegate
            {
                transform.DOLocalMoveY(250, 0.3f);
                GetComponent<Image>().DOFade(0, 0.6f).OnComplete(Dispose);
                _text.DOFade(0, 0.6f);
            });
        }

        public void Show(string message, Color messageColor, int messageBoxResult, Action<int> callback,
            string sound = "Ok",
            string cancelBtnStr = "Cancel")
        {
            
            _text.text = message;
            _text.color = messageColor;
            messageColor.a = 1;
            _text.raycastTarget = false;
            transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
            transform.localPosition = new Vector3(0, 0, 0);
            // if (sound == "")
            // {
            //     _soundPlay.enabled=false;
            // }
            // else
            // {
            //     _soundPlay.AudioName = sound;
            //     _soundPlay.Play();
            //    
            // }
        
        }


        public void Dispose()
        {
            Destroy(gameObject);
        }
    }
}