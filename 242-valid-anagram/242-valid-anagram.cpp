class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        int n=s.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<n;i++)
        {
            if(s[i]==t[i])
                continue;
            else
                return false;
        }
        return true;
    }
};