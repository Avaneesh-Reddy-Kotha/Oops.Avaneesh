#include<iostream>
#include<string>
using namespace std;
class employee{
    private:
    int ID;
    float salary;
    public:
    void set_details(int id,float s){
        ID=id;
        salary=s;
    }
    void get_details(){
        cout<<"ID : "<<ID<<endl<<"salary : "<<salary<<endl;
    }
};
int main(){
   employee e1,e2,e3;
   e1.set_details(1,1000);
   e2.set_details(2,2000);
   e3.set_details(3,3000);
   e1.get_details();
   e2.get_details();
   e3.get_details();

   return 0;
}