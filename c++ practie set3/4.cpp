#include<iostream>
#include<string>
using namespace std;
class rectangle{
    private:
    float l;
    float w;
    public:
    void set_value(float l,float w){
        this->l=l;
        this->w=w;
    }
    void get_value(){
        cout<<"area : "<<l*w;
    }

};
int main(){
    rectangle r1;
    r1.set_value(12.0,5.6);
    r1.get_value();
    return 0;
}