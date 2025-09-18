#include<iostream>
#include<string>
using namespace std;
class book{
    private:
    string title;
    float price;
    public:
    void set_value(string n, float p){
        title=n;
        price=p;

    }
    void get_value(){
        cout<<"title : "<<title<<endl<<"price : "<<price;
    }
};
int main(){
    book b1;
    b1.set_value("life of pi",1300);
    b1.get_value();
    return 0;
}