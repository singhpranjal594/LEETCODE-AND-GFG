class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n=values.size();
        int dp[n];
        int res=INT_MIN;
        int p=res;
        for(int i=0;i<n;i++)
        {
            res=max(res,values[i]-i+p);
            p=max(p,values[i]+i);
        }
        return res;
    }
};