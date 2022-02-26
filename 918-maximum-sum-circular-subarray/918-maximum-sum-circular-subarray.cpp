class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int mx=INT_MIN;
        int mn=INT_MAX;
        int sum=0;
        int ts=0;
        for(int i=0;i<nums.size();i++)
            ts+=nums[i];
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            mx=max(sum,mx);
            if(sum<0)
                sum=0;
        }
        sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            mn=min(sum,mn);
            if(sum>0)
                sum=0;
        }
        int ans=ts-mn;
        cout<<ans;
        if(ans==0)
            ans=INT_MIN;
        return max(ans,mx);
        
    }
};