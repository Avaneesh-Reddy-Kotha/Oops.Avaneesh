#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter your num :";
    cin>>a;
    int sum=0;
    while(a>0){
        int rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    cout<<"sum of digits  is "<<sum;
    return 0;
}