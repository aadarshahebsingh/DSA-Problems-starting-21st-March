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
    int getVal(string& str,const int& n,int& pos){
            int val=0;
            while(pos<n && (str[pos]>='0' && str[pos]<='9')){
                val=val*10+(str[pos]-'0');
                pos++;
            }
            return val;
        }
    int getDashLen(string& str,int& n,int& pos){
            int dashLen=0;
            while(pos<n && str[pos]=='-'){
                dashLen++;
                pos++;
            }
            return dashLen;
        }
    void build(TreeNode*curr,int expected,string& traversal,int& n,int& pos){
            if(pos==n)return;

            int prevPos=pos;
            int dashLen=getDashLen(traversal,n,pos);
            if(dashLen<expected){
                pos=prevPos;
                return;
            }
            int nodeVal=getVal(traversal,n,pos);
            TreeNode* newNode=new TreeNode(nodeVal);

            if(!curr->left)curr->left=newNode;
            else curr->right=newNode;


            build(newNode,1+expected,traversal,n,pos);
            build(newNode,1+expected,traversal,n,pos);
        }
    TreeNode* recoverFromPreorder(string traversal) {
        
        
        

        int n=traversal.size();
        int pos=0;
        TreeNode* root=new TreeNode(getVal(traversal,n,pos));

        build(root,1,traversal,n,pos);
        build(root,1,traversal,n,pos);
        return root;




    }
};