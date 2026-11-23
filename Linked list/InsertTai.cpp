
#include <iostream>
using namespace std;

class Node {
public:
    Node* next;
    int value;

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

    void push_front(int value) {
        Node* NewNode = new Node(value);

        if (head == NULL) {
            head = tail = NewNode;
            return;
        }

        NewNode->next = head;
        head = NewNode;
    }

    void push_back(int value){
        Node* newNode = new Node(value);
        if(head == NULL ){
            head = tail = newNode;

        }else{
            tail->next = newNode;
            tail = newNode;
        }

    }

    void printf() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->value << "->";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main() {
    List myList;

    myList.push_front(2);
    myList.push_front(4);
    myList.push_front(6);
    myList.push_front(45);
    myList.push_back(23);
    

    myList.printf();

    return 0;
}
