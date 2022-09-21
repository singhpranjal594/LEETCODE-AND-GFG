class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        map<int,int> m;
        int n=nums.size();
        vector<int> ans;
        int s=0;
        for(int i:nums)
        {
            if(i%2==0)
                s+=i;
        }
        for(auto i:queries)
        {
            if(nums[i[1]]%2==0)
            {
                s-=nums[i[1]];
            }
            nums[i[1]]+=i[0];
            if(nums[i[1]]%2==0)
            {
                s+=nums[i[1]];
            }
            ans.push_back(s);
        }
        
        return ans;
        
    }
};