class Solution {
public:
    int maxProfit(int t, vector<int>& prices) {
        int n=prices.size();
        // vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,(vector<int>(3,0))));
        // dp
        vector<vector<int>> curr(2, vector<int>(t+1, 0)), next(2, vector<int>(t+1, 0));
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<2;j++)
            {
                for(int k=0;k<=t;k++)
                {
                    if(k==0)
                        curr[j][k]=0;
                    else if(j)
              curr[j][k]=max(-prices[i]+next[0][k],0+next[1][k]);
        else
             curr[j][k]=max(prices[i]+next[1][k-1],0+next[0][k]);
        
                }
            }
            next=curr;
        }
        return next[1][t];
        
    }
        
    
};