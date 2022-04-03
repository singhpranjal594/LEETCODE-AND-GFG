class Solution {
public:
     
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int pos=n-2;
        for(;pos>=0;)
        {
            if(nums[pos+1]<=nums[pos])pos--;
            else
                break;
        }
        int pos2=n-1;
        if(pos>=0){
        while(nums[pos2]<=nums[pos])
            pos2--;
        swap(nums[pos],nums[pos2]);
        }
        reverse(nums.begin()+1+pos,nums.end());
        
        
    }
};