class Solution {
public:int dp[59];
    int integerBreak(int n) {
        for(int i=0;i<59;i++)
            dp[i]=-1;
        return solve(n);
        
    }
    int solve(int p)
    {
        if(p==2||p==1)
            return 1;
        if(dp[p]!=-1)
        {
            return dp[p];
            
        }
        int maxi=1;
        for(int i=1;i<p;i++)
        {
            maxi=max(maxi,i*max(p-i,solve(p-i)));
        }
        
        return dp[p]=maxi;
    }
};