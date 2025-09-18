#include<iostream>
#include<string>
using namespace std;
class Temperature{
    private:
    float celsius;
    float farenheit;
    public:
    void set_celsius(float c){
        celsius=c;
    }
    void get_fahrenheit(){
        float f;
        f=((celsius*(9/5))+32);
        cout<<"celsius to farenheit coversion for "<<celsius<<" degree celisus is "<<f;
    }
};
int main(){
    Temperature t1;
    t1.set_celsius(45.97);
    t1.get_fahrenheit();
    return 0; 
}