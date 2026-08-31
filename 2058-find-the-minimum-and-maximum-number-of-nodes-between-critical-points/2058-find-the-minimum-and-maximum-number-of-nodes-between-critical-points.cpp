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
        int temp=head->val;
        ListNode* curr=head->next;
        int i=1;
        vector<int> arr;
        while(curr->next){
            int currVal=curr->val;
            if((temp>currVal && curr->next->val>currVal) || (temp<currVal && curr->next->val <currVal)){
                cout<<i<<endl;
                arr.push_back(i);
            }
            temp=curr->val;
            curr=curr->next;
            i++;
        }
        if(arr.size()<2)return {-1,-1};
        int n=arr.size();
        int mini=INT_MAX;
        for(int i=1;i<n;i++){
            mini=min(mini,arr[i]-arr[i-1]);
        }
        int maxi=arr[n-1]-arr[0];
        return {mini,maxi};
    }
};