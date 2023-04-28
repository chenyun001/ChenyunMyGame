using System;
using System.Text.RegularExpressions;
using UnityEngine;

namespace MailingJoy.Utils
{
    public static class HtmlToRichText
    {
        public static string DoRegex(string text)
        {
            //取出<p></p>
            Regex regex = new Regex(@"(?<=\<p\>).*?(?=\<\/p\>)");
            text = text.Replace("<strong>", "<b>");
            text = text.Replace("</strong>", "</b>");
            text = text.Replace("<em>", "<i>");
            text = text.Replace("</em>", "</i>");
            var matchs = regex.Matches(text);

            Regex color = new Regex("<span style=\"color: rgb(.*?)</span>");
            Regex size = new Regex("<span style=\"font-size:(.*)</span>");

            string tempString = String.Empty;
            foreach (var id in matchs)
            {
                var st = id.ToString();
                st = color.Replace(st, ColorMatch);
                st = size.Replace(st, sizeMatch);
                st = size.Replace(st, sizeMatch);
                tempString += st;
            }

            Regex other = new Regex("<span.*?>");
            tempString = other.Replace(tempString, "");
            tempString = tempString.Replace("</span>", "");

            tempString = tempString.Replace("<br/>", "\n");
            
            return tempString;
        }

        public static string MailRegex(string text)
        {
            Regex regex = new Regex(@"(?<=\<p\>).*?(?=\<\/p\>)");
            var matchs = regex.Matches(text);
            string tempString = String.Empty;
            foreach (var id in matchs)
            {
                tempString += id.ToString();
            }
            if (tempString.Contains("<br/>"))
            {
                tempString = tempString.Replace("<br/>", "\n");
            }
            if (tempString.Contains("\r"))
                tempString.Replace("\r", "");
            if (tempString.Contains("\n"))
                tempString.Replace("\n", "");
            return tempString;
        }


        public static Color TryParseHtmlString(string htmlString)
        {
            Color color = Color.white;
            if (ColorUtility.TryParseHtmlString(htmlString, out color))
            {
                return color;
            }
            return color;
        }

        private static string sizeMatch(Match match)
        {
            var temp = match.Value;
            Regex colorValueRegex = new Regex(@"(?<=font-size: ).*?(?=px)");
            string size = colorValueRegex.Match(temp).Value;
            var left = String.Format("<size={0}>", int.Parse(size));

            Regex nowValueRegex = new Regex(@"(?<=\>).*(?=\<\/span)");
            return left + nowValueRegex.Match(temp).Value + "</size>";
        }

        private static string ColorMatch(Match match)
        {
            var temp = match.Value;
            Regex colorValueRegex = new Regex(@"(?<=rgb\().*?(?=\))");
            string[] color = colorValueRegex.Match(temp).Value.Split(',');
            var left = String.Format("<color=#{0:X2}{1:X2}{2:X2}>", int.Parse(color[0]), int.Parse(color[1]),
                int.Parse(color[2]));

            Regex nowValueRegex = new Regex(@"(?<=\>).*?(?=\<\/span)");

            return left + nowValueRegex.Match(temp).Value + "</color>";
        }
    }
}