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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        q.push(root);
        priority_queue<long long> sum;
        while(!q.empty()){
            int size=q.size();
            long long levelSum=0;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                levelSum+=node->val;

                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            sum.push(levelSum);
        }
        if(sum.size()<k)return -1;
        long long ans=-1;
        while(k--){
            ans=sum.top();
            sum.pop();
        }
        return ans;
    }
};