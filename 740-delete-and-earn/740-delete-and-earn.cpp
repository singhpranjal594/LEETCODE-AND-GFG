class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> c(20001);
        vector<int> dp(20001);
        int m=*max_element(nums.begin(),nums.end());
        for(auto i: nums)
        {
            c[i]++;
        }
        // dp[0]=0;
        dp[1]=c[1];
        dp[2]=max(c[1],2*c[2]);
        for(int i=3;i<=m;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+i*c[i]);
        }
        return dp[m];
        
    }
};