class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l=0;long long r=LLONG_MAX/time.size();
        long long trip=0;
        while(l<r)
        {
            long long m=(l+r)/2;
            trip=0;
            for(int i=0;i<time.size();i++)
              trip+=m/time[i];
             if(trip<totalTrips)
                 l=m+1;
             else
                 r=m;
        }
            
    return l;
    }
};