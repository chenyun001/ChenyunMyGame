using System;
using MailingJoy.Core;
using Spine.Unity;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace Game.UI
{
    public class EffectComponent : MonoBehaviour
    {
        private Transform _rolePos;
        private const int Layer = 5;
        private UILayer _uiLayer;

        private void Awake()
        {
            _rolePos = transform.Find("role/scale/transform").transform;
        }

        // private SkeletonGraphic skeletonGraphic;

        //public void SetInfo(int itemId, UILayer uiLayer)
        //{
        //    this._uiLayer = uiLayer;
        //    SpineManager.Instance.Load(itemId, skeletonData =>
        //    {
        //        var skeletonGraphic =
        //            SkeletonGraphic.NewSkeletonGraphicGameObject(skeletonData, _rolePos, null);
        //        skeletonGraphic.gameObject.layer = Layer;
        //        Canvas component;
        //        // if (!skeletonGraphic.TryGetComponent<Canvas>(out component))
        //        {
        //            var canvas = skeletonGraphic.gameObject.AddComponent<Canvas>();
        //            canvas.overrideSorting = true;
        //            canvas.sortingOrder = 2000;
        //        }
        //        // else
        //        // {
        //        // component.overrideSorting = true;
        //        // component.sortingOrder = 2000;
        //        // }

        //        var skeletonRect = skeletonGraphic.rectTransform;
        //        skeletonRect.localScale = Vector2.one;
        //        skeletonRect.localPosition = new Vector2(0, 0);
        //        skeletonRect.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, 420f);
        //        skeletonRect.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, 420f);
        //        // if (itemData.itemType == 2)
        //        //     skeletonRect.pivot = new Vector2(0.5f, 0.0f);
        //        // else
        //        //     skeletonRect.pivot = new Vector2(0.5f, 0.5f);
        //        var _animationStateComponent = (IAnimationStateComponent) skeletonGraphic;
        //        ((SkeletonGraphic) _animationStateComponent).Initialize(false);
        //        _animationStateComponent.AnimationState.SetAnimation(0, "1", true);
        //    });
        //}

        private void Update()
        {
            if (Input.GetMouseButtonUp(0))
            {
                this._uiLayer.GetComponent<Canvas>().sortingOrder = 0;
                Addressables.ReleaseInstance(this.gameObject);
            }

            if (Input.GetKeyDown(KeyCode.E))
            {
                // var canvas = skeletonGraphic.gameObject.GetComponent<Canvas>();
                // canvas.overrideSorting = true;
                // canvas.sortingOrder = 2000;
            }
        }
    }
}