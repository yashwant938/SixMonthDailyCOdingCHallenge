class Solution {
public:
    void findLeafDfs(TreeNode* root, vector<int>& nodeList) {
        if (!root) {
            return;
        }
        if (!root->left && !root->right) {
            nodeList.push_back(root->val);
            return;
        }
        findLeafDfs(root->left, nodeList);
        findLeafDfs(root->right, nodeList);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> nodeListRoot1, nodeListRoot2;
        findLeafDfs(root1, nodeListRoot1);
        findLeafDfs(root2, nodeListRoot2);
        return nodeListRoot1 == nodeListRoot2;
    }
};