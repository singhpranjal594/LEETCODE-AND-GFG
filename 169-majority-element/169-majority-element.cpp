class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int cur;
        
        for(int i=0;i<n;i++)
        {
            if(c==0)
            {
                cur=nums[i];
            }
            if(cur==nums[i])c++;
            else c--;
        }
        return cur;
        
    }
};