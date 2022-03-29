class Solution {
public:
    int c(vector<int>  nums,int p)
    {
        int count=0;
        for(auto i:nums)
        {
            if(i<=p)
                count++;
        }
        return count;
    }
    int findDuplicate(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        int ans;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(c(nums,mid)>mid)
            {
                ans=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
        
        
    }
};