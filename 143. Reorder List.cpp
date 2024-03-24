class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head or !head->next) {
            return; 
        }

        ListNode* slow = head;
        ListNode* fast = head;
        while (fast and fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = nullptr;
        ListNode* curr = slow;
        ListNode* next = nullptr;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        ListNode* firstHalf = head;
        ListNode* secondHalf = prev;
        while (secondHalf->next) {
            ListNode* temp=firstHalf->next;
            ListNode* temp2=secondHalf->next;
            firstHalf->next=secondHalf;
            secondHalf->next=temp;
            firstHalf=temp;
            secondHalf=temp2;

        }
    }
};
