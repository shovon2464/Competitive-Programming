class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        
        // loop until ListNode equal NULL
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            // have cycle
            if(slow == fast) return true;
        }
        
        return false;
    }
};