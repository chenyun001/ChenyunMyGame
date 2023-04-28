using System;
using MailingJoy.Core;
using MailingJoy.Game;
using Game.UI.Component;
using UnityEngine;


public class UILayer : LayerBase
{
    [SerializeField] private UILayerEnum _uiLayerEnum = UILayerEnum.Default;
    [SerializeField] private string sceneName;
    private RectTransform _uiLayerRect;

    public RectTransform UILayerRect
    {
        get { return _uiLayerRect; }
    }

    protected override void Awake()
    {
        LayerManager.GetInstance().RegisterUILayer(sceneName, _uiLayerEnum, this);
    }

    private void Start()
    {
        _uiLayerRect = GetComponent<RectTransform>();
        if (_uiLayerEnum != UILayerEnum.Default) return;
        AppConst.ScreenWidth = _uiLayerRect.rect.width;
        AppConst.ScreenHeight = _uiLayerRect.rect.height;
    }

    private void OnDestroy()
    {
        LayerManager.GetInstance().ReleaseUILayer(sceneName, _uiLayerEnum);
    }

    private Transform _alertTransform;

    private Transform AlertTransform
    {
        get
        {
            if (_alertTransform == null)
            {
                _alertTransform = transform.Find("Alert").transform;
            }

            return _alertTransform;
        }
    }

    private Transform _majorTransform;

    private Transform MajorTransform
    {
        get
        {
            if (_majorTransform == null)
            {
                _majorTransform = transform.Find("Major").transform;
            }

            return _majorTransform;
        }
    }

    private Transform _bottomTransform;

    private Transform BottomTransform
    {
        get
        {
            if (_bottomTransform == null)
            {
                _bottomTransform = transform.Find("Bottom").transform;
            }

            return _bottomTransform;
        }
    }

    private Transform _topTransform;

    private Transform TopTransform
    {
        get
        {
            if (_topTransform == null)
            {
                _topTransform = transform.Find("Top").transform;
            }

            return _topTransform;
        }
    }

    public Transform GetLayer(LayerEnum layerEnum)
    {
        Transform layer = null;
        switch (layerEnum)
        {
            case LayerEnum.Major:
                layer = MajorTransform;
                break;
            case LayerEnum.BottomLayer:
                layer = BottomTransform;
                break;
            case LayerEnum.TopLayer:
                layer = TopTransform;
                break;
            case LayerEnum.AlertLayer:
                layer = AlertTransform;
                break;
            default:
                throw new ArgumentOutOfRangeException(layerEnum.ToString(), layerEnum, null);
        }

        return layer;
    }
}