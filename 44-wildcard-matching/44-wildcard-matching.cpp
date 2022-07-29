class Solution {
public:
   bool find(string &s,string &t, int i,int j,vector<vector<int>> &dp){
	// if both strings have exhausted
    if(i<0 && j<0) return true;
	// if pattern string is exhauseted and text string is not over ,we cannot match
    if(j<0 && i>=0) return false;
	// if text string is exhauseted and pattern string is not over ,it canot be anything else than '*' to match.
    if(i<0 && j>=0){
        for(int ind=0;ind<=j;ind++){
            if(t[ind]!='*')
                return false;
        }
        return true;
    }
    
    if(dp[i][j]!= -1)
        return dp[i][j];
    
    // if characters match or we got '?' just move to prev index of strings.
    if(s[i]==t[j] || t[j]=='?')
        return dp[i][j]=find(s,t,i-1,j-1,dp);
	// we can either match a char to a '*' or just match it with nothing.
    if(t[j]=='*')
        return dp[i][j]=find(s,t,i-1,j,dp) || find(s,t,i,j-1,dp);
    // case where s[i]!=t[j]
    return dp[i][j]=false;
    
        
    
    
}

bool isMatch(string s, string p) {
    int n=s.length();
    int m=p.length();
    
    vector<vector<int>> dp(n,vector<int>(m,-1));
    
    return find(s,p,n-1,m-1,dp);
}
};