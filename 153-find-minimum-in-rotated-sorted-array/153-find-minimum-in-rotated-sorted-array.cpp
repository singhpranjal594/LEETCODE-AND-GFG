class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int l=0;
        int r=nums.size()-1;
        if(nums.size()==1)
            return nums[0];
        
        if(nums[r]>nums[0])
            return nums[0];
        if(nums.size()==2)
        {
            if(nums[0]==2&&nums[1]==1)
                return 1;
        }
        
        while(r>=l)
        {
            int mid=l+(r-l)/2;if(nums[mid]>nums[mid+1])
                return nums[mid+1];
            if(nums[mid]<nums[mid-1])
                return nums[mid];
            
            if(nums[0]>nums[mid])
                r=mid-1;
            else
                l=mid+1;
        }
        return 0;
        
    }
};