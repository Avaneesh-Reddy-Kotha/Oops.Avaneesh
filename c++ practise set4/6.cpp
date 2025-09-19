#include<iostream>
#include<string>
using namespace std;
class Book{
    public:
    string title;
    string author;
    float price;
    Book(string t){
        title=t;
        author="nan";
        price=0;
    }
    Book(string t, string n){
        title=t;
        author=n;
        price=0;
    }
    Book(string s,string n,float p){
        title=s;
        author=n;
        price=p;
    }
    void display(){
        cout<<"title : "<<title<<endl<<"author : "<<author<<endl<<"price : "<<price<<endl;
    }
};
int main(){
    Book b1("C++"),b2("C++","sanju"),b3("C++","sanju",1999.99);
    b1.display();
    b2.display();
    b3.display();
    return 0;
}