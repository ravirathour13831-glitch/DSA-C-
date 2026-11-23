
#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

// Reverse Printing using Recursion
void Recursion(Node* temp)
{
    if (temp == NULL)
        return;

    Recursion(temp->next);

    cout << temp->value << "->";
}

int main()
{
    Node* head;

    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);

    head = a;
    a->next = b;
    b->next = c;

    cout << "Reverse Linked List: ";

    Recursion(head);

    cout << "NULL";

    return 0;
}
