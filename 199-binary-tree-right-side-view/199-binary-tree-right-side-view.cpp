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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        ans(root,0,v);
        return v;
        
        
    }
    void ans(TreeNode* root,int l,vector<int> &v)
    {
        if(!root)
            return;
        if(l>=v.size())
        v.push_back(root->val);
        
        ans(root->right,l+1,v);
        ans(root->left,l+1,v);
    }

};