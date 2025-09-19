#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    string name;
    int id;
    Employee(string n){
        name=n;
        id=0;
    }
    Employee(string n,int i){
        name=n;
        id=i;
    }
    void dis(){
        cout<<"name : "<<name<<endl<<"ID : "<<id<<endl;
    }
};
int main(){
    Employee e1("Sanju"),e2("Sanju",10035);
    e1.dis();
    e2.dis();
    return 0;
}