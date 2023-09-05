#include<iostream>
using namespace std;
class object2;
class object;
class object3
{
  int c;
  public:
      void sum(object,object2);

};
class object{
  int a;
  public:
      object(int g)
      {
         a=g;
         cout<<"value of 1st integer: "<<a<<endl;
      }
       friend void object3::sum(object,object2);
};
class object2{
   int b;
   public:
       object2(int g)
       {
         b=g;
         cout<<"value of 2nd integer: "<<b<<endl;
       }
       friend void object3::sum(object,object2);
};
 void object3::sum(object o1,object2 o)
         {
         cout<<"sum of no. is: "<<o1.a+o.b;
       }
int main()
{
object o(5);
object2 o1(10);
object3 oo;
oo.sum(o,o1);
return 0;
}
