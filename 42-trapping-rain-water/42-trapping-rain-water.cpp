class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int lmax=0;
        int rmax=0;
        int i=0,j=height.size()-1;
        while(i<j)
        {
            lmax=max(lmax,height[i]);
            rmax=max(rmax,height[j]);
            if(lmax<rmax)
            {
                res+=lmax-height[i++];
            }
            else
                res+=rmax-height[j--];
        }
            
        return res;
        
    }
};