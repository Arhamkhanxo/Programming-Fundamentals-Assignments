#include <iostream>
using namespace std;

class MyVector {
    int arr[100]; 
    int length;   

public:
    MyVector() {
        length = 0;
    }

    void push_back(int val) {
        if (length < 100) {
            arr[length] = val;
            length++;
        } else {
            cout << "Vector is full!" << endl;
        }
    }

    void pop_back() {
        if (length > 0) {
            length--;
        } else {
            cout << "Vector is empty!" << endl;
        }
    }

    int size() {
        return length;
    }

    void display() {
        for (int i = 0; i < length; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    int get(int index) {
        if (index >= 0 && index < length)
            return arr[index];
        cout << "Index out of bounds!" << endl;
        return -1;
    }
};

int main() {
    MyVector v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector elements: ";
    v.display();

    cout << "Size: " << v.size() << endl;

    v.pop_back();
    cout << "After pop_back: ";
    v.display();
    cout << "Size: " << v.size() << endl;

    cout << "Element at index 1: " << v.get(1) << endl;

    return 0;
}
