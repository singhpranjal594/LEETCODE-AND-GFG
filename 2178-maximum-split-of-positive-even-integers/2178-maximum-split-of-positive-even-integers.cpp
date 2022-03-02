class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> v;
        if(finalSum%2)
        {
            return v;
        }
        long long x=finalSum;
        long long i=2;
        while(x)
        {
            if(x-i>i||x==i)
            {v.push_back(i); x-=i;
            }
            i+=2;
        }
        return v;
        
    }
};