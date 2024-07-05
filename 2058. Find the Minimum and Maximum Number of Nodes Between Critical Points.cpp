/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int len = 1; // Start from 1 to account for 0-based index
        ListNode* curr = head->next;
        ListNode* prev = head;
        ListNode* next = head->next ? head->next->next : nullptr;
        
        int firstCritical = -1;
        int prevCritical = -1;

        while (next != nullptr) {
            if ((curr->val > prev->val && curr->val > next->val) ||
                (curr->val < prev->val && curr->val < next->val)) {
                if (firstCritical == -1) {
                    firstCritical = len;
                } else {
                    mini = min(mini, len - prevCritical);
                }
                prevCritical = len;
                maxi = len - firstCritical;
            }

            prev = curr;
            curr = next;
            next = next->next;
            len++;
        }

        if (firstCritical == -1 || prevCritical == firstCritical) return {-1, -1};
        return {mini, maxi};
    }
};
