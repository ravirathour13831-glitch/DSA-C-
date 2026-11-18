#include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int value){
        this->value = value;

    };
    
};

int main() {
    // Node a;
    // a.value = 10;
Node a(2);
Node b(30);
Node c(10);
Node d(250);
Node e(25);
// attaching node

a.next = &b;
b.next = &c;
c.next = &d;
d.next = &e;
cout<<(c.next->value);



    return 0;
}