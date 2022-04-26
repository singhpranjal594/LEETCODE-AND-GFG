class Solution {
public:
    int memo[20002][202];
    bool solve(int cursum,int sum, vector<int>& nums,int n)
    {
        if(n<0||2*cursum>sum)
            return false;
        if(2*cursum==sum)
            return true;
        
        if(memo[cursum][n]!=-1)
            return memo[cursum][n]==1;
        if(solve(cursum+nums[n],sum,nums,n-1)||solve(cursum,sum,nums,n-1))
        {
            memo[cursum][n]=1;
            return true;
        }
        
         memo[cursum][n]=0;
        return false;

        
    }
    bool canPartition(vector<int>& nums) {
        memset(memo,-1,sizeof(memo));
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        return solve(0,sum,nums,n-1);  
    }
    
};