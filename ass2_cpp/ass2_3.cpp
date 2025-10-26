#include <iostream>
using namespace std;

class shape {
protected:
    float length, breadth;
public:
    void get(float l, float b) {
        length = l;
        breadth = b;
    }
};

class rectangle : public shape {
public:
    float area() {
        return length * breadth;
    }

    float perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    rectangle rect;
    float l, b;

    cout << "Enter length and breadth: ";
    cin >> l >> b;

    rect.get(l, b);

    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    return 0;
}
