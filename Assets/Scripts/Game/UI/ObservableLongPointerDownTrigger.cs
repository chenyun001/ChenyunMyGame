//=========================================
//Author: 洪金敏
//Create Date: 2019/02/20 13:34:46
//Description: 
//=========================================

using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UniRx.Triggers
{
    [DisallowMultipleComponent]
    public class ObservableLongPointerDownTrigger : ObservableTriggerBase, IPointerDownHandler, IPointerUpHandler
    {
        [Tooltip("间隔时间")]
        public float IntervalSecond = 1f;

        private float? _raiseTime;

        private Subject<Unit> _onLongPointerDown;

        private void Update()
        {
            if (_raiseTime != null && _raiseTime <= Time.realtimeSinceStartup)
            {
                if (_onLongPointerDown != null)
                {
                    _onLongPointerDown.OnNext(Unit.Default);
                }

                _raiseTime = null;
            }
        }

        public IObservable<Unit> OnLongPointerDownAsObservable()
        {
            return _onLongPointerDown ?? (_onLongPointerDown = new Subject<Unit>());
        }

        public ObservableLongPointerDownTrigger SetIntervalSecond(float interval)
        {
            IntervalSecond = interval;
            return this;
        }


        public void OnPointerDown(PointerEventData eventData)
        {
            _raiseTime = Time.realtimeSinceStartup + IntervalSecond;
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            _raiseTime = null;
        }

        protected override void RaiseOnCompletedOnDestroy()
        {
            if (_onLongPointerDown != null)
            {
                _onLongPointerDown.OnCompleted();
            }
        }
    }
}