using System;
using DG.Tweening;
using UniRx;
using UniRx.Triggers;
using UnityEngine;
using UnityEngine.EventSystems;

public class MJAutoList : MJCommonList
{
    [SerializeField] private Transform _targetTransform;

    [SerializeField] private float targetScale = 0.3f;

    [SerializeField] private float scaleLengh = 2;

    public Action<Transform, Transform> CheckScale;

    [SerializeField] private float selectedScale;

    public override void ScrollCallback(Vector2 data)
    {
        base.ScrollCallback(data);
        if (CheckScale == null) return;
        if (_list != null)
            foreach (var transform in _list)
            {
                CheckScale?.Invoke(transform, _targetTransform);
            }
    }

    public override void SetAmount(int i)
    {
        base.SetAmount(i);
        if (_list != null)
            foreach (var transform in _list)
            {
                CheckScale?.Invoke(transform, _targetTransform);
            }
        InitScaleEvent();
    }

    public void OnEndDrag()
    {
        if (_horizontal)
        {
            if (scrollRect.velocity.x > 5)
            {
                scrollRect.StopMovement();

                MoveToPrevious();
            }
            else if (scrollRect.velocity.x < -5)
            {
                scrollRect.StopMovement();
                MoveToNext();
            }
        }
    }

    public void InitScaleEvent()
    {
        CheckScale = CheckScaleHandler;
        scrollRect.OnEndDragAsObservable().Subscribe(_ => OnEndDrag()).AddTo(this);
    }

    protected override void SetCellPosition(int cellIndex, int i)
    {
        var cell = _list[cellIndex];
        cell.name = i.ToString();
        if (_horizontal)
            cell.localPosition = new Vector3(
                i / _constraintCont * (_cellWidth + _spX) + _spX,
                -i % _constraintCont * (_cellHeight + _spY) - _spY, 0);
        else
            cell.localPosition =
                new Vector3(_spX + i % _constraintCont * (_cellWidth + _spX),
                    -i / _constraintCont * (_cellHeight + _spY) - _spY);
        UpdateChildrenCallback?.Invoke(i, cellIndex);
    }

    private void CheckScaleHandler(Transform arg1, Transform arg2)
    {
        // float dis = Math.Abs(Vector2.Distance(arg1.position, arg2.position));
        // if (dis <= scaleLengh)
        // {
        //     arg1.GetComponent<IListCellRender>()
        //         .SetChildScale(1 + ((scaleLengh - dis) / scaleLengh) * targetScale, selectedScale);
        // }
        // else arg1.GetComponent<IListCellRender>().SetChildScale(1, selectedScale);
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        _rect.DOKill();
    }
}