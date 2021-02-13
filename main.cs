using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1 {
    class Program {
        static void Main(string[] args) {
            string s = Console.ReadLine();
            Dictionary<char, Int16> letters = new Dictionary<char, Int16>();
            bool check = false;
            foreach(var i in s) {
                if (letters.ContainsKey(i)) {
                    check = true;
                    letters[i] += 1;
                    Console.WriteLine("Deja Vu");
                    break;
                } else {
                    letters.Add(i, 1);
                }
            }
            if(check == false) {
                Console.WriteLine("Unique");
            }

        }
    }
}
