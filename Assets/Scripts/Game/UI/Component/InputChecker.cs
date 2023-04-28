using System;
using System.Text.RegularExpressions;
using Game.Modules.Message;
using MailingJoy.Game.Modules.Tips;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Game.UI.Component
{
    public class InputChecker:MonoBehaviour
    {
        /*1：全中文
         2：全英文或数字
         3:身份证
        */
        public int type=1;

        private Regex _regex ;

        private string _az = @"[a-z]";

        private TMP_InputField input;

        [SerializeField]
        private Text _text;

        private void Awake()
        {
            input = GetComponent<TMP_InputField>();
            input.onValidateInput += InputCheck;
            if (type == 1)
            {
                _regex = new Regex(@"^[\u4e00-\u9fa5]+$");
                input.onEndEdit.AddListener(OnEndEditHandler);

            }
            else if (type==2)
            {
                _regex = new Regex(@"[0-9]");
                input.onEndEdit.AddListener(OnEndEditHandler);
            }
            

            if (_text != null)
            {
                input.onValueChanged.AddListener((x)=>_text.text=x);
            }
        }

        private void OnEndEditHandler(string arg0)
        {
            if (type == 1)
            {
                var regex = new Regex(@"^[\u4e00-\u9fa5]*$");
                
                if (regex.IsMatch(arg0))
                {
                    
                }
                else
                {
                    _regex = new Regex(@"[\u4e00-\u9fa5]+");
                    input.text = _regex.Match(arg0).Value;
                }


            }
            
        }

        private char InputCheck(string text, int charindex, char addedchar)
        {
            if (type == 1)
            {
                // if (_regex.IsMatch(addedchar.ToString()))
                // {
                //     return addedchar;
                // }
                // Tips.Show("名字只能输入汉字");
                // return char.MinValue;
            }

            if (type == 2)
            {
                if (charindex < 17)
                {
                    if (_regex.IsMatch(addedchar.ToString()))
                    {
                        return addedchar;
                    }
                    Tips.Show("身份证只能输入数字和末尾X");

                    return char.MinValue;
                }else if (charindex == 17)
                {
                    if (_regex.IsMatch(addedchar.ToString()))
                    {
                        return addedchar;
                    }

                    if (addedchar == 'X' || addedchar == 'x')
                    {
                        return 'X';
                    }
                }
                else
                {
                    return char.MinValue;
                }

                return addedchar;
            }
            return addedchar;
        }
    }
}