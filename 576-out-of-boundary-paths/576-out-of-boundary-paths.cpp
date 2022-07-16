class Solution {
public:
    int dp[55][55][55];
    long long  mod=1e9+7;
    int f(int i,int j,int moves,int n,int m)
    {
        if(i<0||j<0||i>=n||j>=m)
            return 1;
        if(moves<=0)
            return 0;
        if(dp[i][j][moves]!=-1)
            return dp[i][j][moves];
        int up=f(i-1,j,moves-1,n,m);
        int down=f(i+1,j,moves-1,n,m);
        int left=f(i,j-1,moves-1,n,m);
        int right=f(i,j+1,moves-1,n,m);
        return dp[i][j][moves] = (up % mod + down % mod + left % mod + right % mod) % mod;
        
    }
    int findPaths(int n, int m, int maxMove, int startRow, int startColumn) {
        memset(dp, -1, sizeof(dp));
        
        return f(startRow, startColumn, maxMove, n, m);
        
    }
};
