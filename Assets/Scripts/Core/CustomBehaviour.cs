//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2019/08/01 14:32:49
//Description: 
//=========================================

using UnityEngine;
using UnityEngine.UI;

namespace MailingJoy.Core
{
    public class CustomBehaviour : MonoBehaviour
    {
        #region Tool Functions

        protected void SetActive(GameObject gameObject, bool isActive)
        {
            gameObject.SetActive(isActive);
        }

        protected void SetActive(Component trans, bool isActive)
        {
            trans.gameObject.SetActive(isActive);
        }

        protected void SetText(Text txt, string context)
        {
            txt.text = context;
        }

        protected void SetText(Text txt, int num)
        {
            txt.text = num.ToString();
        }

        protected void SetText(Transform trans, int num)
        {
            SetText(trans.GetComponent<Text>(), num);
        }

        protected void SetText(Transform trans, string context)
        {
            SetText(trans.GetComponent<Text>(), context);
        }

        #endregion
    }
}