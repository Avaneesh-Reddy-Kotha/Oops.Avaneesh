#include<iostream>
using namespace std;
int main(){
   int i=1;
   int sum=0;
   for(i=1;i<=100;i=i+1){
    if(i%2==0){
        sum=sum+i;
    }
   } 
   cout<<"the sum all even numbers from 1 to 100 is "<<sum;
   return 0;
}