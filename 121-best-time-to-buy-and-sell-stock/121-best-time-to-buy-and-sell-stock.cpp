class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=1e7;
        int maxi=0;
        int pos=0;
        
        
        for(int i=0;i<prices.size();i++)
        {
            if(mini>prices[i]){mini=prices[i];}
            else if(maxi<prices[i]-mini)
                {
                    maxi=prices[i]-mini;
                }
       
                
            }
        return maxi;
        
    }
};