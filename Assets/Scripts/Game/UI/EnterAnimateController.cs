using System;
using System.Linq;
using DG.Tweening;
using DG.Tweening.Core;
using MailingJoy.Core;
using MailingJoy.Manager;
using UnityEngine;
using UnityEngine.Events;

public class EnterAnimateController : MonoBehaviour
{
    #region Editor

#if UNITY_EDITOR
    public bool Restart;
    public bool Play;
    private void Update()
    {
        if (Restart)
        {
            Restart = false;
            var animations = GetComponentsInChildren<DOTweenAnimation>();
            if (!animations.Any())
            {
                _cb?.Invoke();
            }
            else
            {
                DOTweenAnimation temp = null;
                float time = 0;
                foreach (var doTweenAnimation in animations)
                {
                    doTweenAnimation.enabled = true;
                    doTweenAnimation.isActive = true;
                    doTweenAnimation.DOPlayBackwards();

                    if (doTweenAnimation.delay + doTweenAnimation.duration >= time)
                    {
                        if (doTweenAnimation.animationType == DOTweenAnimationType.None)
                        {
                            Debug.LogError("不要有空的DoTween");
                        }
                        else
                        {
                            temp = doTweenAnimation;
                            time = doTweenAnimation.delay + doTweenAnimation.duration;
                        }
                    }
                }

                if (temp != null && _cb != null)
                {
                    if (temp.onComplete == null)
                    {
                        temp.onComplete = new UnityEvent();
                    }

                    temp.onComplete.AddListener(() => _cb());
                }
            }
        }

        if (Play)
        {
            Play = false;
            var animations = GetComponentsInChildren<DOTweenAnimation>();
            if (!animations.Any())
            {
                _cb?.Invoke();
            }
            else
            {
                DOTweenAnimation temp = null;
                float time = 0;
                foreach (var doTweenAnimation in animations)
                {
                    doTweenAnimation.enabled = true;
                    doTweenAnimation.isActive = true;
                    doTweenAnimation.DORestart();

                    if (doTweenAnimation.delay + doTweenAnimation.duration >= time)
                    {
                        if (doTweenAnimation.animationType == DOTweenAnimationType.None)
                        {
                            Debug.LogError("不要有空的DoTween");
                        }
                        else
                        {
                            temp = doTweenAnimation;
                            time = doTweenAnimation.delay + doTweenAnimation.duration;
                        }
                    }
                }

                if (temp != null && _cb != null)
                {
                    if (temp.onComplete == null)
                    {
                        temp.onComplete = new UnityEvent();
                    }

                    temp.onComplete.AddListener(() => _cb());
                }
            }
        }
    }
#endif

    #endregion

    private void Start()
    {
        // if (UiEffectManager.ShowUiEffect)
        {
            DoAnimation();
        }
    }

    private void DoAnimation()
    {
        var animations = GetComponentsInChildren<DOTweenAnimation>();
        if (!animations.Any())
        {
            _cb?.Invoke();
        }
        else
        {
            DOTweenAnimation temp = null;
            float time = 0;
            foreach (var doTweenAnimation in animations)
            {
                if (doTweenAnimation.loops == -1) continue;
                doTweenAnimation.enabled = true;
                doTweenAnimation.isActive = true;
                doTweenAnimation.DOPlay();

                if (doTweenAnimation.delay + doTweenAnimation.duration >= time)
                {
                    if (doTweenAnimation.animationType == DOTweenAnimationType.None)
                    {
                        Debug.LogError("不要有空的DoTween");
                    }
                    else
                    {
                        temp = doTweenAnimation;
                        time = doTweenAnimation.delay + doTweenAnimation.duration;
                    }
                }
            }

            if (temp != null)
            {
                temp.tween.OnComplete(() =>
                {
                    temp.onComplete?.Invoke();
                    _cb?.Invoke();
                });
            }else _cb?.Invoke();
        }
    }

    private Action _cb;

    public void SetCallBack(Action onEnterComplete)
    {
        _cb = onEnterComplete;
    }
}