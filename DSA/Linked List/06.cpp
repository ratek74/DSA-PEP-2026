class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        //step 1 -> count the k nodes, 
            //check if there are atleast k noed remaining
            //if no then do not reverse juist return the current head
            // count
            // while(count < k) -> one pointer that will move till j

        // step 2 -> reverese exactly k nodes
            //use that previously done iterative method for k nodes only

        // recursilvely process the remaining LL
            //connect the reversed group's last node pointer to the next group


            ListNode* curr = head;
            int count = 0;

            while(curr != NULL && count < k){
                curr = curr ->next;
                count++;
            }

            if(count == k){
                //reverse first k node
                ListNode* prevNode = NULL;
                ListNode* currNode = head;
                ListNode* nextNode = NULL;
                int count2 = 0;

                while(count2< k){
                    nextNode = currNode->next;
                    currNode->next = prevNode;
                    prevNode = currNode;
                    currNode = nextNode;
                    count2++;
                }

                head->next = reverseKGroup(curr, k);
                return prevNode;

            }
            return head;
        
    }
};