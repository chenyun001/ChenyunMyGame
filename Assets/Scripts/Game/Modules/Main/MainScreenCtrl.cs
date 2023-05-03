using System;
using MailingJoy.Core;
using MailingJoy.Core.UIFramework;
using MailingJoy.Core.UIFramework.ScreenBase;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using MailingJoy.Core.Lua.Bridge;
public class MainScreenCtrl : UINewCtrlBase
{
    ComponentPlayer player;
    public Button btn_skill_X;
    public Button btn_skill_O;
    public Button btn_skill_R;
    private ProgressControl player_blood;
    private Text Text;
    protected override void Awake()
    {
        base.Awake();
        btn_skill_X.onClick.AddListener(() => {
            Player.Instance.PlayerSkill_X();
        });

        btn_skill_O.onClick.AddListener(() => {
            Player.Instance.PlayerSkill_O();
        });

        btn_skill_R.onClick.AddListener(() => {
            Player.Instance.PlayerSkill_I();
        });
        Text = transform.Find("Text_Count").GetComponent<Text>();
        player_blood = transform.Find("playerHead/playerBlood").GetComponent<ProgressControl>();

    }

    // Start is called before the first frame update
    void Start()
    {
        LoadRole();
    }
    void LoadRole()
    {
        Transform RoleRoot = GameObject.Find("RoleRoot").transform;
        AssetsManager.Instance.GetAsset("Player.prefab", (GameObject go, object[] param) => {
            if(go)
            {
                GameObject role = Instantiate(go, RoleRoot);
                role.transform.name = "Role";
                player = role.GetComponent<ComponentPlayer>();
                player.SetEasyTouch();
                GameScript.Instance.AddDelegate((string count)=> {
                    ShowHits(count);
                });
                GameScript.Instance.AddDelegatePlayerInfo((float hpvalue) => {
                    ShowPlayerInfo(hpvalue);
                });
            }
           

        });
    }
    void ShowHits(string count)
    {
        if(count!="0")
        {
            Text.text = "Á¬»÷+"+count;
            DoTweenBridge.DoTextScale(Text.gameObject, 1.5f, 1, null);
        }
        else
        {
            Text.text = "";
        }
    }
    void ShowPlayerInfo(float HpValue)
    {
        float value = player.Agent.BlackBoard.Health / player.Agent.BlackBoard.RealMaxHealth;
        player_blood.UpdateProgress(value);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
