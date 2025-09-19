#include<iostream>
#include<string>
using namespace std;
class Time{
    public:
    int hr;
    int min;
    int sec;
    Time(){
        hr=00;
        min=00;
        sec=00;
    }
    Time(int h,int m){
        hr=h;
        min=m;
        sec=00;
    }
    Time(int h,int m,int s){
        hr=h;
        min=m;
        sec=s;
    }
    void display(){
        cout<<"Time is "<<hr<<":"<<min<<":"<<sec<<endl;
    }
};
int main(){
    Time t1,t2(5,30),t3(7,48,32);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}