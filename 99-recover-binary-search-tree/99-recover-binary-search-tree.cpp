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
    vector<int> a;
public:
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return ;
        inorder(root->left);
        a.push_back(root->val);
        inorder(root->right);
    }
    void helper(TreeNode* root,int p,int q)
    {
        if(root==NULL)
            return;
        if(root->val==p)
            root->val=q;
        else
        if(root->val==q)
            root->val=p;
        helper(root->left,p,q);
        helper(root->right,p,q);
    }
    void recoverTree(TreeNode* root) {
        vector<int> shi;
        inorder(root);
        int p,q;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            shi.push_back(a[i]);
        }
        sort(shi.begin(),shi.end());
        for(int i=0;i<n;i++)
        {
            if(shi[i]!=a[i])
            {
                p=a[i];
                q=shi[i];
                break;
            }
                
        }
        helper(root,p,q);
        
        
        
        
    }
};