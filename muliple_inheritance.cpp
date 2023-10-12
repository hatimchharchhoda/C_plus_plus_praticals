#include<iostream>
using namespace std;
class value1
{
protected:
    int a;
public:
    value1()
    {
        cout<<"enter value1 : ";
        cin>>a;
    }
};
class value2
{
protected:
    int b;
public:
    value2()
    {
        cout<<"enter value2: ";
        cin>>b;
    }
};
class multi: public value1,public value2
{
    int m;
public:
    multi()
    {
        m=a*b;
        cout<<"multiplied : "<<m;
    }
};
int main()
{
    multi m1;
    return 0;
}
