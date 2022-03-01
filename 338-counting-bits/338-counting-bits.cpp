class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++)
        {
            int s=0;
            int n1=i;
        while(n1>0)
        {s+=n1%2;
         n1/=2;
            
            
        }
            v.push_back(s);
        
    }
        return v;
    }
};