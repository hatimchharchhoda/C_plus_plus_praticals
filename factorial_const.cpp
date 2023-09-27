#include<iostream>
using namespace std;
class fact
{
    int a,b=1;
public:
    fact(){
        cout<<"enter the no. : ";
        cin>>a;
    }
    fact(fact &c)
    {   a=c.a;
        for(int i=1; i<=a; i++)
        {
            b=b*i;
        }
        cout<<"factorial : "<<b;
    }
};
int main()
{
     fact f1,f2(f1);
     return 0;
}
