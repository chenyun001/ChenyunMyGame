using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Game.UI.Component
{
    public class ToggleColor:MonoBehaviour
    {

        private Toggle _toggle;

        private TextMeshProUGUI _label;
        private void Awake()
        {
           _toggle = GetComponent<Toggle>();
           _label = transform.Find("Label").GetComponent<TextMeshProUGUI>();
            _toggle.onValueChanged.AddListener(ChangeValue);   
            ChangeValue(_toggle.isOn);
            
        }

        private void ChangeValue(bool arg0)
        {
            if (arg0)
            {
                _label.color = Color.black;
                
            }
            else
            {
                _label.color = Color.yellow;
            }
            
        }
    }
}