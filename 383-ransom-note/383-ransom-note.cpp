class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> v(26);
        for(auto i:ransomNote)
            v[i-'a']++;
        for(auto i:magazine)
        {
            if(v[i-'a']>0)
                v[i-'a']--;
            
        }
        for(auto i:v)
            if(i!=0)
                return false;
        return true;
        
    }
};