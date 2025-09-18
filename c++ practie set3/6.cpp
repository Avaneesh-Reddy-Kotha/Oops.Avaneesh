#include<iostream>
#include<string>
using namespace std;
class car{
   string brand;
   string model;
   public:
   void set(string b,string m ){
    brand=b;
    model=m;
   }
   void get(){
    cout<<"brand : "<<brand<<endl<<"model : "<<model<<endl;
   }
};
int main(){
    car c[3];
    for(int i=0;i<=2;i=i+1){
        string b,m;
        cout<<"enter brand and model";
        cin>>b>>m;
        c[i].set(b,m);
    }
    for(int i=0;i<=2;i=i+1){
        c[i].get();
    }
    return 0;
}