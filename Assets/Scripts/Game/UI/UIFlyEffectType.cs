//=========================================
//Author: 洪金敏
//Email: jonny.hong91@gmail.com
//Create Date: 2019/07/02 14:28:49
//Description: 
//=========================================

namespace Core
{
    /// <summary>
    /// UI 中从 A 点飞到 B 点的显示枚举
    /// </summary>
    public enum UIFlyEffectType
    {
        /// <summary>
        /// 特效从人物飞到人物身上
        /// </summary>
        BATTLE_POWER_ROLE_TO_ROLE,

        /// <summary>
        /// 特效从人物飞到 UI 上
        /// </summary>
        BATTLE_POWER_ROLE_TO_UI,

        /// <summary>
        /// 分数 特效从人飞到 UI 上
        /// </summary>
        BATTLE_SCORE_ROLE_TO_UI,
    }
}