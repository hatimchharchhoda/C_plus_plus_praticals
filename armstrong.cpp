#include<iostream>
using namespace std;
int main(){
int a,temp,sum=0,d;
cout<<"enter an no. : ";
cin>>a;
cout<<"\n";
for(a=temp;a>0;a/10)
{
    d=a%10;
    sum=sum+(d*d*d);
}
if(temp==sum){
cout<<"it is armstrong";
}
else{
 cout<<"it is not armstrong";
}
return 0;
}
