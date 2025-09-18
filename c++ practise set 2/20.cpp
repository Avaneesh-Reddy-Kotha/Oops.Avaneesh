#include<iostream>
using namespace std;
int main(){
 int sum=0;
 int a;
 int count=0;
 cout<<"enter ur marks(if negative num is entered program stops)"<<endl;
 do{
    cin>>a;
    sum=sum+a;
    count=count+1;
 }
 while(a>0);
 int avg=(sum/count);
 cout<<"avg is "<<avg;
 return 0;
}