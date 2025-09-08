#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two Numbers:-";
    cin>>a>>b;
    int i;
    int gcd;
    for(i=min(a,b);i>=1;i=i-1){
        if(a%i==0 and b%i==0){
            gcd=i;
            break;
        }
    }
    cout<<"gcd of "<<a<<" and "<<b<<" is "<<gcd;

}