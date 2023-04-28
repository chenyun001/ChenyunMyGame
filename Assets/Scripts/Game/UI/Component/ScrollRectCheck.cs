using System;
using UnityEngine;
using UnityEngine.UI;

namespace Game.UI.Component
{
    public class ScrollRectCheck:MonoBehaviour
    {
        private ScrollRect _rect;

        private void Awake()
        {
            _rect = GetComponent<ScrollRect>();
            _rect.onValueChanged.AddListener(delegate(Vector2 arg0)
            {
                if (arg0.y is > 1.03f or < 0)
                {
                    Debug.LogError(arg0.y+"当前值"+Screen.dpi);

                }
            });
        }
    }
}