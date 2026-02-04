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

// 🔹 Print linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;   
    }
    cout << endl;
}

// 🔹 Insert at beginning
void insertAtBeg(Node*& head, int val) {
    Node* node = new Node(val);
    node->next = head;
    head = node;
}

// 🔹 Insert at end
void insertAtEnd(Node*& head, int val) {
    Node* node = new Node(val);

    if (head == NULL) {
        head = node;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
}
// insert at nth position
void insertAtPosition(Node* &head, int pos, int val){
    Node* node = new Node(val);
    if(pos == 1){
        node-> next = head;
        head = node;
        return;
    }
    
    Node* temp = head;
    for(int i = 1; i < pos - 1 && temp != NULL; i++){
        temp = temp->next;
    }
    if(temp == NULL){
        return;
    }
    node-> next = temp->next;
    temp->next = node;
}
 // delete at the nth position
 void deleteAtPosition(Node* &head, int pos){
    if(head == NULL) return;
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    for(int i = 1; i < pos - 1; temp != NULL, i++){
      temp = temp->next;
    }
    Node* toDel = temp->next;
    temp->next = temp->next->next;
    delete toDel;
}

int main() {
    Node* head = NULL;

    insertAtEnd(head, 1);
    insertAtBeg(head, 2);

    print(head);
    insertAtPosition(head, 2,30);
    print(head);

    return 0;
}
