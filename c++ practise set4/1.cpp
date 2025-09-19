#include<iostream>
#include<string>
using namespace std;
class Rectangle{
    public:
    float length;
    float breadth;
    Rectangle(float l,float b){
        length=l;
        breadth=b;

    }
    void get_area(){
        cout<<"area is : "<<length*breadth;
    }
};
int main(){
    Rectangle r1(5.67,9.6);
    r1.get_area();
    return 0;
}
