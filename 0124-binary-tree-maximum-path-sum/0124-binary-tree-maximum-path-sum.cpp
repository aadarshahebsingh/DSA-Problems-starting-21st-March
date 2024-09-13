/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=INT_MIN;
    int postOrder(TreeNode* root){
        if(root==nullptr)return 0;

        int lefty=max(0,postOrder(root->left));
        int righty=max(0,postOrder(root->right));
        ans=max(ans,root->val+lefty+righty);
        return root->val+(max(righty,lefty));
    }
    int maxPathSum(TreeNode* root) {
        postOrder(root);
        return ans;
    }
};