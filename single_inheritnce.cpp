#include<iostream>
using namespace std;
class take
{
protected:
    int a,b;
public:
    take()
    {
        cout<<"enter two positive integer: ";
        cin>>a>>b;
    }
};
class multi: public take
{
    int m;
public:
    multi()
    {
        m=a*b;
        cout<<"\nmultiplied value: "<<m;
    }
};
int main()
{
    multi m1;
    return 0;
}
