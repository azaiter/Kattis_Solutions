using System.IO;
using System;
using System.Linq;

class Program
{
    static void Main()
    {
            string input = Console.ReadLine();
            int value = Convert.ToInt32(input);
			int result = Convert.ToInt32(new String(
					Convert.ToString(value, 2)
					.Reverse()
					.ToArray()), 2);
					Console.Write(result);
    }
}