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
    ListNode* doubleIt(ListNode* head) {
        int carry=twice(head);
        if(carry>0)head=new ListNode(carry,head);
        return head;
    }
private:
    int twice(ListNode* head){
        if(head==NULL)return 0;
        int d=head->val*2+twice(head->next);
        head->val=d%10;
        return d/10;
    }
};
