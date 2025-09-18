#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    int age;

    public:
    void set_details(string n,int a){
        name=n;
        age=a;
    }
    void get_details(){
        cout<<"name : "<<name<<endl<<"age : "<<age;
    }
};
int main(){
    student s1;
    s1.set_details("sanju",19);
    s1.get_details();
    return 0;

}