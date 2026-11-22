#include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int value){
        this->value = value;
        // next = NULL;

    };
    
};

int main() {
    // Node a;
    // a.value = 10;
Node* a = new Node(2);
Node* b =  new Node(30);
Node* c = new Node(10);
Node* d  = new Node(250);
Node* e = new Node(25);
// attaching node
cout<<a->value;

(*a).next = b;
b->next = c;
c->next = d;
d->next = e;
cout<<(c->value)<<endl;
cout <<(*(c->next)).value;
cout<<b->next->next->next->value;



    return 0;
}