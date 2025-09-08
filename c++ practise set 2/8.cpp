#include<iostream>
using namespace std;
int main(){
    int i=1;
    cout<<"odd numbers between 1 and 50 are";
    while(i<=50){
        if((i%2)!=0){
            cout<<i<<" ";
        }
        i=i+1;
    }
    return 0;
}