/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        
        if(root==NULL)
            return ans;
        
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int c=q.size();
            ans.push_back({});
            for(int i=0;i<c;i++)
            {
                Node * temp=q.front();
                ans.back().push_back(temp->val);
                q.pop();
                for(auto t:temp->children)
                {
                    q.push(t);
                }
            }
            
        }
        return ans;
        
    }
};