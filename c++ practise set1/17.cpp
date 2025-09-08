#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter no.of terms :";
    cin>>a;
    int m=0,n=1,nxt;
    int i;
    for(i=0;i<=a;i=i+1){
        cout<<m<<" ";
        nxt=m+n;
        m=n;
        n=nxt;
        
    }
    return 0;
}