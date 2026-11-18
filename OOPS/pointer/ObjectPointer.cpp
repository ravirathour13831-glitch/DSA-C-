
#include <iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int runs;
    float average;

    Cricketer(string name, int runs, float average) {
        this->name = name;
        this->runs = runs;
        this->average = average;
    }

    void print() {
        cout << name << endl;
        cout << runs << endl;
        cout << average << endl;
    }
};

int main() {

    Cricketer c1("Virat", 14000, 58.4);
    Cricketer c2("Sachin Tendulkar", 18000, 49.4);
    Cricketer c3("Virat", 11000, 48.4);

    Cricketer* p = new Cricketer("Ravi", 41000, 45.5);

    p->print();

    cout << (*p).name << endl;
    // Cricketer* ptr = &c1;


    p->average = 70.2;

    cout << (*p).average << endl;

    delete p;

    return 0;
}
