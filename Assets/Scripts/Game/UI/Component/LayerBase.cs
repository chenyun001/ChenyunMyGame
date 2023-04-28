using MailingJoy.Game;
using UnityEngine;
using UnityEngine.UI;

namespace Game.UI.Component
{
    public class LayerBase : MonoBehaviour
    {
        private CanvasScaler _canvasScaler;
        private float _standardScreen;
        private float _currentScreen;
        private float _offset = 0.15f;

        protected virtual void Awake()
        {
            CheckMatchWidthOrHeight();
        }

        private void CheckMatchWidthOrHeight()
        {
            _canvasScaler = GetComponent<CanvasScaler>();
            _standardScreen = AppConst.StandardScreenWidth / AppConst.StandardScreenHeight;
            _currentScreen = Screen.width / (float) Screen.height;
            if (_currentScreen > _standardScreen)
            {
                var match = (_currentScreen - _standardScreen) + _offset;
                var result = match > 1 ? 1 : match;
                _canvasScaler.matchWidthOrHeight = result;
            }
            else
            {
                _canvasScaler.matchWidthOrHeight = 0;
            }
        }

#if UNITY_EDITOR
        private void OnRectTransformDimensionsChange()
        {
            CheckMatchWidthOrHeight();
        }
#endif
    }
}