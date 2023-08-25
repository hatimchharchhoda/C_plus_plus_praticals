#include<iostream>;
using namespace std;
int main(){
    int a[5],b[5],i,c[10],j;
    cout<<"enter the values in array1: ";
    for(i=0;i<=4;i++){
    cin>>a[i];
    }
    for(i=0;i<=4;i++){
    cin>>b[i];
    }
       for(j=0;j<=4;j++){
           c[j]=a[j];
       }
      for(i=5;i<=9;i++){
            j=0;
           c[i]=b[j];
           j++;
       }
      for(j=0;j<=9;j++){
           cout<<"\narray c: "<<c[j];
       }
return 0;
}
