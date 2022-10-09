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
     void f(vector<int> & a, TreeNode* root)
    {
        if(root==NULL)
            return;
        
        f(a,root->left);
        a.push_back(root->val);
        f(a,root->right);
        
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> a;
        f(a,root);
        // sort(a.begin(),a.end());
        int i=0;
        int j=a.size()-1;
        while(i<j)
        {
            int sum=a[i]+a[j];
            if(sum==k)
                return true;
            else if(sum>k)
                j--;
            else
                i++;
                
        }
        return false;
        
    }
};