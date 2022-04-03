class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>> s;vector<vector<int>> v;
        for(int i=0;i<n;i++)
        {
            if(i==0||(i>0&&nums[i]!=nums[i-1]))
            {
            int j=i+1;
            int last=n-1;
      
            while(j<last)
            {
                int sum=nums[i]+nums[j]+nums[last];
                if(sum==0)
                {
                    v.push_back({nums[i],nums[j],nums[last]});
                                 while(j<last&&nums[j]==nums[j+1])j++;
                                 while(j<last&&nums[last]==nums[last-1])last--;
                    
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
            
        }
        // (s.begin(),s.end());
        return v;
        
    }
};