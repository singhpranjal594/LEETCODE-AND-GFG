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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> nodes;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
         vector<vector<int>>ans;
        while(!q.empty())
        {
            auto t=q.front();
             q.pop();
            
            TreeNode* temp=t.first;
            int x=t.second.first;
            int y=t.second.second;
           
                
            nodes[x][y].insert(temp->val);
            if(temp->left)
            {
                q.push({temp->left,{x-1,y+1}});
            }
            if(temp->right)
            {
                q.push({temp->right,{x+1,y+1}});
            }
           
            
        }
               
        for(auto p:nodes)
        {
            vector<int> c;
            for(auto s: p.second)
            {
                c.insert(c.end(),s.second.begin(),s.second.end());
            }
            ans.push_back(c);
        }
        return ans;
        
        
        
        
    }
};