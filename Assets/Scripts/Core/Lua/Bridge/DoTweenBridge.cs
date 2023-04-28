//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2021-01-27 14:47:39
//Description: 
//=========================================

using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;
using XLua;

namespace MailingJoy.Core.Lua.Bridge
{
    [LuaCallCSharp]
    public class DoTweenBridge
    {
        [LuaCallCSharp]
        public static void To(float from, float to, float duration,
            Action<float> percentCallback,
            Action completeHandle)
        {
            var currentValue = from;
            DOTween.To(() => currentValue, value =>
            {
                currentValue = value;
                percentCallback?.Invoke(currentValue);
            }, to, duration).OnComplete(() => completeHandle?.Invoke());
        }

        [LuaCallCSharp]
        public static void Line(float from, float to, float duration,
            Action<float> percentCallback,
            Action completeHandle)
        {
            var currentValue = from;
            DOTween.To(() => currentValue, value =>
            {
                currentValue = value;
                percentCallback?.Invoke(currentValue);
            }, to, duration).OnComplete(() => completeHandle?.Invoke()).SetEase(Ease.Linear);
        }

        [LuaCallCSharp]
        public static void DoMoveXYZ(GameObject obj, float x, float y, float z, float duration, Action completeHandle)
        {
            obj.transform.DOLocalMove(new Vector3(x, y, z), duration).OnComplete(() => { completeHandle?.Invoke(); });
        }

        [LuaCallCSharp]
        public static void DoFade(Image image, float value, float duration, Action completeHandle)
        {
            image.DOFade(value, duration).OnComplete((() => { completeHandle?.Invoke(); }));
        }

        [LuaCallCSharp]
        public static void DoScale(GameObject obj, float scale, float duration, Action completeHandle)
        {

            obj.transform.DOScale(scale, duration).OnComplete(() =>
            {
                completeHandle?.Invoke();
            });

        }
        /// <summary>
        /// 跳转
        /// </summary>
        /// <param name="obj"></param>
        /// <param name="scale"></param>
        /// <param name="duration"></param>
        /// <param name="completeHandle"></param>
        [LuaCallCSharp]
        public static void DoMoveJump(GameObject obj, Vector3 vector3, float duration, float scale,float scaleUp, Action completeHandle)
        {
            Sequence quence = DOTween.Sequence();
            quence.Append(obj.transform.DOMove(vector3, duration)).SetEase(Ease.OutBack);
            quence.Join(obj.transform.DOScale(new Vector3(scale * scaleUp, scale * scaleUp, scale * scaleUp), duration / 2)).SetEase(Ease.OutBack);
            quence.Insert(duration / 2, obj.transform.DOScale(new Vector3(scale, scale, scale), duration / 2)).SetEase(Ease.OutBack);
            quence.AppendCallback(() => {
                completeHandle?.Invoke();
            });
        }
        [LuaCallCSharp]
        public static void  DoTextScale(GameObject obj, Vector3  scale, float duration, Action completeHandle)
        {
            Sequence quence = DOTween.Sequence();
            Vector3 oldScale = obj.transform.localScale;
            quence.Append(obj.transform.DOScale(scale, duration/2)).SetEase(Ease.OutBack);
            quence.Append(obj.transform.DOScale(oldScale, duration/2)).SetEase(Ease.OutBack);
            quence.AppendCallback(() => {
                completeHandle?.Invoke();
            });
        }

        [LuaCallCSharp]
        public static void DoTextScale(GameObject obj, float scale, float duration, Action completeHandle)
        {
            Sequence quence = DOTween.Sequence();
            Vector3 oldScale = obj.transform.localScale;
            quence.Append(obj.transform.DOScale(scale, duration / 2)).SetEase(Ease.OutBack);
            quence.Append(obj.transform.DOScale(oldScale, duration / 2)).SetEase(Ease.OutBack);
            quence.AppendCallback(() => {
                completeHandle?.Invoke();
            });
        }

        [LuaCallCSharp]
        public static void DoListsFade(Image[] images, float value, float duration, Action completeHandle)
        {
            Sequence quence = DOTween.Sequence();
            foreach (Image image in images)
            {
                quence.Join(image.DOFade(value, duration));

            }
            quence.AppendCallback(() => {
                completeHandle?.Invoke();
            });
        } 
    }
}