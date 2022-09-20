class Solution {
public:
    int dp[1001][1001][2];
    int f(int i,int j,vector<int>& nums1,vector<int>& nums2,int flag)
    {
        if(i>=nums1.size()||j>=nums2.size())
        {
            return 0;
        }
        else if(flag==1&&nums1[i]!=nums2[j])
            return 0;
        
        if(dp[i][j][flag]!=-1)
            return dp[i][j][flag];
        int ans1=0;
        int ans2=0;
        int ans3=0;
        if(nums1[i]==nums2[j])
            ans1=1+f(i+1,j+1,nums1,nums2,1);
        
        if(flag!=1)
        {ans2=f(i+1,j,nums1,nums2,flag);
        ans3=f(i,j+1,nums1,nums2,flag);
        }
        
        return dp[i][j][flag]=max({ans1,ans2,ans3});
            
        
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        for(int i=0;i<1001;i++)
        {
            for(int j=0;j<1001;j++)
            {
                for(int k=0;k<2;k++)
                {
                    dp[i][j][k]=-1;
                }
            }
        }
        
        return f(0,0,nums1,nums2,0);
        
    }
};