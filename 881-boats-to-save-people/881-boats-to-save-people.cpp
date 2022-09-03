class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        int n=p.size();
        sort(p.begin(),p.end());
        int i=0;
        int j=n-1;
        int c=0;
        while(i<=j)
        {
            c++;
            if(p[i]+p[j]<=limit)
            {
                i++;
            }
            j--;
        }
        return c;
        
        
    }
};