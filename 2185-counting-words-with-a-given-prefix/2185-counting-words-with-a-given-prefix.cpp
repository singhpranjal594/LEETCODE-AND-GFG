class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=words.size();
        int m=pref.size();
        int c=0;
        
        for(int i=0;i<n;i++)
        {
            if(m>words[i].size())
                continue;
            string s=words[i];
            s.erase(m);
            cout<<s<<" "<<words[i]<<" ";
            if(s==pref)
                c++;
            
        }
        return c;
        
    }
};