class Solution {
public:
    int f(vector<int>& prices,int i,int buy, int l,vector<vector<vector<int>>> &dp)
    {
        int n=prices.size();
        if(l==0||i==n)
            return 0;
        if(dp[i][buy][l]!=-1)
            return dp[i][buy][l];
        if(buy)
        {
            return dp[i][buy][l]=max(-prices[i]+f(prices,i+1,0,l,dp),0+f(prices,i+1,1,l,dp));
        }
        else
        {
            return dp[i][buy][l]=max(prices[i]+f(prices,i+1,1,l-1,dp),0+f(prices,i+1,0,l,dp));
        }
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,(vector<int>(3,-1))));
        return f(prices,0,1,2,dp);
        
    }
};