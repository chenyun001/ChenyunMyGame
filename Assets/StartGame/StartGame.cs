using System.Collections;
using System.Collections.Generic;
using UniRx;
using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.SceneManagement;

public class StartGame : MonoBehaviour
{
    public static StartGame Instance;
    [SerializeField] private Image LogoImage;

    [SerializeField] private Image RuleImage;

    [SerializeField] private CanvasGroup canvasGroup;

    [SerializeField] private Animator CompanyLogo;

    [SerializeField] private Slider Image_progerss;

    [SerializeField] private TextMeshProUGUI Text_progerss;

    [SerializeField] private Image MainView;

    public static float StayTime = 0;

    private void Awake()
    {
        Instance = this;
    }

    private void Start()
    {
#if LUADEBUG
            AppConst.LuaDebug = true;
#endif
        canvasGroup = RuleImage.gameObject.GetComponent<CanvasGroup>();
        StayTime = 6f;
        RuleImage.gameObject.SetActive(true);
        LogoImage.gameObject.SetActive(false);
        CompanyLogo.gameObject.SetActive(false);
        canvasGroup.DOFade(1, 0.5f);
        Application.targetFrameRate = 60;
        Observable.Timer(TimeSpan.FromSeconds(3f)).Subscribe(_ => { canvasGroup.DOFade(0, 1); }).AddTo(this);
        Observable.Timer(TimeSpan.FromSeconds(StayTime)).Subscribe(_ =>
        {
            LogoImage.gameObject.SetActive(false);
            RuleImage.gameObject.SetActive(false);
            CompanyLogo.gameObject.SetActive(true);
            Observable.Timer(TimeSpan.FromSeconds(3)).Subscribe(_ => {
                OpenMainView();
            });
            //AppFacade.GetInstance().StartUp();// todo
        }).AddTo(this);
        //ÆÁÄ»³£ÁÁ
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }

    public  async void GameStart()
    {
        var handler = Addressables.LoadAssetAsync<GameObject>("LoadDll.prefab");
        await handler.Task;
        if (handler.Status == AsyncOperationStatus.Succeeded)
        {
            var prefab = handler.Result;
            var go = GameObject.Instantiate(prefab);
            DontDestroyOnLoad(go);
        }
    }

    public void OpenDownLoad()
    {
        Image_progerss.gameObject.SetActive(true);
    }
    public void OpenMainView()
    {
        MainView.gameObject.SetActive(true);
    }
    public void SetProgerssText(string ext)
    {
        Text_progerss.text = ext;
    }

    public void SetProgerss(float value)
    {
        Image_progerss.value = value;
    }
}


