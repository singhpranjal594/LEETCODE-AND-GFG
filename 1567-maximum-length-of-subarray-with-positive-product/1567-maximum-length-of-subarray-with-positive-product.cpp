class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n=nums.size();
        int pos=0;
        int neg=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0){
                pos=0;
                neg=0;
            }
            else if(nums[i]>0)
            {
                pos++;
                if(neg)
                    neg++;
            }
            else
            {
                swap(pos,neg);
                if(pos)
                    pos=pos+1;
                else
                    pos=0;
                neg++;
            }
            ans=max(ans,pos);
        }
        return ans;
    }
};