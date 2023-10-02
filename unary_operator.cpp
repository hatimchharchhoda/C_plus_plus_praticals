#include<iostream>
using namespace std;
class abc
{
    int a;
public:
    abc()
    {
        cout<<"enter the value: ";
        cin>>a;
    }
    void operator ++()
    {
        cout<<"\npre add value is : "<<++a;
    }
    void operator ++(int)
    {
        cout<<"\npost add value is : "<<a++;
    }
    friend void operator --(abc);
};
void operator --(abc a1)
{
    cout<<"\npre subtract value is : "<<--a1.a;
}
int main()
{
    abc a1;
    a1++;
    ++a1;
    --a1;
    return 0;
}
