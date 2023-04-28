//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2019/07/02 14:32:53
//Description: 
//=========================================

using System;
using UnityEngine;

namespace MailingJoy.Manager
{
    public interface IUIFlyEffect
    {
        void CreateEffect(string effectName, Action<IUIFlyEffect> createCompleteAction);
        void SetFlyPos(Transform from, Transform to);
    }
}