#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area not defined for generic shape.\n";
    }
    void display() {
        cout << "Displaying shape info.\n";
    }
    void display(int sides) {
        cout << "This shape has " << sides << " sides.\n";
    }
};

class Rectangle : public Shape {
    int length, breadth;
public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    void area() override {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

int main() {
    Shape s;
    cout << "Compile-time Polymorphism:\n";
    s.display();
    s.display(4);

    cout << "Run-time Polymorphism:\n";
    Shape* ptr;
    Rectangle r(5, 3);
    ptr = &r;
    ptr->area();
    return 0;
}
