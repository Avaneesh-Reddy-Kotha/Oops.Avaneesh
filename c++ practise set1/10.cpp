#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter year";
    cin>>a;
    if(a%4==0){
        cout<<a<<" is leap year";
    
    }
    else{
        cout<<a<<" is not leap year";
    }
    return 0;
}