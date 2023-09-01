#include<iostream>
#include<string.h>
using namespace std;
void bitstuffing(char b[100])
{
    int j=0,k,w;
    w=strlen(b);
    for(int i=0; b[i]!='\0'; i++)
    {
        if(b[i]=='1')
        {
            j++;
            if(j==5)
                k=i;
            if(j==6)
            {
                for(int o=w+1; o>k; o--)
                {
                    b[o+1]=b[o];
                }
            }
        }
        else
            j=0;
    }
    b[k+1]='0';
    cout<<"sender side: "<<b<<endl;
    int m=0,g;
    if(w!=strlen(b))
    {
        for(int i=0; b[i]!='\0'; i++)


        {
            if(b[i]=='1')
            {
                m++;
                if(m==5)
                {
                    if(b[i+1]=='0' && b[i+2]=='1')
                    {
                        for(g=i; b[g]!='\0'; g++)
                        {
                            b[g+1]=b[g+2];
                        }
                    }
                }
            }
                else
                    m=0;
        }
    }
    cout<<"receiver side: "<<b<<endl;

}
int main()
{

    char a[100];
    cout<<"enter an bit :"<<endl;
    cin>>a;
    bitstuffing(a);
    return 0;

}
