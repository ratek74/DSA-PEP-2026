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
    
   bool SearchKey(Node* head, int key){
    if(head == NULL) return false;
    if(head->data == key) return true;
    return SearchKey(head->next, key);
   }

};
int main(){
   
}