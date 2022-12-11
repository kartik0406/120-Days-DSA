# 120-Days-DSA
120 Days DSA Challenge
1. Arrays + Hashing
2. Matrix
3. Strings
4. Searching
5. Sorting
6. Recursion
7. LinkedList
8. Trees
9. Heaps
10. Graphs
11. Greedy
12. Backtracking
13. Dynamic Programming

using System;
namespace Solution
{
    class Program
    {
        public double StokesCalculation(double vis, double radius, double speed){
            double dragForce=6*3.14*vis*radius*speed;
            return dragForce;
        }
        public void DemoQuestion5(){
          Console.WriteLine("\n\n*****************************Begin Question 5****************************");
          
          double res=StokesCalculation(1.3,3.17e-3,0.108);
          Console.WriteLine("\nOutput of Viscosity:1.3, Radius:3.17e-3, Speed:0.108 is "+res+" N");
          res=StokesCalculation(1.4,3.23e-3,0.0474);
          Console.WriteLine("\nOutput of Viscosity:1.4, Radius:3.23e-3, Speed:0.0474 is "+res+" N");
          
          
          Console.WriteLine("\n*****************************End Question 5******************************\n\n");
            
        }
        static void Main(string[] args)
        {
             Program p=new Program();
             Console.WriteLine("\n************Drag Force Calculation by Stoke's Law*************");
             p.DemoQuestion5();
        }
    }
}


