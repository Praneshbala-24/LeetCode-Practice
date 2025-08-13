
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return nullptr; // base case

        // swap children
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        // invert subtrees
        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};
