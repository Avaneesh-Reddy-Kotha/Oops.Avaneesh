#include<iostream>
#include<string>
using namespace std;
class Distance{
    public:
    float dis;
    float feet;
    Distance(){
        dis=0;
        feet=0;
    }
    Distance(float d){
        dis=d;
        feet=0;
    }
    Distance(float d,float f){
        dis=d;
        feet=f;
    }
    void disp(){
        cout<<"distance : "<<dis<<endl<<"feet : "<<feet<<endl; 
    }
};
int main(){
    Distance d1,d2(6.9),d3(3.4,5.11);
    d1.disp();
    d2.disp();
    d3.disp();
    return 0;

}