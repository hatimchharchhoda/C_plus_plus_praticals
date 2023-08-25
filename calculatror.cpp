#include<iostream>
using namespace std;
int main(){
 int a,b,e;
 cout<<"enter first digit: ";
 cin>>a;
  cout<<"\n";
 cout<<"enter second digit: ";
 cin>>b;
 cout<<"\n";
 cout<<"enter key for your calculation 1.add 2.sub 3.multi 4.divide: ";
 cin>>e;
  cout<<"\n";
 switch(e)
 {
     case 1: cout<<"add= "<<a+b;
            break;
     case 2: cout<<"sub= "<<a-b;
             break;
     case 3: cout<<"multi= "<<a*b;
            break;
     case 4: cout<<"divide= "<<a/b;
             break;
 }
 return 0;
}
