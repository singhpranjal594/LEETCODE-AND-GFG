class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // v[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=nums[i-1]+nums[i];
        }
        return nums;
        
    }
};