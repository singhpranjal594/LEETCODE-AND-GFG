class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> m1;
        // map<char,int> m2;
      
        int ans=0;
        cout<<ans;
        for(auto i:s) m1[i]++;
        for(auto i:t) --m1[i];
        for(auto i: m1)
            ans+=abs(i.second);
    return ans;}
    
};