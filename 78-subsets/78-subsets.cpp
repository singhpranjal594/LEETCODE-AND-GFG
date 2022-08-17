class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans{{}};
        for(auto it:nums)
        {
            int si=ans.size();
            for(int i=0;i<si;i++)
            {
                vector<int> f(ans[i]);
                f.push_back(it);
                ans.push_back(f);
                
            }
        }
        return ans;
        
    }
};