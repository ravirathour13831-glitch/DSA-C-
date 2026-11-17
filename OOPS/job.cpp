
#include <iostream>
using namespace std;

class Employee {
private:
    double salary;

public:
    string name;
    int id;

    Employee(string name, double salary, int id) {
        this->name = name;
        this->salary = salary;
        this->id = id;
    }

    void print() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "ID: " << id << endl;
    }
};

int main() {

    Employee s1("ravi", 12000, 125);

    s1.print();

    return 0;
}
