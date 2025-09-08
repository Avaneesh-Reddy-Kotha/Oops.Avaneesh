#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter ur no-";
    cin>>a;
if(a>1 and a<50){
    if(a%3==0 and a%5==0){
        cout<<"FizzBUzz";}
    else if(a%5==0){
        cout<<"BUZZ";
    }
    else if(a%3==0){
        cout<<"FIZZ";
    }}
    else{
        cout<<"number exceeded limit";
    }
    return 0;

}