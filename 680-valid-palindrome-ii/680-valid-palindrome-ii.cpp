class Solution {
public:
    bool pall(string s,int i, int j)
    {
        while(i<=j)
        {
            if(s[i++]!=s[j--])
                return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<=j)
        {
            if(s[i++]!=s[j--])
            {
            if(pall(s,i,j+1))
                    return true;
                return pall(s,i-1,j);
            }
        }
        return true;
        
    }
};