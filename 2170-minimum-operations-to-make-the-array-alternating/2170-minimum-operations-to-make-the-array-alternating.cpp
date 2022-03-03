class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int> o;
        unordered_map<int,int> e;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i%2)
                o[nums[i]]++;
            else
                e[nums[i]]++;
        }
        int maxodd=0,maxoddval=0;
        int maxeve=0,maxeveval=0;
        for(auto i:o)
        {
            if(i.second>maxodd)
            {
                maxodd=i.second;
                maxoddval=i.first;
            }
            
        }
        for(auto i:e)
        {
            if(i.second>maxeve)
            {
                maxeve=i.second;
                maxeveval=i.first;
            }
            
        }
        int secondmaxodd=0;
        int secondmaxeve=0;
        for(auto i:o)
        {
            if(i.first!=maxoddval)
            {
                secondmaxodd=max(secondmaxodd,i.second);
            }
            
        }
        for(auto i:e)
        {
            if(i.first!=maxeveval)
            {
                secondmaxeve=max(secondmaxeve,i.second);
            }
            
        }
        if(maxoddval!=maxeveval)
            return n-maxodd-maxeve;
        return min(n-secondmaxeve-maxodd,n-secondmaxodd-maxeve);
        
        
    }
};