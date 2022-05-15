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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int p=0;
        while(!q.empty())
        {
            int sum=0;            
            
            int num=q.size();
            for(int i=0;i<num;i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                if((temp->left)!=NULL)
                    q.push(temp->left);
                
                if((temp->right)!=NULL)
                    q.push(temp->right);
                           
                sum+=temp->val;
                cout<<sum;
                
            }
            p=sum;
                
        }
        return p;
        
    }
};