#include<iostream>
using namespace std;
int main(){
    int i;
    int j;
    int count=0;
    cout<<"the prime numbers between 1 and 100 are :"<<endl;
    for(i=2;i<101;i=i+1){
        count=0;
        for(j=2;j<i;j=j+1){
            if(i%j==0){
                count=count+1;
            }
        }
        if(count==0){
            cout<<i<<" ";
        }
    }
    return 0;
}