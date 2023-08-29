#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    ifstream MyReadFile("sample.txt");
    fstream file("output.txt");
    int pos=0,neg=0;

    while (getline (MyReadFile, s))
    {
        if(my>0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
        v.push_back(my);
        cnt++;
    }
    int data,posn;
    cout<<"Enter the number that you want to insert: ";
    cin>>data;
    cout<<"Enter the position where you want to insert: ";
    cin>>posn;

    cout<<"There are total "<<cnt<<" Numbers"<<endl;
    cout<<"Total positive number are : "<<pos<<endl;
    cout<<"Total negative number are : "<<neg<<endl;

    MyReadFile.close();
    return 0;
}
