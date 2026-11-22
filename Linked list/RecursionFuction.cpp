#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
    }

 
    

    
};

 void  printf(Node* temp){
    while (temp != NULL)

    {
        cout<<temp->value<<"->";
        temp = temp->next;


    }
};
 
 void Recursion(Node* tepm){
    if ( tepm  == NULL) return;
 
    Recursion(tepm->next);
    cout<<tepm->value<<"->";

 };

int main()
{

    // Node* a ;
    // a = new Node;
    // a->value = 10;
    // cout<<a->next<<a->value;

    Node *head;
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);

    // attaching
    head = a;
    a->next = b;
    b->next = c;
    c->next = NULL;

    Node* temp = head;
    printf(temp);

    cout<<endl;

    Recursion(temp);

    return 0;
}