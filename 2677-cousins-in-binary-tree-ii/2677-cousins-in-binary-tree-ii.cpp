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
    void BFS(TreeNode* root){
        queue<TreeNode*> q;
        int n,nextlevel_sum,replace_sum=root->val; struct TreeNode* node;
        q.push(root);
        while(!q.empty()){
            n = q.size();
            nextlevel_sum = 0;
            for(int i=0;i<n;i++){
                node = q.front();
                q.pop();
                node->val = replace_sum - node->val;
                if(node->left){
                    q.push(node->left);
                    nextlevel_sum += node->left->val;
                }
                if(node->right){
                    q.push(node->right);
                    nextlevel_sum += node->right->val;
                }
                if(node->left && node->right){
                    node->left->val = node->left->val + node->right->val;
                    node->right->val = node->left->val;
                }
            }
            replace_sum = nextlevel_sum;
        }
    }
    TreeNode* replaceValueInTree(TreeNode* root) {
        BFS(root);
        return root;
    }
};