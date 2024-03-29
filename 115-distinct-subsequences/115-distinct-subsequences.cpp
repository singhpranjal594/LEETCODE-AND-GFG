class Solution {
public:
    int mod=1000000007;
    int numDistinct(string S, string T) {
        int m=S.size();
      int n=T.size();
      int dp[m+1][n+1];
      for(int i=0;i<=n;i++)
      {
          dp[0][i]=0;
          
      }
      for(int i=0;i<=m;i++)
      {
          dp[i][0]=1;
      }
      for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(S[i-1]==T[j-1])
                {
                    dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%mod;
                }
                else
                {
                    dp[i][j]=(dp[i-1][j]);
                }
            }
        }
        return dp[m][n]%mod;
        
    }
};