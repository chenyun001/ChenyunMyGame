using System;
using System.Collections.Generic;
using UnityEngine;
using MailingJoy.Core;
using MailingJoy.Game.Models;
using MailingJoy.Modules.MessageBox;
using UnityEngine.Serialization;
using UnityEngine.UI;

namespace MailingJoy.Game.UI.Component
{
    public class ScrollRectComponent : MonoBehaviour
    {
        public enum Direct
        {
            Left,
            Right,
        }

        public Scrollbar scrollbar;
        private ScrollRect _scrollRect;

        public delegate bool OnIndexChanged(int index);

        public event OnIndexChanged onIndexChanged;

        private int _childCount;
        private float _step;

        [SerializeField] [Header("移动到下一章节的阈值(default 0.01)")]
        private float _moveNextLength = 0.01f;

        [SerializeField] [Header("回弹速度因子")] private float _moveBackCof = 5f;

        private int _curIndex;
        // private float _moveStep;


        private List<float> _posList = new List<float>();
        private float _startPosition;
        private float _endPosition;

        private void Awake()
        {
            _scrollRect = GetComponent<ScrollRect>();
            ResetData();
        }

        public void ResetData()
        {
            this._childCount = 100;
            _step = (float) 1 / (_childCount - 1);
            // _moveNextLength = _step / 5;
            _curIndex = 0;
            for (var i = 0; i < _childCount; i++)
            {
                var pos = i * _step;
                _posList.Add(pos);
            }
        }

        private float _targetValue;

        private bool _needMove = false;

        private const float MOVE_SPEED = 1F;

        [SerializeField] [Header("移动速度因子(default 5)")]
        private float SMOOTH_TIME = 5F;

        private float _moveSpeed = 0f;

        private bool _pointerDown;

        public void OnPointerDown()
        {
            _needMove = false;
            _startPosition = _scrollRect.horizontalNormalizedPosition;
            _pointerDown = true;
        }

        public void SetCurIndex(int index)
        {
            _curIndex = index;
        }

        public void OnPointerUp()
        {
            _pointerDown = false;
            // if (_needMove)
            //     return;
            // _scrollRect.StopMovement();
            _endPosition = _scrollRect.horizontalNormalizedPosition;
            var result = (_endPosition - _startPosition);
            if (Mathf.Abs(result) > _moveNextLength)
            {
                if (result > 0)
                {
                    _curIndex++;
                    if (_curIndex > _childCount - 1)
                        _curIndex = _childCount - 1;
                }
                else
                {
                    _curIndex--;
                    if (_curIndex < 0)
                        _curIndex = 0;
                }
            }

            /*
            _moveStep = _halfStep + (_step * _curIndex);
            if (scrollbar.value <= _halfStep + (_step * ((_curIndex - 1) < 0 ? 0 : (_curIndex - 1))))
            {
                _curIndex--;
                if (_curIndex < 0)
                    _curIndex = 0;
            }
            else if (scrollbar.value <= _moveStep)
            {
            }
            else if (scrollbar.value <= _halfStep + (_step * ((_curIndex + 1) > 7 ? 7 : (_curIndex + 1))))
            {
                _curIndex++;
                if (_curIndex > _childCount - 1)
                    _curIndex = _childCount - 1;
            }
            */

            MoveToTarget(_curIndex);
            _moveSpeed = 0;
        }

        public void MoveRightClick()
        {
            _curIndex++;
            if (_curIndex < 0)
                _curIndex = 0;
            else if (_curIndex > _childCount - 1)
                _curIndex = _childCount - 1;
            MoveToTarget(_curIndex);
        }

        public void MoveLeftClick()
        {
            _curIndex--;
            if (_curIndex > _childCount - 1)
                _curIndex = _childCount - 1;
            else if (_curIndex < 0)
                _curIndex = 0;
            MoveToTarget(_curIndex);
        }

        public void MoveToTarget(int index)
        {
            if (index > _posList.Count)
            {
                return;
            }
            _curIndex = index;
            // _targetValue = _curIndex * _step;
            _targetValue = _posList[index];
            _needMove = true;
        }

        private void Update()
        {
            if (Input.GetMouseButtonUp(0))
            {
                _scrollRect.StopMovement();
                _needMove = true;
            }

            if (!_needMove) return;
            if (onIndexChanged != null)
            {
                ClampIndex(ref _curIndex);
                if ((bool) onIndexChanged?.Invoke(_curIndex))
                {
//                    MessageBox.ShowTips("章节未解锁，无法前往", Color.red);
                    var temp = --_curIndex;
                    _curIndex = temp < 0 ? 0 : temp;
                    // _targetValue = _curIndex * _step;
                    _targetValue = _posList[_curIndex];
                    scrollbar.value =
                        Mathf.Lerp(scrollbar.value, _targetValue, Time.deltaTime * _moveBackCof); //_targetValue;
                    return;
                }
            }

            EventSystemCenter.Dispatch(EventConst.CHAPTER_SETLIGHTWITHINDEX, _curIndex);
            // scrollbar.value = Mathf.SmoothDamp(scrollbar.value, _targetValue, ref _moveSpeed, SMOOTH_TIME);
            scrollbar.value = Mathf.Lerp(scrollbar.value, _targetValue, Time.deltaTime * SMOOTH_TIME);
        }

        private void ClampIndex(ref int index)
        {
            var temp = index;
            index = temp < 0 ? 0 : temp;
            index = temp > _childCount - 1 ? _childCount - 1 : temp;
        }

        private void UpdateHorizontal()
        {
            if (!_pointerDown) return;
            _endPosition = _scrollRect.horizontalNormalizedPosition;
            var result = _endPosition - _startPosition;
            if (Mathf.Abs(result) > _moveNextLength)
            {
                if (result > 0)
                {
                    _curIndex++;
                    if (_curIndex > _childCount - 1)
                        _curIndex = _childCount - 1;
                }
                else
                {
                    _curIndex--;
                    if (_curIndex < 0)
                        _curIndex = 0;
                }
            }

            MoveToTarget(_curIndex);
        }
    }
}