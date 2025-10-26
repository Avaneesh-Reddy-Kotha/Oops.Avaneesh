#include <iostream>
#include <string>
using namespace std;

class Dictionary {
    string keys[100];
    string values[100];
    int size;
public:
    Dictionary() {
        size = 0;
    }

    void add(string key, string value) {
        keys[size] = key;
        values[size] = value;
        size++;
    }

    void search(string key) {
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                cout << "Value for " << key << ": " << values[i] << endl;
                return;
            }
        }
        cout << "Key '" << key << "' not found" << endl;
    }

    void display() {
        cout << "Dictionary contents:" << endl;
        for (int i = 0; i < size; i++) {
            cout << keys[i] << " : " << values[i] << endl;
        }
    }
};

int main() {
    Dictionary dict;
    dict.add("name", "karthik");
    dict.add("age", "20");
    dict.add("city", "chennai");

    dict.display();

    dict.search("name");
    dict.search("country");

    return 0;
}
