/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr)return nullptr;
        TreeNode* curr=root;
        
        while(curr!=nullptr){
            if(curr->val>p->val && curr->val>q->val){
                // cout<<curr->val<<" "<<p->val<<endl;
                // cout<<"ehllo"<<endl;
                curr=curr->left;
            }
            else if(curr->val<p->val && curr->val<q->val){
                // cout<<"fd"<<endl;
                curr=curr->right;
            }
            else return curr;
        }
        return curr;
    }
};