class Solution {
public:
    void dfs(TreeNode* root, vector<int>& arr) {
        if (root == nullptr) return;
        dfs(root->left, arr);
        arr.push_back(root->val);
        dfs(root->right, arr);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> vec1;
        vector<int> vec2;
        dfs(root1, vec1);
        dfs(root2, vec2);
        vector<int> result;
        int i = 0, j = 0;
        int len1 = vec1.size(), len2 = vec2.size();
        while (i < len1 && j < len2) {
            if (vec1[i] < vec2[j]) {
                result.push_back(vec1[i]);
                i++;
            } else {
                result.push_back(vec2[j]);
                j++;
            }
        }
        while (i < len1) {
            result.push_back(vec1[i]);
            i++;
        }
        while (j < len2) {
            result.push_back(vec2[j]);
            j++;
        }
        return result;
    }
};
