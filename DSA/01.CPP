#include <iostream>
using namespace std;

string reverseString(string &s){
    int l = 0; int r = s.length()- 1;
    while(l < r){
        swap(s[l++] , s[r--]);
    }
    return s;
}
int countGoodSubstrings(string s) {
    int n = s.size();
    int count = 0;

    for(int i = 0; i + 2 < n; i++){
        char a = s[i];
        char b = s[i+1];
        char c = s[i+2];

        if(a != b && b != c && a != c)
            count++;
    }

    return count;
}
int main{
  
};

// new variant
class Solution {
public:
    static int countPrimeSetBits(int left, int right) {
        int prime[]={2, 3, 5, 7, 11, 13, 17, 19};
        bitset<21> isPrime=0;
        for(int p: prime) isPrime[p]=1;
        int sum=0;
        for(unsigned i=left; i<=right; i++){
            int b=popcount(i);
            if (isPrime[b]) sum++;
        }
        return sum;
    }
};
ListNode* reverseRange(ListNode* head, int l, int r) {
    if(l >= r) return head;

    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;

    for(int i=1;i<l;i++)
        prev = prev->next;

    ListNode* curr = prev->next;

    for(int i=0;i<r-l;i++) {
        ListNode* nxt = curr->next;
        curr->next = nxt->next;
        nxt->next = prev->next;
        prev->next = nxt;
    }
    return dummy.next;
}

ListNode* swapAndReverse(ListNode* head, int k) {
    if(!head || !head->next) return head;

    // length
    int n=0;
    ListNode* t=head;
    while(t){ n++; t=t->next; }

    int left = k;
    int right = n-k+1;

    // ensure left < right
    if(left > right) swap(left,right);

    // find nodes
    ListNode *L=head,*R=head;
    for(int i=1;i<left;i++) L=L->next;
    for(int i=1;i<right;i++) R=R->next;

    // swap values
    swap(L->val,R->val);

    // reverse only if there exists a segment
    if(right-left > 1)
        head = reverseRange(head,left+1,right-1);

    return head;
}