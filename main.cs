using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1 {
    class Program {
        static void Main(string[] args) {
            int o = Convert.ToInt32(Console.ReadLine());
            int sum = 0;
            for(int i = 0; i < o; ++i) {
                int temp = Convert.ToInt32(Console.ReadLine());
                if (temp % 2 == 0) {
                    sum += temp;
                }
            }
            Console.WriteLine(sum);

        }
    }
}
