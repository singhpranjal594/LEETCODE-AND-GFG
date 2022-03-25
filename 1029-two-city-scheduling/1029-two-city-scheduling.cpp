class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n= costs.size();
        vector<int> dif;
        int sumA=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            sumA+=costs[i][0];
            dif.push_back(costs[i][1]-costs[i][0]);  
        }
        sort(dif.begin(),dif.end());
        for(int i=0;i<n/2;i++)
        {
            ans+=dif[i];
        }
        return ans+sumA;
    }
};