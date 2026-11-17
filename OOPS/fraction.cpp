#include <iostream>
#include <numeric>
#include <cstdlib>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
    double salary;

public:
    Fraction(int n, int d) {
        numerator = n;
        denominator = d;
        simplify();
    }

    void simplify() {
        int g = gcd(abs(numerator), abs(denominator));

        numerator = numerator / g;
        denominator = denominator / g;

        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

    Fraction add(Fraction f) {
        int n = numerator * f.denominator
              + f.numerator * denominator;

        int d = denominator * f.denominator;

        return Fraction(n, d);
    }

    Fraction multiply(Fraction f) {
        int n = numerator * f.numerator;
        int d = denominator * f.denominator;

        return Fraction(n, d);
    }

    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1(2, 4);
    Fraction f2(3, 6);

    cout << "First Fraction: ";
    f1.display();

    cout << "Second Fraction: ";
    f2.display();

    Fraction result1 = f1.add(f2);
    cout << "Addition: ";
    result1.display();

    Fraction result2 = f1.multiply(f2);
    cout << "Multiplication: ";
    result2.display();

    return 0;
}