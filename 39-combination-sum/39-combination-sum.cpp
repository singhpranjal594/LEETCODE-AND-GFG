class Solution {
public:
    void re(int i,int target,vector<int>& candidates,vector<vector<int>>&ans,vector<int> &ans1)
    {
        if(i==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(ans1);
            }
            // return;
            return;
        }
        if(candidates[i]<=target)
        {
            ans1.push_back(candidates[i]);
            re(i,target-candidates[i],candidates,ans,ans1);
            ans1.pop_back();
            
        }
        re(i+1,target,candidates,ans,ans1);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int> ans1;
        re(0,target,candidates,ans,ans1);
        return ans;
        
        
    }
};