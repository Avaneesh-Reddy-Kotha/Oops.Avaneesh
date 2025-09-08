#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter your coefficents in the form of  :"<<"ax^2+bx+c  : ";
    cin>>a>>b>>c;
    int det=((b*b)-(4*a*c));
    int x;
    int y;
    if(det>0){
        cout<<"roots are real and distinct, they are :"<<endl;
        x=(-b+(sqrt(det)))/(2*a);
        y=(-b-(sqrt(det)))/(2*a);
        cout<<x<<" and "<<y;
    }
    else if(det==0){
        cout<<"roots are equal and they are"<<endl;
        x=(-b+(sqrt(det)))/(2*a);
        y=(-b-(sqrt(det)))/(2*a);
        cout<<x<<"and"<<y;

    }
    else{
        cout<<"roots are imaaginary and they are"<<endl;
        double realpart=(-b/2*a);
        double imaginary_part=sqrt(-det)/2*a;
        cout<<realpart<<"+"<<imaginary_part<<"i"<<endl
            <<realpart<<"-"<<imaginary_part<<"i";


    }
    return 0;
}