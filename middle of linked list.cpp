//brute force
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        unsigned count = 0;
        ListNode *temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        int mid = count/2;

        ListNode *result = head;
        while(mid--){
            result = result->next;

        }
        return result;

    }
};

//optimal solution using slow and fast pointer

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head;  
        ListNode *fast = head; 

        while(fast && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
