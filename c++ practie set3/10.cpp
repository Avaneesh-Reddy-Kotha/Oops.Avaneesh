#include<iostream>
#include<string>
using namespace std;
class university{
    string name;
    int rank;
    public:
    void set(string n,int r){
        name=n;
        rank=r;
    }
    void get(){
        cout<<"name of the student is : "<<name<<endl<<"rank of student is : "<<rank;
    }
};
int main(){
    university s1;
    s1.set("sanju",5544);
    s1.get();
    return 0;
}