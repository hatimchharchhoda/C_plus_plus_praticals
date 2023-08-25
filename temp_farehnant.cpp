#include<iostream>
using namespace std;
int main(){
float a,b;
int e;
cout<<"enter degree/farehnate: ";
 cin>>a;
  cout<<"\n";
   cout<<"enter key for convert 1.temp->fareh 2.fareh->temp ";
 cin>>e;
  cout<<"\n";
 switch(e)
 {
     case 1: cout<<"your convertion is: "<<(a*1.8)+32;
            break;
     case 2: cout<<"your convertion is: "<<(a-32)/1.8;
             break;
}
return 0;
}
