class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        int c=0;
        for(int i=1;i<n-1;i++)
        {
            if(nums[i+1]-nums[i]==nums[i]-nums[i-1])
            {
                c++;
                res+=c;
            }
            else
                c=0; 
        }
        return res;
        
    }
};