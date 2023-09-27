#include<iostream>
using namespace std;
class prime
{
    int a,sum=0;
public:
    prime()
    {
        cout<<"enter an no. : ";
        cin>>a;
        for(int i=1; i<=a; i++)
        {
            if(a%i==0)
                sum=sum+1;
        }
        if(sum==2)
            cout<<"\nprime: "<<a;
        else
            cout<<"\nnot prime: "<<a;
    }
};
int main()
{
    prime p1;
    return 0;
}
