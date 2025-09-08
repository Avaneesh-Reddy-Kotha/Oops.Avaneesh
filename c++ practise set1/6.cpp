#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter ur no. :";
    cin>>a;
    int i;
    for(i=1;i<11;i=i+1){
        cout<<a<<"*"<<i<<"="<<a*i<<endl;
    }
    return 0;
}