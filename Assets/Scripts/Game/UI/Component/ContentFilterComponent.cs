using System;
using MailingJoy.Core;
using MailingJoy.Game;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

namespace Game.UI.Component
{
    public
        enum LayoutType
    {
        UnFixedHorizontal,
        FixedHorizontal,
        UnFixedVertical,
        FixedVertical,
    }

    public class ContentFilterComponent : MonoBehaviour
    {
        public LayoutType layoutType = LayoutType.UnFixedHorizontal;
        private GridLayoutGroup _gridLayoutGroup;
        private float _screenWidth;
        private float _screenHeight;
        private Vector2 _spacing;
        private Vector2 _cellSize;
        private float _left;
        private float _right;
        private RectOffset _padding;

        private void Start()
        {
            _gridLayoutGroup = GetComponent<GridLayoutGroup>();
            ResetLayout();
        }

        /// <summary>
        /// 不固定行
        /// </summary>
        private void UnFixedHorizontalLayoutFilter()
        {
            var contentWidth = _screenWidth * 0.81f;
            contentWidth = contentWidth - _padding.left; //- _padding.right;
            var newConstraintCount = (int) contentWidth / (int) (_cellSize.x + _spacing.x);
            _gridLayoutGroup.constraintCount = newConstraintCount;

            //重置spacing
            /*
            var width = newConstraintCount * _cellSize.x;
            var remain = contentWidth - width - _padding.left - _padding.right;
            var newSpacingX = remain / (newConstraintCount - 1);
            var spacingY = _gridLayoutGroup.spacing.y;
            _gridLayoutGroup.spacing = new Vector2(newSpacingX, spacingY);
            */
        }

        /// <summary>
        /// 固定行
        /// </summary>
        private void FixedHorizontalLayoutFilter()
        {
            var contentWidth = _screenWidth * 0.6f;
            var spacingX = (contentWidth - _cellSize.x);
            var halfSpacingX = (int) spacingX / 2;
            _gridLayoutGroup.spacing = new Vector2(halfSpacingX, 0);
            var padding = _gridLayoutGroup.padding;
            padding.left = halfSpacingX;
            padding.right = halfSpacingX;
        }

        private void ResetLayout()
        {
            // var uiLayer = GameObject.FindWithTag("MainUILayer");
            // var rect = uiLayer.GetComponent<RectTransform>().rect;
            // var rect = LayerManager.GetUILayerRect();
            _screenHeight = AppConst.ScreenHeight; //rect.rect.height; //Screen.height;
            _screenWidth = AppConst.ScreenWidth; // rect.rect.width; //Screen.width;
            _spacing = _gridLayoutGroup.spacing;
            _cellSize = _gridLayoutGroup.cellSize;
            _padding = _gridLayoutGroup.padding;
            switch (layoutType)
            {
                case LayoutType.UnFixedHorizontal:
                    UnFixedHorizontalLayoutFilter();
                    break;
                case LayoutType.FixedHorizontal:
                    FixedHorizontalLayoutFilter();
                    break;
                case LayoutType.UnFixedVertical:
                    UnFixedVerticalLayoutFilter();
                    break;
                case LayoutType.FixedVertical:
                    FixedVerticalLayoutFilter();
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }

        private void UnFixedVerticalLayoutFilter()
        {
        }

        private void FixedVerticalLayoutFilter()
        {
        }
    }
}