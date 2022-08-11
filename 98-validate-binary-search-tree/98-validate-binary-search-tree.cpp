class Solution {
public:
    
    
    bool helper(TreeNode* root, TreeNode* minV, TreeNode* maxV){
        if(root==NULL) return true;  // Empty trees are valid BSTs.
        
        if(minV){
            if(minV->val >= root->val) return false;
        } 
        if(maxV){
            if(maxV->val <= root->val) return false;
        } 
            
        return helper(root->left, minV, root) && helper(root->right, root, maxV);
    }
    
    
    bool isValidBST(TreeNode* root) {
        return helper(root, NULL, NULL);
        
    }
};