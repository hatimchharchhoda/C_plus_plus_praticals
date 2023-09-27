#include<iostream>
using namespace std;
class abc
{
    int a;
public:
    abc()
    {
        a=0;
        cout<<"value: "<<a<<endl;
    }
    abc(int x)
    {
        a=x;
        cout<<"value: "<<a<<endl;
    }
    abc(abc &a2)
    {
        a=a2.a;
        cout<<"value: "<<a<<endl;
    }
    ~abc()
    {
        cout<<"destructor called"<<endl;
    }
};
int main()
{
    abc a1,a2(3),a3(a2);
    return 0;
}
