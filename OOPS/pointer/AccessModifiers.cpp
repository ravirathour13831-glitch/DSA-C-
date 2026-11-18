
#include <iostream>
using namespace std;

class Cricketer {
private:
    int runs;

public:
    string name;
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

    int getruns() {
        return runs;
    }
    void changerun(int runs){
        this->runs = runs;
        

    }
};

int main() {

    Cricketer c("Virat Kohli", 140000, 58.5);

    cout << c.name << endl;
    cout << c.average << endl;

    // cout << c.getruns() << endl;
    c.changerun(580000);

    return 0;
}
