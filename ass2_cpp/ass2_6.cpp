#include <iostream>
using namespace std;

class sorter {
    int arr[100];
    int n;
public:
    void input() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void display() {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    void bubbleSort() {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
            }
        }
        cout << "Array after Bubble Sort: ";
        display();
    }

    void insertionSort() {
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
        cout << "Array after Insertion Sort: ";
        display();
    }

    void selectionSort() {
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex])
                    minIndex = j;
            }
            swap(arr[i], arr[minIndex]);
        }
        cout << "Array after Selection Sort: ";
        display();
    }
};

int main() {
    sorter s;
    s.input();
    cout << "Choose Sorting Algorithm:\n1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\nEnter choice: ";
    int choice;
    cin >> choice;
    if (choice == 1)
        s.bubbleSort();
    else if (choice == 2)
        s.insertionSort();
    else if (choice == 3)
        s.selectionSort();
    else
        cout << "Invalid choice!";
    return 0;
}
