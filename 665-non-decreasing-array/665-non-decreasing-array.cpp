class Solution {
public:
    bool help(vector<int> nums)
    {
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]<nums[i-1])
                return  false;
        }
        return  true;
    }
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]<nums[i-1])
            {
                int curr=nums[i];
                int left=nums[i-1];
                nums[i]=left;
            if(help(nums))return true;
            else
            {
                nums[i]=curr;
                nums[i-1]=curr;
                return help(nums);
            }
        }
        }
        return true;
        
    }
    
};