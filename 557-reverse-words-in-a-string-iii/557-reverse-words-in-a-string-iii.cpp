class Solution {
public:
    string reverseWords(string s) {
         int i = 0, j = s.length() - 1;
        for(int k = 0; k <= s.length(); k++){
            if(k < s.length() && s[k] != ' ') continue;
            j = k-1;
            while(i < j){
                char c = s[i];
                s[i++] = s[j];
                s[j--] = c;
            }
            i = k+1;
        }
        return s;
    
        
    }
};