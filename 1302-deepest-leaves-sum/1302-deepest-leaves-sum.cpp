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
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return max(height(root->left),height(root->right))+1;
    }
    // int sum=0;
    int  sum1(int h,TreeNode* root)
    {
        if(root==NULL)
            return 0;
        if(h==0)
            return 0;
        if(h==1)
            return root->val;
        return sum1(h-1,root->left) + sum1(h-1,root->right);
    }
    int deepestLeavesSum(TreeNode* root) {
        return sum1(height(root),root);
        
    }
};