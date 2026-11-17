#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
    string name;
    int rno;
    float cgpa;
};

int main() {
    Student X;
    X.name = "ravi";
    X.rno = 373;
    X.cgpa = 6.5;

    Student Y;
    Y.name = "muskan";
    Y.rno = 372;
    Y.cgpa = 6.6;

    cout << X.name << " " << X.rno << " " << X.cgpa << endl;
    cout << Y.name << " " << Y.rno << " " << Y.cgpa << endl;
    return 0;
}