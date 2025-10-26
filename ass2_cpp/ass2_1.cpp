#include <iostream>
using namespace std;

class simpleList {
    int arr[100];
    int size;
public:
    simpleList() {
        size = 0;
    }

    void add(int value) {
        arr[size] = value;
        size++;
    }

    void remove() {
        if (size > 0)
            size--;
        else
            cout << "List is empty" << endl;
    }

    void display() {
        cout << "[";
        for (int i = 0; i < size; i++) {
            cout << arr[i];
            if (i < size - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }

    int getsize() {
        return size;
    }
};

int main() {
    simpleList L1;
    L1.add(10);
    L1.add(20);
    L1.add(30);

    cout << "List elements: ";
    L1.display();

    L1.remove();
    cout << "One element removed\n";

    cout << "List now: ";
    L1.display();

    cout << "Current size: " << L1.getsize() << endl;
    return 0;
}
