#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter ur num :";
    cin>>a;
    int rev=0;
    int origi=a;
    while(a>0){
        int rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    cout<<"reversed number is "<<rev<<endl;
    if(origi==rev){
        cout<<origi<<" is palindrome";
    }
    else{
        cout<<origi<<" is not palindrome";
    }
    return 0;
}