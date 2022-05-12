class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int c=0;
      
        sort(nums.begin(),nums.end());  ans.push_back(nums);
        while(next_permutation(nums.begin(),nums.end()))
        {
            c++;
            ans.push_back(nums);
        }
        cout<<c;
        return ans;
        
    }
};