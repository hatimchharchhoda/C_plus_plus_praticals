#include<iostream>
using namespace std;
class shape
{
protected:
    double x,y;
public:
    shape()
    {
        cout<<"\nenter the value of x and y : ";
        cin>>x>>y;
    }
    virtual void display_area()=0;
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
    shape *s;
    triangle t;
    s=&t;
    s->display_area();
    rectangle r;
    s=&r;
    s->display_area();
    return 0;
}
