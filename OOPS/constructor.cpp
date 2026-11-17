
#include <iostream>
using namespace std;

class student {
public:
    string name;
    int rno;
    float cgp;

    // Constructor 1
    student(string n, int r, float c) {
        name = n;
        rno = r;
        cgp = c;
    }

    // Constructor 2 (Overloading)
    student(int r, float c, string n) {
        name = n;
        rno = r;
        cgp = c;
    }

    // Default Constructor
    student() {
        name = "Unknown";
        rno = 0;
        cgp = 0;
    }

    // Member Function
    void print() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rno << endl;
        cout << "CGPA: " << cgp << endl;
    }
};

int main() {

    student x("Ravi", 132, 6.5);
    student y(123, 6.1, "Muskan");
    student z;

    x.print();

    cout << endl;

    y.print();

    cout << endl;

    z.print();

    return 0;
}
