#include<iostream>
using namespace std;
class shape
{
protected:
    double x,y;
public:
    void getdata()
    {
        cout<<"\nenter the value of x and y : ";
        cin>>x>>y;
    }
    virtual void display_area()
    {
        cout<<"calling base class object with base class pointer";
    }
};
class triangle: public shape
{
    double area;
public:
    void display_area()
    {
        area=0.5*x*y;
        cout<<"\narea of triangle: "<<area;
    }
};
class rectangle: public shape
{
    double area;
public:
    void display_area()
    {
        area=x*y;
        cout<<"\narea of rectangle: "<<area;
    }
};
int main()
{
    shape *s[3];
    shape s1;
    s[3]=&s1;
    s[3]->display_area();
    triangle t;
    s[0]=&t;
    s[0]->getdata();
    s[0]->display_area();
    rectangle r;
    s[1]=&r;
    s[1]->getdata();
    s[1]->display_area();
    return 0;
}
