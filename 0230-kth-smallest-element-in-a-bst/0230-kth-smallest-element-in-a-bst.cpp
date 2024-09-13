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
public: // Using Morris Traversal

    void morrisTraversal(TreeNode* root, int k, int &ans)
    {
        TreeNode* curr=root;
        int cnt=0;

        while(curr!=NULL)
        {
            if(curr->left==NULL)
            {
                cnt++;
                if(cnt==k)
                {
                    ans=curr->val;
                }
                curr=curr->right;
            }
            else
            {
                TreeNode* pred=curr->left;

                while(pred->right!=NULL && pred->right!=curr)
                {
                    pred=pred->right;
                }

                if(pred->right==NULL)
                {   
                    pred->right=curr;
                    curr=curr->left;
                }
                else
                {
                    pred->right=NULL;

                    cnt++;
                    if(cnt==k)
                    {
                        ans=curr->val;
                    }
                    curr=curr->right;
                }
            }
        }
    }

    int kthSmallest(TreeNode* root, int k) {
        
        int ans=0;
        morrisTraversal(root, k, ans);
        return ans;
    }
};