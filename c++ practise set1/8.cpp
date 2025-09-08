#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter ur no. :";
    cin>>n;
    int i;
    int  sum=0;
    for(i=1;i<n+1;i=i+1){
        sum=sum+i;
    }
    cout<<"sum is :"<<sum;
    return 0;
}