class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int> v(33);
        for(int i=0;i<candidates.size();i++)
        {
            int num=candidates[i];
            int j=0;
            while(num>0)
            {
                v[j]+=num%2;
                num/=2;
                j++;
            }
            
        }
        int maxi=INT_MIN;
        for(int i=0;i<32;i++)
        {
            
            maxi=max(maxi,v[i]);
        }
        return maxi;
        
        
    }
};