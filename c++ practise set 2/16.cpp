#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter ur no:-";
    cin>>a;
    int rev=0,rem;
    int origi=a;
    for(int i=1;a>0;i=i+1){
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    if(rev==origi){
        cout<<origi<<" is palindrome";
    }
    else{
        
            cout<<origi<<" is not palindrome";
    }
    return 0;
}