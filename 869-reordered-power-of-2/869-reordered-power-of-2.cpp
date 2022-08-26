class Solution {
public:
    vector<int> c(int n)
    {
         vector<int> v(10);
        int num=n;
        while(num>0)
        {
            v[num%10]++;
            num/=10;
        }
        return v;
        
    }
    bool reorderedPowerOf2(int n) {
        vector<int> v=c(n);
       
        for(int i=0;i<=31;i++)
        {
            if(v==c(1<<i))
                return true;
            
        }
        return false;
        
        
    }
};