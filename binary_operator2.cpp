#include<iostream>
#include<string.h>
using namespace std;
class xyz
{
public:
    char a[100];

    void getdata()
    {
        cout<<"enter an string: ";
        cin>>a;
    }
    void display()
    {
        cout<<"\nstring: "<<a;

    }
    /*   xyz operator +(xyz q)
       {
           strcat(a,q.a);
           display();
       }*/
    friend void operator +(xyz,xyz);
};
void operator +(xyz x1,xyz x2)
{
    strcat(x1.a,x2.a);
    x1.display();
}
int main()
{
    xyz x1,x2;
    x1.getdata();
    x2.getdata();
    x1+x2;
    return 0;
}
