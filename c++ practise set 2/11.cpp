#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter ur base and then power";
    cin>>a>>b;
    int i=1;
    int n=1;
    while(i<=b){
        n=n*a;
        i=i+1;
    }
     cout<<a<<" to the power "<<b<<" is "<<n;
    return 0;

}