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
void helper(TreeNode* root, int maxi, int &count)
{
if(!root) return;
if(root->val >= maxi){
count++;
maxi=root->val;
}
helper(root->left,maxi,count);
helper(root->right,maxi,count);
}

int goodNodes(TreeNode* root) {
if(!root) return 0;
int count=0;
helper(root,INT_MIN,count);
return count;
}
};
