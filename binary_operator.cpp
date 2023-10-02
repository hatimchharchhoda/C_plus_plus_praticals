#include<iostream>
using namespace std;
class xyz
{
    float c;
public:
    void getdata()
    {
        cout<<"\nenter the value: ";
        cin>>c;
    }
    xyz operator /(xyz x)
    {
        xyz temp;
        temp.c=c/x.c;
        return temp;
    }
    void display()
    {
        cout<<"\nvalue is: "<<c;
    }
    friend int operator==(xyz,xyz);
};
int operator==(xyz q,xyz w)
{
    if(q.c==w.c)
        return 1;
    else
        return 0;
}
int main()
{
    xyz a,b,c,d;
    a.getdata();
    b.getdata();
    c=a/b;
    c.display();
    d.getdata();

    if(c==d)
        cout<<"\nboth are same";
    else
        cout<<"\nboth are different";
    return 0;
}
