class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx=INT_MIN;
        int n=nums.size();
        int mul=nums[0];
        if(n==1)
            return nums[0];
        if(mul==0)
            mul=1;
        mx=max(mx,nums[0]);
        for(int i=1;i<n;i++)
        {
            
            if(mul==0)
                mul=1;
           mul= nums[i]*mul;
            
            mx=max(mul,mx);
            cout<<mx;
        }
        mul=nums[n-1];
        mx=max(nums[n-1],mx);
        for(int i=n-2;i>=0;i--)
        {
            if(mul==0)
                mul=1;
            
            mul=nums[i]*mul;
            
            mx=max(mul,mx);
        }
        return mx;
        
    }
};