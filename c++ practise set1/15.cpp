#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter ur num :";
    cin>>a;
    int rev=0;
    while(a>0){
        int rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    cout<<"reversed number is "<<rev;
    return 0;
}