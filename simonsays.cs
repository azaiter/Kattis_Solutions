using System.IO;
using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int cnt = Convert.ToInt32(Console.ReadLine());
        for(int i = 0; i < cnt; i++)
        {
            string line = Console.ReadLine();
            if(line.StartsWith("Simon says "))
            {
                Console.Write(line.Substring(11));
                Console.Write("\n");
            }
        }
    }
}