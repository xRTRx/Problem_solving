using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1 {
    class Program {
        static string convert_time(string s) {
            string result = null;
            int hours = int.Parse(s.Substring(0, s.IndexOf(':')));
            if ((s.Contains("AM") && (hours != 12)) || (s.Contains("PM") && (hours == 12))) {
                if (hours > 10) {
                    result = hours + s.Substring(s.IndexOf(':'), 3);
                } else {
                    result = Convert.ToString('0') + hours + s.Substring(s.IndexOf(':'), 3);
                }
            } else if (s.Contains("AM") && hours == 12) {
                result = "00" + s.Substring(s.IndexOf(':'), 3);
            } else if (s.Contains("PM") && hours != 12) {
                result = Convert.ToString(hours + 12) + s.Substring(s.IndexOf(':'), 3);
            }
            return result;
        }
        static void Main(string[] args) {
            //string input = Console.ReadLine();
            //Console.WriteLine(convert_time(input));
            Console.WriteLine(convert_time("0:50AM"));// 00:50
            Console.WriteLine(convert_time("3:00AM"));// 03:00
            Console.WriteLine(convert_time("9:00AM"));// 09:00
            Console.WriteLine(convert_time("11:00AM"));// 11:00
            Console.WriteLine(convert_time("12:00AM"));// 00:00
            Console.WriteLine(convert_time("12:40PM"));// 12:40
            Console.WriteLine(convert_time("7:00PM"));// 19:00
            Console.WriteLine(convert_time("11:00PM"));// 23:00
            Console.WriteLine(convert_time("00:15PM"));// 12:15
        }
    }
}

