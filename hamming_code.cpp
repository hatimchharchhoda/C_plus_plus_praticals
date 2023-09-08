#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[100];
    int r0,r1,r2;
    cout<<"Enter an Dataword:"<<endl;
    cin>>a;
    r0=(a[3]+a[2]+a[1])%2;
    r1=(a[2]+a[1]+a[0])%2;
    r2=(a[3]+a[2]+a[0])%2;
    cout<<endl<<"Codeword is : "<<a<<r2<<r1<<r0<<endl;


    char b[100],q[10];
    int s0,s1,s2;
    cout<<"Enter Codeword: "<<endl;
    cin>>b;
    s0=(b[3]+b[2]+b[1]+b[6])%2;
    s1=(b[2]+b[1]+b[0]+b[5])%2;
    s2=(b[3]+b[2]+b[0]+b[4])%2;
    cout<<s2<<s1<<s0<<endl;
    cout<<"Enter the above code: ";
    cin>>q[19];
    cout<<endl<<endl;
    if(s2==0 && s1==0 && s0==0)
    {
        cout<<"Dataword is: ";
        for(int i=0; i<4; i++)
        {
            cout<<b[i];
        }
    }
    switch (q[10]){
         case '011' : if(b[1]==0)
                        b[1]=1;
                      else
                        b[1]=0;
                      break;
        case '101' : if(b[3]==0)
                        b[3]=1;
                      else
                        b[3]=0;
                      break;
        case '110' : if(b[0]==0)
                        b[0]=1;
                      else
                        b[0]=0;
                      break;
        case '111' : if(b[2]==0)
                        b[2]=1;
                      else
                        b[2]=0;
                      break;
        default : break;
    }
          cout<<"Dataword is: ";
        for(int i=0; i<4; i++)
        {
            cout<<b[i];
        }
    return 0;
}
