#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node(int value){
        this->value = value;
        this->next = NULL;

    }
};
class list{
  Node* head;
  Node* tail;
    public:

    list(){
        tail = head =NULL;
    }



    void forntPush(int value){
        Node* newNode = new Node(value);
      
        if (head ==NULL){
            tail = head = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
        
    }

   void PopFront(){
    Node* temp = head;
    if (temp == NULL){
        return;

    }else{
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
   }

   void  Pop_back(){
    Node* temp = head;
    if (head == NULL){
        return;
    }
    while (temp->next->next !=NULL)
    {
        temp = temp->next;
    }
    temp->next  = NULL;

    delete tail;
    temp = tail;

    
    
   }

    void printF(){
          Node* temp;
        temp = head;
        while (temp !=NULL)
        {
            cout<<temp->value<<"->";
            temp = temp->next;
        }
        cout<<"NULL";
        
    }

};

int main() {
    list list;
    list.forntPush(45);
    list.forntPush(66);
    list.forntPush(123);

    list.PopFront();
    list.Pop_back();

    list.printF();



    
    return 0;
}