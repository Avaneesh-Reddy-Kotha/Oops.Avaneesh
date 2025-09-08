#include<iostream>
using namespace std;
int main(){
    int a;
  do{
    cout<<"enter a number / enter negative to stop";
    cin>>a;
    if(a>=0){
        cout<<"u've entered : "<<a<<endl;
    }
  }
  while(a>=0);
  cout<<"terminated beacuse negative num is entered";
  return 0;  
    
}