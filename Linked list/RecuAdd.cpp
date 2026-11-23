
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
        this->next = NULL;
    }
};

// Print Linked List
void printf(Node* temp)
{
    while (temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

// Print using Recursion
void Recursion(Node* temp)
{
    if (temp == NULL)
        return;

    Recursion(temp->next);

    cout << temp->value << "->";
}

// Add node at last
void add(Node* &head, Node* d)
{
    if (head == NULL)
    {
        head = d;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = d;
}

int main()
{
    Node* head;

    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);

    // Attaching nodes
    head = a;
    a->next = b;
    b->next = c;

    cout << "Original Linked List: ";
    printf(head);

    cout << "\n\nRecursion (Reverse Order): ";
    Recursion(head);

    // New node
    Node* d = new Node(99);

    // Add at last
    add(head, d);

    cout << "\n\nAfter Adding 99: ";
    printf(head);

    return 0;
}
