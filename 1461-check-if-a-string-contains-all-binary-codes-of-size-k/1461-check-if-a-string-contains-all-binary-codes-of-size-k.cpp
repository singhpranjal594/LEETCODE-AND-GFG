class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> se;
        int n=s.size();
        for(int i=0;i<=n-k;i++)
        {
            se.insert(s.substr(i,k));
        }
        cout<<se.size();
        if(se.size()==pow(2,k))
            return true;
        return false;
        
    }
};