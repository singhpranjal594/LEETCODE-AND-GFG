class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        while(nums[i]!=nums[nums[i]])
            swap(nums[i],nums[nums[i]]);
        return nums[i];
        
    }
};