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
    ListNode* mergeNodes(ListNode* head) {
        vector<int> arr;
        int x=0;
        ListNode* curr=head;
        while(curr){
            if(curr->val==0){
                if(x==0){
                    curr=curr->next;
                    continue;
                }
                arr.push_back(x);
                x=0;
                curr=curr->next;
            }
            else{
                x+=curr->val;
                curr=curr->next;
            }
        }
        if(arr.empty())return NULL;
        ListNode* ans=new ListNode(arr[0]);
        curr=ans;
        for(int i=1;i<arr.size();i++){
            ListNode* temp=
            curr->next=new ListNode(arr[i]);
            curr=curr->next;
        }
        return ans;
    }
};
