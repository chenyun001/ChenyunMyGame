using Core.Helper;
using Ext;
using MailingJoy.Core.Utils;
using MailingJoy.Game.DataContext;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GeneralUpgradeCostItem : MonoBehaviour
{
    private Image _icon;
    private TextMeshProUGUI _amount;

    private readonly Color _colorRed = new Color(0xE8 / 255f, 0x44 / 255f, 0x55 / 255f, 0xff / 255f);
    private readonly Color _colorGreen = new Color(18f / 255f, 124f / 255f, 4f / 255f, 0xff / 255f);

    [SerializeField] private GameObject _light;

    private void Awake()
    {
        _icon = transform.Find("Image").GetComponent<Image>();
        _amount = transform.Find("Text").GetComponent<TextMeshProUGUI>();
    }
    
    public bool CostEnough = false;
    public void SetAmount(int itemId, int count, long currentCount)
    {

        if (_icon == null)
            _icon = transform.Find("Image").GetComponent<Image>();
        if (_amount == null) 
            _amount = transform.Find("Text").GetComponent<TextMeshProUGUI>();
        _icon.SetSpriteFromAtlasAsync("item_atlas", itemId.ToString());
        if (currentCount >= count)
        {
            if (_light) _light.gameObject.SetActive(true);
            CostEnough = true;
            _amount.color = Color.white;
        }
        else
        {
            if (_light) _light.gameObject.SetActive(false);
            _amount.color =Color.red;
            

            CostEnough = false;
        }

        if (count == 0)
        {
            _icon.gameObject.SetActive(false);
            _amount.text = LanguageDataContext.GetLanguage("Free");
            _amount.color = Color.green;
        }

        else
        {
            _amount.color =Color.white;
            _icon.gameObject.SetActive(true);
            _amount.text = count.ToString();
        }
    }

    public void LightForceDisappear()
    {
        if (_light) _light.gameObject.SetActive(false);
    }
}