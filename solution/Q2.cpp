#include<iostream>
using namespace std;
int main()
{
    float r;
    cout<<"Enter radius: "<<endl;
    cin>>r;
    float area = 3.1415 * r * r;
    float circumference = 2 * 3.1415 * r;
    if(area>circumference)
    {
        cout<<"Yes area is larger than circumference";
    }
    else
    {
        cout<<"No";
    }
    return 0;

}