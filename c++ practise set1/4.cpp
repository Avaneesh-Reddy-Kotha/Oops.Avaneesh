#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter ur integers :";
    cin>>a>>b>>c;
    if(a>b and a>c){
        cout<<"greatest integer is "<<a;
    }
    else if(b>a and b>c){
        cout<<"greatest integer is "<<b;
    }
    else{
        cout<<"greatest integer is "<<c;
    }
    return 0;

}