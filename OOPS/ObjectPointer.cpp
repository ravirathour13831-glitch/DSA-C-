#include <iostream>
using namespace std;

class Cricketer{
    public:
    string name;
    int runs;
    float average;

    Cricketer(string name, int runs,float average){
      ( *this).name = name;
        this->runs = runs;

        this->average = average;
        
    };
};

int main() {

    Cricketer c1( "Virat", 14000, 58.4 );
    Cricketer c2( "sachin Tendulkar", 18000, 49.4 );
    Cricketer c3( "Virat", 11000, 48.4 );
    Cricketer* ptr = &c1;
    // cout<<ptr->average;
   cout<< (*ptr).name;
   ptr->average  = 70.2;
   cout<<(*ptr).average;
    // int x= 10; 
    // int* ptr = &x;
    // *ptr = 20;
    // cout<<*ptr;

    return 0;
}