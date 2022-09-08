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
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*> st;
        while(1)
        {
            if(root)
            {
                st.push(root);
                root=root->left;
            }
            else
            {
                if(st.empty())
                    break;
                // TreeNode* temp=;
                v.push_back(st.top()->val);
                root=st.top()->right;
                st.pop();
                
            }
        }
        return v;
    }
};