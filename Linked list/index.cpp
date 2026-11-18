
#include <iostream>
using namespace std;

// Node banana
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {

    // 3 nodes banana
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    // Nodes ko connect karna
    first->next = second;
    second->next = third;
    third->next = NULL;

    // Linked List print karna
    Node* temp = first;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}
