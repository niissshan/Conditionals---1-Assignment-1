
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter X: "<<endl;
    cin>>x;
    cout<<"Enter Y: "<<endl;
    cin>>y;
if(x == 0 || y == 0)
{
  if(x!=0 && y==0)
    {
        cout<<"("<<x<<","<<y<<")"<<" lies on x-axis"<<endl;  
    }
    
    else if(x==0 && y!=0)
    {
         cout<<"("<<x<<","<<y<<")"<<" lies on y-axis"<<endl;
    }
    else
    {
        cout<<"The number lies on origin";
    }
}
else
{
cout<<"Enter any one number zero or both";
}
  
    return 0;

}
