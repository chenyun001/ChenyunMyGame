//=========================================
//Author: 洪金敏
//Create Date: 2019/01/02 15:31:30
//Description: 
//=========================================

using System;
using MailingJoy.Core;
using MailingJoy.Core.Utils;
using Spine.Unity;
using UnityEngine;

namespace Core.Helper
{
    public class SpineAnimationCreator
    {
        public static IAnimationStateComponent Create(int generalId, string defaultAnimation, Transform parent,
            bool isGraphic, Action<IAnimationStateComponent> cb = null)
        {
            IAnimationStateComponent animation = null;
            {
                //SpineManager.Instance.Load(generalId,
                //    skeletonData =>
                //    {
                //        if (isGraphic)
                //        {
                //            animation = SkeletonGraphic.NewSkeletonGraphicGameObject(skeletonData, parent, null);
                //            ((SkeletonGraphic) animation).Initialize(false);
                //        }
                //        else
                //        {
                //            animation = SkeletonAnimation.NewSkeletonAnimationGameObject(skeletonData);
                //            ((SkeletonAnimation) animation).transform.SetParent(parent);
                //            ((SkeletonAnimation) animation).Initialize(false);
                //        }

                //        if (animation == null)
                //        {
                //            Debugger.LogError(generalId + " Can't Find SpineData");
                //        }
                //        else
                //        {
                //            if (!string.IsNullOrEmpty(defaultAnimation))
                //            {
                //                animation.AnimationState.SetAnimation(0, defaultAnimation, true);
                //            }
                //            else
                //            {
                //                animation.AnimationState.SetEmptyAnimation(0, 0);
                //            }
                //        }

                //        cb?.Invoke(animation);
                //    });
            }
            return animation;
        }

        /*
        public static IAnimationStateComponent Create(int tableId, string defaultAnimation, Transform parent,
            bool isGraphic, Action<IAnimationStateComponent> cb = null)
        {
            if (tableId == -1 || tableId == 0)
            {
                return null;
            }
            var type = TableIdManager.GetType(tableId);
            string skeleton = string.Empty;
            //1主公 2小兵 3武将 4阵法 6NPC
            if (type == RoleType.Lord)
            {
                var lordExcel = LordSkinDataContext.GetLordExcel(tableId);
                skeleton = AnimationDataContext.GetSkeletonDataName(lordExcel.SkinId);
            }
            else if (type == RoleType.Soldier)
            {
                var soldierExcel = SoldierDataContext.GetSoliderExcel(tableId);
                skeleton = AnimationDataContext.GetSkeletonDataName(soldierExcel.skinId);
            }
            else if (type == RoleType.General)
            {
                var generalExcel = GeneralDataContext.GetGeneralExcel(tableId);
                skeleton = AnimationDataContext.GetSkeletonDataName(generalExcel.skinId);
            }
            else
            {
                skeleton = AnimationDataContext.GetSkeletonDataName(tableId);
            }
            return Create(skeleton, defaultAnimation, parent, isGraphic, cb);
        }
        */
    }
}