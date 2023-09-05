#include<iostream>
using namespace std;
class object2;
class object3;
class object{
  int a;
  public:
      object(int g)
      {
         a=g;
      }
       friend void object3::sum(object o1(g),object2 o(k));
};
class object2{
   int b;
   public:
       object2(int g)
       {
         b=g;
       }
       friend void object3::sum(object o1(g),object2 o(k));
};
class object3
{
  int c;
  public:
      void sum(object o1(g),object2 o(k))
      {
         cout<<"sum of no. is: "<<o1.a+o.b;
       }
};
int main()
{
object o(5);//
object o1(10);
object3 oo;
oo.sum(o,o1);
return 0;
}
