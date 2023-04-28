using System;
using System.Collections;
using System.Collections.Generic;
using Core.Helper;
using Ext;
using MailingJoy.Core;
using MailingJoy.Core.Utils;
using MailingJoy.Game.DataContext;

using MailingJoy.Utils;
using TMPro;
using UniRx;
using UniRx.Triggers;
using UnityEngine;
using UnityEngine.UI;

public class EasyGeneralItem : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] private Image _avatar;
    [SerializeField] private Image _color;
    [SerializeField] private Image _sortImage;
    [SerializeField] private TextMeshProUGUI _name;
    [SerializeField] private TextMeshProUGUI _lv;
    // [SerializeField] private GeneralStarComponent _starComponent;

    // [SerializeField] private Image _powerCost;

    [SerializeField] private Image _prefix;
    public static Action<int> OnClick;

    public static Action<int> OnHold;

    private Button _btn;


    public void SetGeneralInfo(string generalName, int tableId, int color, int lv, int star, int cost, int sort)
    {
        _name.text = generalName;
        if (lv > 0)
        {
            _lv.text = LanguageDataContext.GetLanguage("lvDot", lv);
        }
        else
        {
            _lv.text = string.Empty;
        }
        
       // _starComponent.SetStar(star);
        _avatar.SetSpriteFromAtlasAsync("CardHeroHeadPortraitAtlas",$"{tableId}");
        _color.SetSpriteFromAtlasAsync("CardFrameAtlas", $"ui_frame_lord_card0{color}");

//        _sortImage.sprite =
//            AssetsManager.GetInstance().GetSpriteFromAtlas("Common", "CommonSpriteAtlas",
//                "Type_" + sort);
        // _powerCost.SetSpriteFromAtlasAsync()
        //     AssetsManager.GetInstance().GetSpriteFromAtlas("Common", "CommonSpriteAtlas", "PowerFont_" + cost);

        // _powerCost.SetNativeSize();
    }
}