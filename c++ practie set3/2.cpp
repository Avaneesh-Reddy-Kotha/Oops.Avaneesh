#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    private:
    float balance;
    public:
    BankAccount(){
        balance=0.0;
    }
    void set_balance(int b){
        if(b<0){
            cout<<"balace cannnot be negative"<<endl;
        }
        else{
            balance=b;
        }
    }
    void get_balance(){
        
        cout<<"balance : "<<balance;
    }

};
int main(){
    BankAccount B1;
    B1.set_balance(-1);
    B1.get_balance();
    return 0;
}