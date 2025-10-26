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
    void showperson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class employee : public person {
protected:
    int empid;
    float salary;
public:
    void getemployee(int id, float sal) {
        empid = id;
        salary = sal;
    }
    void showemployee() {
        cout << "Employee ID: " << empid << endl;
        cout << "Salary: " << salary << endl;
    }
};

class manager : public employee {
    string department;
public:
    void getmanager(string dep) {
        department = dep;
    }
    void showmanager() {
        showperson();
        showemployee();
        cout << "Department: " << department << endl;
    }
};

int main() {
    manager m;
    m.getperson("Karthik", 30);
    m.getemployee(101, 21322);
    m.getmanager("CS");

    cout << "Manager Details:\n";
    m.showmanager();
    return 0;
}
