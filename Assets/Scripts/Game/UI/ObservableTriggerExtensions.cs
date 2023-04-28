//=========================================
//Author: 洪金敏
//Create Date: 2019/02/20 14:15:12
//Description: 
//=========================================

using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
    public static partial class ObservableTriggerExtensions
    {
        public static IObservable<Unit> OnLongPointerDownAsObservable(this UIBehaviour component, float second)
        {
            if (component == null || component.gameObject == null)
            {
                return Observable.Empty<Unit>();
            }

            return GetOrAddComponent<ObservableLongPointerDownTrigger>(component.gameObject)
                .SetIntervalSecond(second)
                .OnLongPointerDownAsObservable();
        }

        static T GetOrAddComponent<T>(GameObject gameObject)
            where T : Component
        {
            var component = gameObject.GetComponent<T>();
            if (component == null)
            {
                component = gameObject.AddComponent<T>();
            }

            return component;
        }
    }
}