/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    // root-to-node path traversal
bool getPath(TreeNode *root, int x, vector<TreeNode*> &arr)
{
    if (root == NULL)
        return false;
    arr.push_back(root);
    if (root->val == x)
        return true;
    if (getPath(root->left, x, arr) or getPath(root->right, x, arr))
        return true;
    arr.pop_back();
    return false;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
            return root;
        vector<TreeNode*> p1,q1;
        getPath(root,p->val,p1);
        getPath(root,q->val,q1);
        int i = 0;
        while(i<p1.size() and i<q1.size())
        {
            if(p1[i]->val!=q1[i]->val)
                break;
            i++;
        }
        return p1[i-1];
    }
};