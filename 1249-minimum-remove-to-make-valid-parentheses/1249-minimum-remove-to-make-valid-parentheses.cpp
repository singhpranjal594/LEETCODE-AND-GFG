
// C++ program to remove white spaces
// from string using the function
// boost::trim functio
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans="";
        int open=0;
        int close=0;
        for(auto c:s)
        {
            if(c=='(')
            {
                open++;
            }
            else if(c==')')
            {
                if(open==0)continue;
                open--;
            }
            ans.push_back(c);
        }
        s=ans;
        ans="";
        for(int i=(int)s.size()-1;i>=0;i--)
        {
            if(s[i]==')')
                close++;
            else if(s[i]=='(')
            {
                if(close==0)
                    continue;
                    close--;
            }
            ans.push_back(s[i]);
        }
    
        reverse(ans.begin(),ans.end());
        // trim(ans);
        return ans;
    }
        
    
};