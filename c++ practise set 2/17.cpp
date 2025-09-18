#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter ur nums in ascending order:-";
    cin>>a>>b;
    int gcd;
    for(int i=a;i>0;i=i-1){
        if(a%i==0 and b%i==0){
            gcd=i;
            break;
        }
    }
    cout<<"gcd is "<<gcd;
    return 0;
}