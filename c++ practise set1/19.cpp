#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"enter ur price and next ur rate of intrest and next to ur time period :";
    cin>>p>>r>>t;
    int S_I=(p*r*t)/(100);
    cout<<" ur simple intrest is "<<S_I;
    return 0;
}