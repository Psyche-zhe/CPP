using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FirstCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            
            string[] info = new string[] {"psyche","jim","kang","mike"};
            int[] score = new int[] { 12,13,14,15};
            int maxScore = score[0],maxindex = 0,sum=0;
            for (int x = 1; x < score.Length; x++) {
                sum += score[x];
                if (maxScore < score[x]) {
                    maxScore = score[x];
                    maxindex = x;
                }
            }
           Console.WriteLine("name: "+info[maxindex]+"'s score  is : "+maxScore);
           Console.WriteLine("total score :{0}, avgscore : {1}",sum,(double)sum/4.0);
        }

    }
}
