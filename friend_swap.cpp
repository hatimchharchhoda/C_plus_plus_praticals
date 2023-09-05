#include<iostream>
using namespace std;
class value2;
class value1 {
   int a;
   public :
       void getvalue(int s){
            a=s;
            cout<<"value of v1 ="<<a<<endl;
       }
       friend void swap1(value1 v1,value2 v2);
};
class value2{
   int a;
   public :
       void getvalue(int s){
            a=s;
            cout<<"value of v2 ="<<a<<endl;
       }
       friend void swap1(value1 v1,value2 v2);
};
void swap1(value1 v1,value2 v2){
    int temp=v1.a;
    v1.a=v2.a;
    v2.a=temp;
    cout<<"value of v1 ="<<v1.a<<"\tvalue of v2 ="<<v2.a;
}
int main(){
value1 v;
value2 vv;
int p,q;
cout<<"enter the value of p: "<<endl;
cin>>p;
cout<<"enter the value of q: "<<endl;
cin>>q;
v.getvalue(p);
vv.getvalue(q);
swap1(v,vv);
return 0;
}
