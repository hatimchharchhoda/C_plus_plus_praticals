#include<iostream>
using namespace std;
int area(int a,int b){
    return 0.5*a*b;
}
int area(int a){
    return 1.73*a*a/4;
}
int area(int a,float b){
    return 0.5*b*a;
}
int main(){
    int x,y;
    float z;
    cout<<"enter the value of base and height: ";
    cin>>x>>y>>z;
    cout<<"\narea of right angle triangle = "<<area(x,y);
    cout<<"\narea of isoceles triangle = "<<area(x,z);
    cout<<"\narea of equilateral triangle = "<<area(x);
    return 0;
}
