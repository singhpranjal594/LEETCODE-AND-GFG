class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        vector<int> dp(n,0);
        cout<<dp[n-1];
        if(s[0]=='0')
            return 0;
        dp[0]=1;
        for(int i=1;i<n;i++)
        {
            if(s[i]=='0'&&s[i-1]=='0')
            {
                dp[i]=0;
                
            }else if(s[i-1]!='0'&&s[i]=='0')
            {
                if(s[i-1]=='1'||s[i-1]=='2')
                dp[i]=(i>=2)?dp[i-2]:1;
                else
                    dp[i]=0;
                
            }
            else if(s[i-1]=='0'&&s[i]!='0')
            {
                dp[i]=dp[i-1];
                if(i<2)
                {
                    dp[i]= 0;
                }
                
            }
            else{
                if(stoi(s.substr(i-1,2))<=26)
                {
                    if(i>=2)
                    {
                        dp[i]=dp[i-1]+dp[i-2];
                    }
                    else
                    {
                        dp[i]=dp[i-1]+1;
                    }
                }
                // dp[i]=dp[i-1]+(i>=2)?dp[i-2]:1;
                else
                    dp[i]=dp[i-1];
                
            }
        }
        return dp[n-1];
        
    }
};