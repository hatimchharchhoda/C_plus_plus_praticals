#include<iostream>
#include<string.h>
using namespace std;
class bank{
    int ac,wam,bal,dam;
    char name[20];
public:
    void getdata(){
      int account;
      cout<<"enter your name:"<<endl;
      cin>>name;
      cout<<"enter your balance:"<<endl;
      cin>>bal;
      cout<<"enter your acoount no.:"<<endl;
      cin>>ac;
      account=ac;
    }
    void banker(){
      int q;
      cout<<"enter customer acoount no.:"<<endl;
      cin>>q;
      if(q==ac){
        cout<<"enter how much customer wants to withdrawl:"<<endl;
        cin>>wam;
        }
    else
        cout<<"invalid account no."<<endl;
    if(bal>=wam){
        cout<<"now your balance is:"<<bal-wam<<endl;
        bal=bal-wam;
    }
    else
        cout<<"insuffiecient balance"<<endl;
    }
    void customer(){
      int q;
      cout<<"enter your acoount no.:"<<endl;
      cin>>q;

      if(q==ac)
        cout<<"account varified"<<endl;
      else
        cout<<"invalid account no."<<endl;
      cout<<"enter key for your functions:\n 1. to deposit\n 2. check balance and withdrawl\n 3. show your balance"<<endl;
      cin>>q;
    switch(q){
      case 1  :  cout<<"enter how much you wants to deposit:"<<endl;
                 cin>>dam;
                 bal=dam+bal;
                 break;
      case 2  :  cout<<"your balance is : "<<bal<<endl;
                 cout<<"enter how much you wants to withdrawl:"<<endl;
                 cin>>wam;
                 if(bal>=wam){
                 cout<<"now your balance is:"<<bal-wam<<endl;
                 bal=bal-wam;
                 }
                 else
                 cout<<"insuffiecient balance"<<endl;
                 break;
      case 3 :   cout<<"name: "<<name<<endl;
                 cout<<"your balance: "<<bal<<endl;
                 break;
    default  :   cout<<"please enter correctly";
                 break;
    }
  }
};
int main(){
char a[10];
bank b;
    b.getdata();
    b.banker();
    b.customer();
return 0;
}
