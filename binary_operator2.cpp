#include<iostream>
#include<string.h>
using namespace std;
class xyz
{
    char a[10];
    int l;
public:
    void getdata()
    {
        cout<<"enter an string: ";
        cin>>a;
        l=strlen(a);
    }
    void display()
    {
        cout<<"\nstring: "<<a;
        cout<<"\nlength: "<<l;
    }
    void join(xyz x1,xyz x2)
    {
        strcpy(a,strcat(x1.a,x2.a));
        display();
    }
    xyz operator +(xyz q)
    {
        l+q.l;
    }
    friend int operator ==(xyz,xyz);
};
int operator ==(xyz x1,xyz x2)
{
    if(x1.a==x2.a)
        return 1;
    else
        return 0;
}
int main()
{
    xyz x1,x2,x3;
    x1.getdata();
    x2.getdata();
    if(x1==x2)
        x1.display();
    else
    {
        x3=x1+x2;
        x3.join(x1,x2);
    }
    return 0;
}
