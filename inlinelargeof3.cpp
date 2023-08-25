#include<iostream>
using namespace std;
inline int large(int a,int b,int c){
   int d;
   if(a>b && a>c)
           d=a;
   if(c>a && c>b)
            d=c;
   else
    d=b;
   return d;
}
int main(){
int x,y,z;
cout<<"enter the three values: ";
cin>>x>>y>>z;
cout<<"\nthe largest one is: "<<large(x,y,z);
return 0;
}
