class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        map<char,int>m,m1;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<target.size();i++)
        {
            m1[target[i]]++;
        }
        int maxi=INT_MAX;
        for(auto i:m1)
        {
            maxi=min(maxi,m[i.first]/i.second);
            
        }
        return maxi;
        
    }
};