//=========================================
//Author: 洪金敏
//Create Date: 2019/01/30 14:01:03
//Description: 
//=========================================

using System;
using DG.Tweening;
using Game.Modules.Message;
using MailingJoy.Core.UIFramework;
using MailingJoy.Core.UIFramework.ScreenBase;
using UnityEngine;
using UnityEngine.UI;
using XLua;

namespace Modules.MessageBox
{
    [Hotfix]
    public class MessageTipCtrl : UICtrlBase
    {
        [SerializeField]
        private Text _text;


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
            _text.horizontalOverflow = HorizontalWrapMode.Overflow;
            _text.verticalOverflow = VerticalWrapMode.Overflow;
            _text.alignment = TextAnchor.MiddleCenter;
            _text.raycastTarget = false;
           transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
           transform.localPosition = new Vector3(0, 0, 0);
        
        
        }


        public void Dispose()
        {
            
            GameUIManager.Instance.CloseUI(typeof(MessageTip));
            // Destroy(gameObject);
        }
    }
}