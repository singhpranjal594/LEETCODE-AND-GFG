class Solution {
public:
    int f(int i,int j,int ind,int n,int m , vector<vector<int>> &dp,vector<int>&nums,vector<int>&multipliers)
    {
        if(ind==m)
            return 0;
        if(dp[ind][i]!=INT_MIN)
            return dp[ind][i];
        
        int first=multipliers[ind]*nums[i]+f(i+1,j,ind+1,n,m,dp,nums,multipliers);
        int last=multipliers[ind]*nums[j]+f(i,j-1,ind+1,n,m,dp,nums,multipliers);
        return dp[ind][i]=max(first,last);
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n=nums.size();
        int m=multipliers.size();
        vector<vector<int>> dp(m+1,vector<int>(m+1,INT_MIN));
        return f(0,n-1,0,n,m,dp,nums,multipliers);
        
    }
};