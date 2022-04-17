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
    TreeNode* cur=new TreeNode(0);
    TreeNode* par=cur;
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return par->right;
    }
    void inorder(TreeNode* root)
    {
        if(root == NULL)
            return;
        
        inorder(root->left);
        TreeNode* p1=new TreeNode(root->val);
        cur->right=p1;
        cur=cur->right;
        inorder(root->right);
    }
};