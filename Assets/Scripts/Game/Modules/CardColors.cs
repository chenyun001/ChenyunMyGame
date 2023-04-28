namespace MailingJoy.Game.Modules.Common
{
    public class CardColors
    {
        public const string Color0 = "#ffffff"; //品质1
        public const string Color1 = "#00ff00"; //品质1
        public const string Color2 = "#00D7FF";
        public const string Color3 = "#DB56FF";
        public const string Color4 = "#FFC323";

        public static string GetCardColor(int color)
        {
            switch (color)
            {
                case 1:
                    return Color0;
                case 2:
                    return Color1;
                case 3:
                    return Color2;
                case 4:
                    return Color3;
                case 5:
                    return Color4;
                default:
                    return string.Empty;
            }
        }
    }
}