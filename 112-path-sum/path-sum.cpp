class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false; // empty tree
        
        // Leaf node check
        if (!root->left && !root->right) {
            return targetSum == root->val;
        }
        
        // Recurse left or right
        return hasPathSum(root->left, targetSum - root->val) ||
               hasPathSum(root->right, targetSum - root->val);
    }
};
