#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter ur no-";
    cin>>a;
    int i;
    int fac=1;
    for(i=1;i<=a;i=i+1){
        fac=fac*i;
    }
    cout<<"factorial is :"<<fac;
    return 0;
}