
void inorderTraversal(Node* root, vector<int>& nodes) {
    if (root == nullptr)
        return;
    inorderTraversal(root->left, nodes);
    nodes.push_back(root->data);
    inorderTraversal(root->right, nodes);
}

bool checkBST(Node* root) {
    vector<int> nodes;
    inorderTraversal(root, nodes);
    // Check if the elements in nodes vector are sorted
    for (size_t i = 1; i < nodes.size(); ++i) {
        if (nodes[i] <= nodes[i - 1])
            return false;
    }
    return true;
}
