class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();
        int c=0;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(seats[i]==0)
            {
                c++;
            }
            else
                c=0;
            maxi=max((c+1)/2,maxi);
        }
        cout<<maxi;
         for (int i = 0; i < n; i++)
         {
            if (seats[i] == 1) {
            maxi =max(maxi, i);
            break;
            }
        }

        for (int i = n-1; i >= 0; --i)  
        {   if (seats[i] == 1) {
            maxi = max(maxi, n - 1 - i);
            break;
        }
        }
        return maxi;
    }
};