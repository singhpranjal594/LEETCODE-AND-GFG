class Solution {
public:
    int removePalindromeSub(string s) {
        string p=s;
        reverse(s.begin(),s.end());
        if(s==p)
            return 1;
        return 2;
        
    }
};