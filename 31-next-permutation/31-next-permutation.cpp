class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int pos1;
        int pos2;
        for(pos1=n-2;pos1>=0;pos1--)
        {
            if(nums[pos1]<nums[pos1+1])
                break;
        }
        if(pos1<0)
            reverse(nums.begin(),nums.end());
        else
        {
            for(pos2=n-1;pos2>pos1;pos2--)
            {
                if(nums[pos1]<nums[pos2])
                    break;
            }
            swap(nums[pos1],nums[pos2]);
            reverse(nums.begin()+pos1+1,nums.end());
        }
        
    }
};