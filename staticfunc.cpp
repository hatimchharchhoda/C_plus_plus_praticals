#include<iostream>
using namespace std;
class counting
{
    static int count1;
public:
    counting()
    {
        count1++;
    }
    static void showcount()
    {
        cout<<"number of participants: "<<count1;
    }
};
int counting:: count1;
int main()
{
    counting c1,c2,c3;
    counting::showcount();
    return 0;
}

