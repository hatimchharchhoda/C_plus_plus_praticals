#include<iostream>
#include<math.h>
using namespace std;
class polar
{
protected:
    float r,radian;
public:
    polar()
    {
        cout<<"enter the value of r and radian: ";
        cin>>r>>radian;
    }
};
class rectangle: public polar
{
    float x,y;
public:
    void display()
    {
        x=r*cos(radian);
        y=r*sin(radian);
        cout<<"cordinates of (x,y) = ("<<x<<","<<y<<")";
    }
};
int main()
{
    rectangle r1;
    r1.display();
    return 0;
}
