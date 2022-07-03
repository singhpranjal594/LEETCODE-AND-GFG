class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> v=spells;
        sort(spells.rbegin(),spells.rend());
        sort(potions.begin(),potions.end());
        vector<int> ans;
        map<int,int> ma;
        int n=spells.size();
        int m=potions.size();
        int i=0;
        int j=0;
        while(i<n&&j<m)
        {
            long long curr=(long long)spells[i]*potions[j];
            if(curr<success)
                j++;
            else
            {
                ma[spells[i]]=(m-j);
                i++;
            }
        }
        for(int i=0;i<v.size();i++)
        {
            ans.push_back(ma[v[i]]);
        }
return ans;
        
        
    }
};