#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 1st number"<<endl;
    cin>>a;
    cout<<"Enter 2nd number"<<endl;
    cin>>b;
    int greatest = a;
    if(b > greatest)
    {
        cout<<"2nd number is greater: "<<b<<endl;
    }
    else
    {
        cout<<"1st number is greater: "<<a<<endl;
    }
    return 0;
}
