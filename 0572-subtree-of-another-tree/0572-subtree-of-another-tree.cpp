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
    bool isSame(TreeNode* root,TreeNode* subRoot){
        if(root==nullptr && subRoot==nullptr)return true;
        else if(root==nullptr || subRoot==nullptr || root->val!=subRoot->val)
            return false;
        if(!isSame(root->left,subRoot->left))return false;
        if(!isSame(root->right,subRoot->right))return false;
        return true;
    }
    bool subTree(TreeNode* root,TreeNode* subRoot){
        if(root==nullptr)return false;
        if(root->val==subRoot->val){
            if(isSame(root,subRoot))return true;
        }
        return subTree(root->left,subRoot)||subTree(root->right,subRoot);

    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return subTree(root,subRoot);
    }
};