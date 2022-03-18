class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount+1);
        dp[0]=1;
        for(int i:coins)
        {
            for(int j=i;j<amount+1;j++)
            {
                dp[j]+=dp[j-i];
            }
        }
        return dp[amount];
        
    }
};