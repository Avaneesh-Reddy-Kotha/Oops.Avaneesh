#include<iostream>
using namespace std;
int main()
{
        int a;
    cout<<"enter ur numb :";
    cin>>a;
    int count=0;
    for(int i=2; i<a;i=i+1){
        if(a%i==0){
            count=count+1;
        }
    } 
    if(count==0){
        cout<<a<<" is prime";
    }
    else{
        cout<<a<<" is not a prime";
    }
    return 0;
}