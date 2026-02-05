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

   class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        //Dummy nodes
        ListNode* left = new ListNode(-1);
        ListNode* right = new ListNode(-1);

        ListNode* lp = left;
        ListNode* rp = right;

        ListNode* p1 = head;


        while(p1 != NULL){
            if(p1->val < x){
                left->next = p1;
                left = left->next;
            }else{
                right->next = p1;
                right = right->next;
            }
            p1 = p1->next;

        }
        right->next = NULL;

        left->next = rp->next;

        return lp->next;
    }
};

};
int main(){
   
}