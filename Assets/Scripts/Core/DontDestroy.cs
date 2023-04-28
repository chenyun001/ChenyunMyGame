//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2020/09/17 18:04:33
//Description: 
//=========================================

using System;
using UnityEngine;

namespace MailingJoy.Core
{
    public class DontDestroy : MonoBehaviour
    {
        private void Awake()
        {
            DontDestroyOnLoad(gameObject);
        }
    }
}