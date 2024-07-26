#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the alphabet"<<endl;
    cin>>ch;
    int ascii =(int)ch;
    if(ascii>=97 && ascii<=122 || ascii>=65 && ascii<=90 )
    {
       cout<<"Character is alphabet"<<endl;
    }
    else if(ascii>=48 && ascii<=57)
    {
        cout<<"Character is digit";

    }
    else{
        cout<<"Character is special character";
    }

    return 0;


}