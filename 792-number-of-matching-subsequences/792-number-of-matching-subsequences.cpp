class Solution {
public:
    bool f(string s,string p,int m,int n)
    {
        int j=0;
        for(int i=0;i<m&&j<n;i++)
        {
            if(s[i]==p[j])j++;
        }
        if(j==n)
            return true;
        else
        return false;
    }
    
    
    int numMatchingSubseq(string s, vector<string>& words) {
        int c=0;
        map<string,bool> m;
        for(int i=0;i<words.size();i++)
        {
            if(m.find(words[i])!=m.end())
            {
                if(m[words[i]]==true)
                    c++;
                continue;
            }
            m[words[i]]=f(s,words[i],s.size(),words[i].size());
            c+=(m[words[i]]==true);
                
            
            
            
        }
        return c;
        
    }
};