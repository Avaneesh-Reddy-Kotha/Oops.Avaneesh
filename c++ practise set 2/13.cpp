#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter ur no.";
    cin>>a;
    // int y;
    // int z;
    int i=1;
    int new_no=0;
    int origi=a;
    while(i<=3){
        int digit=a%10;
        new_no=new_no + (digit*digit*digit);
        a=a/10;
        i=i+1;
    }
    if(new_no==origi){
        cout<<"no. is armstrong number";
    }
    else{
        cout<<"no is not armstrong number";
    }
    return 0;
}