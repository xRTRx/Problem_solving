using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1 {
    class Program {
        static string pcheck(string password) {
            int cdigits = 0, cschars = 0; // counters
            foreach(char i in password) {
                if (Char.IsDigit(i)) {
                    ++cdigits;
                } else if(!Char.IsLetterOrDigit(i)) {
                    ++cschars;
                } else {
                    continue;
                }
            }
            if(cdigits >= 2 && cschars >= 2 && password.Length >= 7) {
                return "Strong";
            } else {
                return "Weak";
            }
        }

        static void Main(string[] args) {
            string password = Console.ReadLine();
            Console.WriteLine(pcheck("123qwe##rt")); // Strong
            Console.WriteLine(pcheck("1qwerty*")); // Weak
        }
    }
}

