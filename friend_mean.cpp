#include<iostream>
using namespace std;
class num
{
    int a[100],m;
public:
    void getdata()
    {
        int n;
        cout<<"how many no. you want to enter : "<<endl;
        cin>>n;
        m=n;
        cout<<endl<<"enter the no. : ";
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
    }
    friend void mean(num n1);
};
void mean(num n1)
{
    float sum=0;
    for(int i=0; i<n1.m; i++)
        sum=n1.a[i]+sum;
    cout<<"mean value is : "<<sum/n1.m;
}
int main()
{
    num n;
    n.getdata();
    mean(n);
    return 0;
}
