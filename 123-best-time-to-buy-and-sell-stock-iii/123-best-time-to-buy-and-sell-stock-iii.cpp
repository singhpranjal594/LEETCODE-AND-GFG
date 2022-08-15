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
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,(vector<int>(3,0))));
        // dp
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<2;j++)
            {
                for(int k=0;k<3;k++)
                {
                    if(k==0)
                        dp[i][j][k]=0;
                    else if(j)
              dp[i][j][k]=max(-prices[i]+dp[i+1][0][k],0+dp[i+1][1][k]);
        else
             dp[i][j][k]=max(prices[i]+dp[i+1][1][k-1],0+dp[i+1][0][k]);
        
                }
            }
        }
        return dp[0][1][2];
        
    }
    
};