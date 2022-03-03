class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int res=0;
        set<char> se;
        while(r<s.size())
        {
            if(se.find(s[r])==se.end())
            {se.insert(s[r]);
                r++;
             int le=se.size();
                res=max(res,le);
                
            }
            else
            {
                se.erase(s[l]);
                l++;
                
            }
            
        }
        return res;
        
        
    }
};