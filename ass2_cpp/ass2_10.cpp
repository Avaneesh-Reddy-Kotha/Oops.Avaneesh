#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double area() override {
        return M_PI * radius * radius;
    }
};

class Square : public Shape {
    double side;
public:
    Square(double s) {
        side = s;
    }
    double area() override {
        return side * side;
    }
};

int main() {
    Shape* c = new Circle(5.0);
    Shape* s = new Square(4.0);

    cout << "Area of Circle: " << c->area() << endl;
    cout << "Area of Square: " << s->area() << endl;

    delete c;
    delete s;
    return 0;
}
