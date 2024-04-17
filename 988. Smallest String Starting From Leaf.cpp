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
    void helper(TreeNode* node,string temp,string& ans){
        if(!node)return;

        temp+=char('a'+node->val);
        if(!node->left && !node->right){
            reverse(temp.begin(),temp.end());
            if(ans.empty() || temp<ans)ans=temp;
            reverse(temp.begin(),temp.end());
        }
        helper(node->left,temp,ans);
        helper(node->right,temp,ans);
        
        
    }
    string smallestFromLeaf(TreeNode* root) {
        string ans="",temp="";
        helper(root,temp,ans);
        return ans;
    }
};
