class Solution {
public:
    string largestGoodInteger(string nums) {
        char ans=0;
        for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i-1]&&nums[i]==nums[i+1])
            {
                ans=max(ans,nums[i]);
            }
        }
        if(ans==0)
            return "";
        return string(3,ans);
        
    }
};