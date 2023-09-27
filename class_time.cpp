#include<iostream>
using namespace std;
class time{
int h,s,m;
public:
    void getdata(){
         cout<<"enter the hour:";
         cin>>h;
         cout<<"enter the minute:";
         cin>>m;
         cout<<"enter the second:";
         cin>>s;
    }
    void display(){
         cout<<h<<"."<<m<<"."<<s<<endl;
    }
    time add(time t1,time t2){
         h=t1.h+t2.h;
         m=t1.m+t2.m;
         s=t1.s+t2.s;
    }
};
int main(){
     time t1,t2,t3;
     t1.getdata();
     t2.getdata();
     t1.display();
     t2.display();
     t3.add(t1,t2);
     t3.display();
     return 0;
}
