class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> f(26,0);
        for(auto i:sentence)
        {
            f[i-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(!f[i])
                return false;
        }
        return true;
        
    }
};