
#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout<<"Enter A: "<<endl;
    cin>>A;
    cout<<"Enter B: "<<endl;
    cin>>B;
    cout<<"Enter C: "<<endl;
    cin>>C;
    
    if(A<B && A<C)
    {
        cout<<A <<" is least"<<endl;
    }
    else if(B<C && B<A)
    {
        cout<<B <<" is least"<<endl;
    }
    else
    {
        cout<<C <<" is least"<<endl;
    }

    return 0;

}
