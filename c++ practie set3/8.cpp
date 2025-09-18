#include<iostream>
#include<string>
using namespace std;
class Account{
    private:
    int acc_no;
    float bal;
    public:
    void set(int a,float b){
        acc_no=a;
        bal=b;
    }
    void get()
{
    cout<<"Account Number : "<<acc_no<<endl<<"balance : "<<bal;
}};
int main(){
    Account a1;
    a1.set(000034,2346.98);
    a1.get();
    return 0;
}