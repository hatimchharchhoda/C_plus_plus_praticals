#include<iostream>
using namespace std;
class student
{
    int roll;
    char name[15];
public:
    student()
    {
        cout<<"enter the rollno and name : ";
        cin>>roll>>name;
    }
    void display()
    {
        cout<<"\n\nroll no: "<<roll<<"\nname: "<<name<<endl;
    }
};
class exam: public student
{
protected:
    int mark[5];
public:
    exam()
    {
        cout<<"enter the marks of 5 subject: \n";
        for(int i=0;i<5;i++)
        {
         cout<<"sub "<<i+1<<": ";
         cin>>mark[i];
        }
    }
    void display()
    {
        student::display();
        for(int i=0;i<5;i++)
         cout<<"sub "<<i+1<<": "<<mark[i]<<"\t";
    }
};
class result: public exam
{
    int tot=0;
    float avg;
public:
    void display()
    {
        exam::display();
        for(int i=0;i<5;i++)
            tot+= mark[i];
        avg=tot/5;
        cout<<"\ntotal: "<<tot<<"\naverage: "<<avg;
    }
};
int main()
{
    result r1;
    r1.display();
    return 0;
}
