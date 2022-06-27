class Solution {
public:
     static bool comp(vector<int>&a,vector<int>&b){
        if(a[1]==b[1])return a[0]>b[0];
        return a[1]<b[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int n=pairs.size();sort(pairs.begin(),pairs.end(),comp);
        int ans=1;
        int temp=pairs[0][1];
        
        for(int i=1;i<n;i++)
        {
            if(pairs[i][0]>temp)
            {
                ans++;
                temp=pairs[i][1];
            }
        }
        return ans;
    }

};