#include <iostream>
using namespace std;

class student {
public:
    string name;
    double* cgpPtr;

    student(string name, double cgp) {
        this->name = name;
        cgpPtr = new double;
        *cgpPtr = cgp;
    }

    student(student &obj) {
        this->name = obj.name;
        this->cgpPtr = obj.cgpPtr;
    }

    void getInfo() {
        cout << "name: " << name << endl;
        cout << "cgp: " << *cgpPtr << endl;
    }
};

int main() {
    student s1("rahul", 6.5);

    student s2(s1);

    *(s2.cgpPtr) = 9.2;

    s1.getInfo();
    s2.getInfo();

    return 0;
}
