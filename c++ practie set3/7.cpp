#include<iostream>
#include<string>
using namespace std;
class circle{
    private:
    float radius;
    public:
    void set_value(float r){
        radius=r;
    }
    void get_value(){
        cout<<"area : "<<((2*3.14)*(radius));
    }
};
int main(){
    circle c1;
    c1.set_value(4.25);
    c1.get_value();
    return 0;
}