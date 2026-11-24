
#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};

class List {
private:
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }

    // Insert at beginning
    void pushFront(int value) {
        Node* newnode = new Node(value);

        if (head == NULL) {
            head = tail = newnode;
            return;
        }

        newnode->next = head;
        head = newnode;
    }

    // Insert at any position
    void Insert(int value, int pos) {

        if (pos < 0) {
            cout << "Invalid position";
            return;
        }

        if (pos == 0) {
            pushFront(value);
            return;
        }

        Node* temp = head;

        for (int r = 0; r < pos - 1; r++) {

            if (temp == NULL) {
                cout << "Invalid position";
                return;
            }

            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid position";
            return;
        }

        Node* newnode = new Node(value);

        newnode->next = temp->next;
        temp->next = newnode;

        if (temp == tail) {
            tail = newnode;
        }
    }

    // Print Linked List
    void printf() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->value << "->";
            temp = temp->next;
        }

        cout << "NULL";
    }
};

int main() {

    List myList;

    myList.pushFront(24);
    myList.pushFront(26);
    myList.pushFront(23);

    myList.Insert(30, 2);

    myList.printf();

    return 0;
}
