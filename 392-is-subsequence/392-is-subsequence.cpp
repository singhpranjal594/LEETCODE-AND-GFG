class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool p=true;
        int st=0;
        for(char c:s)
        {
             bool res=false;
            for(int i=st;i<t.size();i++)
            {
                if(c==t[i])
                {
                    st=i+1;
                    res=true;
                    break;
                }
                
            }
            if(!res)
                p=0;
            
            
        }
        if(p)
            return true;
        else
            return false;
        
        
    }
};