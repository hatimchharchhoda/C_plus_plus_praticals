#include<iostream>
using namespace std;
int swap1(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
int swap2(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return 0;
}
int main(){
    int x,y;
    cout<<"enter the values of swaping: ";
    cin>>x>>y;
    swap1(&x,&y);
    cout<<"\n"<<x<<y;
    swap2(x,y);
    cout<<"\n"<<x<<y;
    return 0;
}
