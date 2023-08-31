#include<iostream>
#include<string.h>
using namespace std;
class bank
{
    int wam,bal,dam;
    char name[20];
public:
    int ac;
    void getdata()
    {
        //int account[100];
        cout<<"enter your name:"<<endl;
        cin>>name;
        cout<<"enter your balance:"<<endl;
        cin>>bal;
        cout<<"enter your account no.:"<<endl;
        cin>>ac;
        //account=ac;
    }
    void banker()
    {
   /*     int q;
        cout<<"enter customer acoount no.:"<<endl;
        cin>>q;*/
            cout<<"....account varified...."<<endl;
            cout<<"enter how much customer wants to withdrawl:"<<endl;
            cin>>wam;
            if(bal>=wam)
            {
                cout<<"now your balance is:"<<bal-wam<<endl;
                bal=bal-wam;
            }
            else
            {
                cout<<"insuffiecient balance"<<endl;
            }
        }
        void customer()
        {
          int q;
                cout<<"....account varified...."<<endl;
                cout<<"enter key for your functions:\n 1. to deposit\n 2. check balance and withdrawl\n 3. show your balance"<<endl;
                cin>>q;
                switch(q)
                {
                case 1  :
                    cout<<"enter how much you wants to deposit:"<<endl;
                    cin>>dam;
                    bal=dam+bal;
                    break;
                case 2  :
                    cout<<"your balance is : "<<bal<<endl;
                    cout<<"enter how much you wants to withdrawl:"<<endl;
                    cin>>wam;
                    if(bal>=wam)
                    {
                        cout<<"now your balance is:"<<bal-wam<<endl;
                        bal=bal-wam;
                    }
                    else
                        cout<<"insuffiecient balance"<<endl;
                    break;
                case 3 :
                    cout<<"name: "<<name<<endl;
                    cout<<"your balance: "<<bal<<endl;
                    break;
                default  :
                    cout<<"please enter correctly";
                    break;
                }
        }
    };
    int main()
    {
        bank b[10];
        int j,k,a,z,p=0;
        cout<<"enter the no. of customer: "<<endl;
        cin>>k;
        for(j=0; j<k; j++)
        {
            b[j].getdata();
        }
        cout<<"enter the key for appropriate user:\n 1.banker\t 2.customer"<<endl;
        cin>>a;
        cout<<"Enter your account number"<<endl;
        cin>>z;
        switch (a)
        {

        case 1:
            for(j=0; j<k; j++)
            {
                if(z==b[j].ac){
                    b[j].banker();
                    p++;
                   }
            }
            if(p==0)
                cout<<"invalid account no."<<endl;
            break;
        case 2:
            for(j=0; j<k; j++)
            {
                if(z==b[j].ac){
                    b[j].customer();
                    p++;
                   }
            }
            if(p==0){
                cout<<"invalid account no."<<endl;
            }
            break;
        default:
            cout<<"user cannot be identified";
            break;
        }
        return 0;
    }
