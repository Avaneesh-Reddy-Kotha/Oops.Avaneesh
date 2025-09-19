#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int age;
    float marks;
    student(int age,float marks){
        this->age=age;
        this->marks=marks;
    }
    void get(){
        cout<<"name : "<<name<<endl<<"marks : "<<marks<<endl<<"age : "<< age;
    }
};
int main(){
    student s1(19,79);
    s1.name="sanju";
    s1.get();
    return 0;
}