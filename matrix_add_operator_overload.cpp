#include<iostream>
using namespace std;
class matrix
{
    int a[3][3];
public:
    matrix()
    {
        a[0][0];
    }
    matrix(int x,int y)
    {
        a[x][y];
        cout<<"enter the 3*3 matrix: "<<endl;
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"matrix: \n";
            for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                cout<<"\t"<<a[i][j];
            }
            cout<<endl;
        }
    }
    matrix operator +(matrix x)
    {
        cout<<"added matrix: \n";
            for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<"\t"<<a[i][j]+x.a[i][j];
            }
            cout<<endl;
        }
    }
};
int main()
{
    matrix m1(3,3),m2(3,3),m3;
    m3=m1+m2;
    return 0;
}
