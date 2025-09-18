#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter ur no of terms";
    cin>>n;
    int a=0,b=1;
    int temp;
    // cout<<"fibonacci series "<<endl<<a<<endl<<b<<endl;
    for(int i=1;i<=n;i=i+1){
        cout<<a<<endl;
        temp=a+b;
        a=b;
        b=temp;
        
    }
    return 0;
}