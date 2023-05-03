using System;
using MailingJoy.Core;
using MailingJoy.Core.UIFramework;
using MailingJoy.Core.UIFramework.ScreenBase;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using MailingJoy.Core.Lua.Bridge;
    public class LoadingScreenCtrl : UINewCtrlBase
{
    public Image progress_bar;
    public TextMeshProUGUI tmp_progress;
    float progress_value = 0;
    protected override void Awake()
    {
        base.Awake();
    }

    void set_load_info(float value )
    {
        progress_value = value;
        progress_bar.fillAmount = value/100;
        tmp_progress.text = string.Format("%.2f%%", value);
    }
    // Start is called before the first frame update
    void Start()
    {
        DoTweenBridge.To(0, 40, 1.0f, (value) =>
        {
            set_load_info(value);
        }, () =>
        {
            GameUIManager.Instance.CloseUI("PlayGame.prefab");
            get_info_success();
        });
    }

    void get_info_success()
    {
        DoTweenBridge.To(progress_value, 100, 1.0f, (value) =>
        {
            set_load_info(value);
        }, () =>
        {
            complite();
        });
    }
    void complite()
    {
        GameUIManager.Instance.OpenUI("mainScreen.prefab");
        GameUIManager.Instance.CloseUI("LoadingScreen.prefab");
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
