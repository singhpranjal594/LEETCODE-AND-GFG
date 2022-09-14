class Solution {
public:
    int helper(TreeNode* root, vector<int> count){
        if(root==NULL)
            return 0;
        
        if(count[root->val]==0)
            count[root->val]+=1;
        else if(count[root->val]==1)
            count[root->val]-=1;
        
        int l=helper(root->left, count);
        int r=helper(root->right, count);
        
        if(root->left==NULL and root->right==NULL){
            int sum=0;
            for(int i=0;i<10;i++){
                sum+=count[i];
            }
            if(sum==0 or sum==1)
                return 1;
            else return 0;
        }
        
        return l+r;
            
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> count(10, 0);
        
        int res=helper(root, count);
        
        return res;
        
    }
};