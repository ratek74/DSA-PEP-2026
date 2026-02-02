#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next =NULL;

    }
};  

void insertAtEnd(Node* &head, int val){
     Node* node = new Node(val);
     if(head == NULL){
        head =node;
        return;
     }

     Node* temp = head;
     while(temp ->next != NULL){
       temp = temp->next;
     }
     temp->next = node;
}
int main(){
//    Node* n1 = new Node(1);
   Node* head = NULL;
//    Node* n2  = new Node(2);
//    n1->next = n2;
//    cout << n1->data << endl;
insertAtEnd(head,1);
}