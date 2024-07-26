#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"Enter all three sides of triangle"<<endl;
   cin>>a>>b>>c;
   if(a==b && b==c)
   {
    cout<<"Equilateral triangle";
   }
   else if(a == b || a == c || b == c)
   {
    cout<<"Isosceles triangle";
   }
   
   else
   {
    cout<<"Scalene triangle";
   }
    return 0;

}