using System;
using MailingJoy.Core;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Game.UI.Component
{
    public class BtnClick:MonoBehaviour,IPointerDownHandler,IPointerUpHandler
    {

        private Vector3 localScale;
        private void Awake()
        {
            localScale = transform.localScale;
        }


        public void OnPointerDown(PointerEventData eventData)
        {
            transform.localScale = localScale * 0.9f;
            SoundManager.Instance.PlayUISound("ui/S_Btn_Click.mp3");
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            transform.localScale = localScale;
        }
    }
}