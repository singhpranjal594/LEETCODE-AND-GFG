class Solution {
public:
    string getSmallestString(int n, int k) {
        string s(n,'a');
        k = k-n;
        int i = n-1;
        while(k){
            if (k>=25){
                s[i]='z';
                k = k-25;
                i--;
            }  else  {
                char c = k+'a';
                s[i]=c;
                k = 0;
            }
        }
        return s;
    }
};