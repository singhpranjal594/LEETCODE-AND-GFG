class Solution {
public:
    string removeDuplicates(string s) {
        string str = "";
        str += s[0];
        for(int i=1; i<s.length(); i++){
            if(str.length()>0 && s[i]==str[str.length()-1])
                str.pop_back();
            else str.push_back(s[i]);
        }
        return str;
    }
};