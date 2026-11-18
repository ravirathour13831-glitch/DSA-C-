#include <iostream>
using namespace std;

class MyVector {
public:
    int length;
    int* arr;
    int cap;

    MyVector(int capacity, int default_value) {
        length = cap = capacity;

        arr = new int[capacity];

        for (int i = 0; i < length; i++) {
            arr[i] = default_value;
        }
    }

    void push_back(int n) {

        // Capacity full hone par
        if (length == cap) {

            int* newArr = new int[cap * 2];

            // Old elements copy
            for (int i = 0; i < length; i++) {
                newArr[i] = arr[i];
            }

            delete[] arr;

            arr = newArr;
            cap = cap * 2;
        }

        // New element add
        arr[length] = n;
        length++;
    }

    ~MyVector() {
        delete[] arr;
    }
};

int main() {

    MyVector v(5, -1);

    v.push_back(100);

    for (int i = 0; i < v.length; i++) {
        cout << v.arr[i] << " ";
    }

    return 0;
}