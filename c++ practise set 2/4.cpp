#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter no.of natural numbers u want sum of:-";
    cin>>n;
    for(int i=1;i<=n;i=i+1){
        sum=sum+i;
    }
    cout<<"sum of "<<n<<"natural numbers is"<<sum;
    return 0;
}