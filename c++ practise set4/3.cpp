#include<iostream>
#include<string>
using namespace std;
class complex{
    public:
    float rl_pt;
    float img_pt;
    complex(){
        rl_pt=0;
        img_pt=0;
    }
    complex(float r){
        rl_pt=r;
        img_pt=0;
    }
    complex(float r,float i){
        rl_pt=r;
        img_pt=i;
    }
    void display(){
        cout<<"complex no : "<<rl_pt<<" + "<<img_pt<<"i"<<endl;
    }
};
int main(){
    complex c1,c2(5.02),c3(5.02,6.78);
    c1;
    cout<<"no argument "<<endl;
    c1.display();
    cout<<"one argument "<<endl;
    c2.display();
    cout<<"two arfuments "<<endl;
    c3.display();
    return 0;
}