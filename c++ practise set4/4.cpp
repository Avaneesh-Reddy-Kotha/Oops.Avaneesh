#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    public:
    int acc_no;
    float bal;
    BankAccount(){
        acc_no=0;
        bal=0;
    }
    BankAccount(int a){
        acc_no=a;
        bal=0;
    }
    BankAccount(int a,float b){
        acc_no=a;
        bal=b;
    }
    void display(){
        cout<<"account number : "<<acc_no<<" ,balance : "<<bal<<endl;
    }
};
int main(){
    BankAccount b1,b2(22339990),b3(2233990,300.56);
    b1.display();
    b2.display();
    b3.display();
    return 0;
}