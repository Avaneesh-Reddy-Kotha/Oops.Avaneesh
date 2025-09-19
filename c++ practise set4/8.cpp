#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    string brand;
    double price;
    string model;
    car(string b){
      brand=b;
      price=0;
      model="nan";

    }
    car(string b,string m){
        brand =b;
        model=m;
        price=0;
    }
    car(string b,string m,double p){
        brand=b;
        model=m;
        price=p;
    }
    void dis(){
        cout<<"brand : "<<brand<<endl<<"model : "<<model<<endl<<"price : "<<price<<endl;
    }
};
int main(){
    car c1("Porsche"),c2("Porsche","911"),c3("Porsche","911",28353000.00);
    c1.dis();
    c2.dis();
    c3.dis();
    return 0;
}