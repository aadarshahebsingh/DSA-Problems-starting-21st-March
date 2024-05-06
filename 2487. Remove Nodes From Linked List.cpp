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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        ListNode* curr=head;

        while(curr){
            st.push(curr);
            curr=curr->next;
        }

        curr=st.top();
        st.pop();
        int maxi=curr->val;
        ListNode* ans=new ListNode(maxi);

        while(!st.empty()){
            curr=st.top();
            st.pop();

            if(curr->val<maxi)continue;
            else{
                ListNode* newNode=new ListNode(curr->val);
                newNode->next=ans;
                ans=newNode;
                maxi=curr->val;
            }
        }
        return ans;
    }
};
