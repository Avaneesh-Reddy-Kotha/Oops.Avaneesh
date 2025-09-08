#include<iostream>
using namespace std;
int main(){
    int a;
    int fact=1;
    cout<<"enter ur numb:-";
    cin>>a;
    int i=1;
    while(i<=a){
        fact=fact*i;
        i=i+1;
    }
    cout<<"factorial of "<<a<<" is "<<fact;
    return 0;
}