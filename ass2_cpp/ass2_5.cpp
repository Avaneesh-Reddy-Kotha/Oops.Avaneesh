#include <iostream>
#include <string>
using namespace std;

class person {
protected:
    string name;
    int age;
public:
    void getperson(string n, int a) {
        name = n;
        age = a;
    }
    void show() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class athlete {
protected:
    string sport;
    int ranking;
public:
    void getathelete(string s, int r) {
        sport = s;
        ranking = r;
    }
    void show() {
        cout << "Sport: " << sport << endl;
        cout << "Ranking: " << ranking << endl;
    }
};

class sportsperson : public person, public athlete {
public:
    void display() {
        cout << "Person Details:\n";
        person::show();
        cout << "Athlete Details:\n";
        athlete::show();
    }
};

int main() {
    sportsperson s1;
    s1.getperson("Karthik", 20);
    s1.getathelete("Cricket", 5);

    cout << "--Sportsperson Information--\n";
    s1.display();
    return 0;
}
