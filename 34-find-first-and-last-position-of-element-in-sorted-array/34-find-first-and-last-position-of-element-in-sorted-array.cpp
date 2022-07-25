class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int f=-1;
        int s=-1;
        for(int i=0;i<n;i++)
        {
            if(target==nums[i])
            {
                f=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(target==nums[i])
            {s=i;
             break;
            }
        }
        vector<int> v(2);
        v[0]=f;
        v[1]=s;
        return v;
            
        
        
    }
};