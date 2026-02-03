#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};
void print(Node* head) {
    Node* temp = head;
    do{
       cout << temp-> data << " ";
       temp = temp->next;
    }
    while (temp != head);
}
    
void insertAtEnd(Node* &head, int val){
    Node* node = new Node(val);
    if(head == NULL){
        head = node;
      node->next = head;
      return;
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
   temp->next = node;
   node->next = head;
}

void insertAtBeg(Node* &head, int val){
    Node* node = new Node(val);
    if(head == NULL){
        head = node;
      node->next = head;
      return;
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = node;
    node->next = head;
     head = node;

}
void deleteAtEnd(Node* head){
    if(head ==NULL){
        return;
    }
    if(head->next = NULL){
        delete head;
        head = NULL;
        return;
    }
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
}
void deleteAtBeg(Node* head ){
    if(head == NULL) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

int main(){
Node* head = NULL;
insertAtBeg(head, 1);
insertAtEnd(head, 2);
insertAtEnd(head, 3);

print(head);
}