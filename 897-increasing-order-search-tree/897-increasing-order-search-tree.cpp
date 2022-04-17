class Solution {
public:
    
    TreeNode* inorder(TreeNode *cur, TreeNode *ans) {
        if (cur == nullptr) return ans;
        TreeNode *now = inorder(cur->left, ans);
        now->right = new TreeNode(cur->val);
        return inorder(cur->right, now->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode *cur = new TreeNode();
        inorder(root, cur);
        return cur->right;
    }
};