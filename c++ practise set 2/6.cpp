#include<iostream>
using namespace std;
int main(){
    int rem;
    int rev=0;
    int a;
    cout<<"enter your number:-";
    cin>>a;
    do{
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    while(a>0);
    cout<<"reversed number is "<<rev;
    return 0;
}