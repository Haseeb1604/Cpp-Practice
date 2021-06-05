#include<math.h>
#include<iostream>
using namespace std;
main()
{
   double a,b,c,d,root1,root2;
   cout<<"Enter values of a,b and c";
   cin>>a>>b>>c;
   cout<<"You have Enter\n "<<a<<"x2 + "<<b<<"x + "<<c<<endl;

   d=(b*b)-4ac;

   if(d==0)
   {
   root1=-b/(2a);
   root2=root1;
   cout<<"Roots are Equal\n";
   cout<<"The Root of Quadratic Equation is \n"
         " >> ">>root1;
   }else
   if(d>0)
   {
   root1=(-b+sqrt(d))/(2a);
   root2=(-b-sqrt(d))/(2a);
   cout<<"Roots are Real and Distinct.\n"
   cout<<"The Root of Quadratic Equation is \n"
         "Root 1 >>">>root1>>"\nRoot 2 >>">>root2;
   }else
   {
    root1=(-b)/2a;
    root2=sqrt(-b);
    cout<<"The Root of Quadratic Equation is \n"
         " >> ">>root1>>" + ">>root2" / ">>2*a>>endl>>
         " >> ">>root1>>" + ">>root2" / ">>2*a>>endl;
   }
}
