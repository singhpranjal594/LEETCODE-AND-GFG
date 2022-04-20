class BSTIterator {
private: stack<TreeNode*> s;
public:
    BSTIterator(TreeNode* root) {
        help(root);
        
    }
    
    int next() {
        auto it=s.top();
        s.pop();
        help(it->right);
        return it->val;
        
        
        
    }
    
    bool hasNext() {
        return !s.empty();
        
    }
    private: void help(TreeNode* p)
    {
        while(p!=NULL)
        {s.push(p);
         p=p->left;
        }
        
    }
};