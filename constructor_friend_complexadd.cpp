#include<iostream>
using namespace std;
class complex2;
class complex1{
    int a,b;
    public:
        complex1(int z,int y){
              a=z;
              b=y;
              cout<<"complex :"<<z<<"+"<<y<<"i"<<endl;
        }
        friend void add(complex1 ci,complex2 c2);
};
class complex2{
    int q,w;
public:
    complex2(int s,int d){
        q=s;
        w=d;
        cout<<"complex :"<<s<<"+"<<d<<"i"<<endl;
    }
    friend void add(complex1 c1,complex2 c2);
};
void add(complex1 c1,complex2 c2){
    cout<<"now complex is :"<<c1.a+c2.q<<"+"<<c1.b+c2.w<<"i"<<endl;
}

int main(){
complex1 qq(3,30);
complex2 ww(5,10);
add(qq,ww);
return 0;
}

