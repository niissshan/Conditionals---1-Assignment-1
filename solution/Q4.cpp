#include<iostream>
using namespace std;
int main()
{
    float l,b;
    cout<<"Enter length: "<<endl;
    cin>>l;
    cout<<"Enter breadth: "<<endl;
    cin>>b;
    float area = l * b;
    float perimeter = 2 * (l + b);
    if(area>perimeter)
    {
        cout<<"Yes area is larger than perimeter";
    }
    else
    {
        cout<<"No";
    }
    return 0;

}