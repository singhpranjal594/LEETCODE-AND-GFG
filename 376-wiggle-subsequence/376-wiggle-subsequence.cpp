class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int c=0;
        int n=  nums.size();
        if(n<2)
            return n;
        
        int p = nums[1] - nums[0];
        
        if(p == 0)
        {
            c = 1;
        }
        else
        {
            c = 2;
        }
        for(int i=2;i<nums.size();i++)
        {
            int cur=nums[i]-nums[i-1];
            if((p<=0 && cur>0)||(p>=0 && cur<0))
            {
                c++;
                p=cur;
            }
        }
        return c;
        
    }
};