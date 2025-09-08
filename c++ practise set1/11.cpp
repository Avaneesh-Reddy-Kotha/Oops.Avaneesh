#include<iostream>
using namespace std;
int main(){
   int a;
   cout<<"enter ur mark";
   cin>>a;
   if(a>0 and a<101){
    if(a>=90){
        cout<<"grade is A";

    }
    else if(a>=80){
        cout<<"grade is B";

    }
    else if(a>=70){
        cout<<"grade is C";

    }
    else if(a>=60){
        cout<<"grade is D";
    }
    else {
        cout<<"grade is F";
    }
   }
   else{
    cout<<"number is out of scale";
   }
   return 0;
}