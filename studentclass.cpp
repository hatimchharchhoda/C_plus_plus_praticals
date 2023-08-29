#include<iostream>
using namespace std;
class student{
    int id,sem;
    float cpi,spi;
    char name[20];
public:  void getdata(){
            cout<<"enter the student name: "<<endl;
            cin>>name;
            cout<<"enter the student id: "<<endl;
            cin>>id;
            cout<<"enter the student sem: "<<endl;
            cin>>sem;
            cout<<"enter the student spi: "<<endl;
            cin>>spi;
            cout<<"enter the student cpi: "<<endl;
            cin>>cpi;
       }
       void displaydata(){
            cout<<"name: "<<name<<endl;
            cout<<"id: "<<id<<endl;
            cout<<"sem: "<<sem<<endl;
            cout<<"spi: "<<spi<<endl;
            cout<<"cpi: "<<cpi<<endl;
       }
};
int main(){
student s[2];
for(int i=0;i<2;i++){
    s[i].getdata();
}
for(int i=0;i<2;i++){
    s[i].displaydata();
}
return 0;
}
