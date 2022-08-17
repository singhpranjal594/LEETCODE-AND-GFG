class Solution {
public:
    void f(vector<int> nums,vector<int> a,vector<vector<int>> &ans,int i)
    {
        if(i==nums.size())
        {
            ans.push_back(a);
            return;
        }
        f(nums,a,ans,i+1);
        a.push_back(nums[i]);
        f(nums,a,ans,i+1);
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> a;
        f(nums,a,ans,0);
        return ans;
        
    }
};