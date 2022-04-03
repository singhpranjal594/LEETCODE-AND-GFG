class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>> s;
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            int last=n-1;
            while(j<last)
            {
                int sum=nums[i]+nums[j]+nums[last];
                if(sum==0)
                {
                    s.insert({nums[i],nums[j],nums[last]});
                    j++;
                    last--;
                }
                else if(sum>0)
                {
                    last--;
                }
                else
                    j++;
                
            }
            
        }
        vector<vector<int>> v(s.begin(),s.end());
        return v;
        
    }
};