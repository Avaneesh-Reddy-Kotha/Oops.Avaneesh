#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter ur numb:-";
    cin>>a;
    int i=1;
    do{
      cout<<a<<"*"<<i<<"="<<a*i<<endl;
      i=i+1;  
    }
    while(i<=10);
    return 0;
}