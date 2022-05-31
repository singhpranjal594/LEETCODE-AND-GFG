class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int i=0;
        int j=0;
        int n=pow(2,k);
        vector<int> v(n,0);
        int dec=0;
        while(j<s.size())
        {
            dec=dec*2+(s[j]-'0');
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                v[dec]=1;
                dec-=(s[i]-'0')*pow(2,k-1);
                i++;
                j++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(!v[i])
                return false;
            
        }
        return true;
        
    }
};