using System;
using System.Text;
 
namespace QuickBrownFoxKattis
{
    class MainClass
    {
        static int getnum(string a)
        {
            byte[] dec = Encoding.ASCII.GetBytes(a);
            return (int) dec[0];
        }
        public static void Main(string[] args)
        {
            string temp,tms;
            int tc;
            temp=Console.ReadLine();
            int.TryParse(temp, out tc);
            for (int i = 0; i < tc; i++)
            {
                tms = Console.ReadLine();
                tms = tms.ToLower();
                int[] alp =new int[26];
                for(int j=0;j<26;j++)
                {
                    alp[j]=0;
                }
                for (int it = 0; it < tms.Length; it++)
                {
                    if(tms.Substring(it,1)!=" " && getnum(tms.Substring(it,1))>=97&&getnum(tms.Substring(it,1))<=122)
                    {
                        alp[getnum(tms.Substring(it,1))-97]++;
                    }
                }
                string build="";
                for (int it = 0; it < 26; it++)
                {
                    if(alp[it]==0)
                    {
                        char c = Convert.ToChar(it+97);
                        build+=c.ToString();
                    }
                }
                if(build.Length==0){Console.WriteLine("pangram");}
                else{
                    Console.WriteLine("missing "+build);}
            }
        }
 
    }
}