#include <iostream>
using namespace std;
 class Node {
        public :
        int value;
        Node* next;
        Node(int value){
            this->value = value;

        }
    //    int  print(){

    //    }

    };

    void printRec(Node* head){

        if (head == NULL){
            return;
        }
        printRec(head->next);
        cout<<head->value<<"->";

    };

int main() {
    // Node a(10);
    Node* head;
    Node* a = new  Node(124);
    Node* b = new  Node(12);
    Node* c = new  Node(15);
    Node* d = new  Node(45);
    Node* e = new  Node(18);
    Node* f = new  Node(14);

//attaching
    head = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = NULL;

    Node* temp = head;




    printRec(head);

    // cout<<head->value;
    while (temp != NULL)

    {
        cout<<temp->value<<"->";
        temp = temp->next;

    };

    return 0;
}

