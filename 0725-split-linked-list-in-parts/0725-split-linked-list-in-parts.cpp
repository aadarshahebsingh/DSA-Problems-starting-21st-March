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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* itr = head;
        int n = 0;
        while(itr != NULL){
            n++;
            itr = itr->next;
        }
        int x = (n/k);
        int y = (n%k);
        vector<ListNode*> arr(k);
        int a = 0,i=0;
        if(y != 0){
            a = 1;
        }
        itr = head;
        for(i=0;i<k;i++){
            ListNode* it = itr;
            arr[i]=it;
            int b = (x+a)-1;
            while(b>0){
                it = it->next;
                b--;
            }
            y--;
            if(y==0){
                a=0;
            }
            if(it == NULL){
                break;
            }
            itr = it->next;
            it->next = NULL;
        }
        while(i<k){
            arr[i]=NULL;
            i++;
        }
        return arr;
    }
};