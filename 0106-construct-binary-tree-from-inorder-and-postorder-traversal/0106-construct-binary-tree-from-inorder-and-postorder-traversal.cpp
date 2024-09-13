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
    unordered_map<int,int> map;
    TreeNode* helper(vector<int>& inorder,vector<int>& postorder,int inStart,int inEnd,int& postIndex){
        if(inStart>inEnd)return nullptr;

        int rootVal=postorder[postIndex--];
        TreeNode* root=new TreeNode(rootVal);

        int inRoot=map[rootVal];
        root->right=helper(inorder,postorder,inRoot+1,inEnd,postIndex);
        root->left=helper(inorder,postorder,inStart,inRoot-1,postIndex);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        for(int i=0;i<n;i++)
            map[inorder[i]]=i;
        int postIndex=n-1;
        return helper(inorder,postorder,0,n-1,postIndex);
    }
};