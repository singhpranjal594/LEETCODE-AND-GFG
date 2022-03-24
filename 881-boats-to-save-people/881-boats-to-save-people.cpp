class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        sort(people.begin(),people.end());
        int j=n-1;
        int c=0;
        int i=0;
        while(i<=j)
        {
            c++;
            if(people[i]+people[j]<=limit)
            {
                i++;
                // c++;
                
            }
                j--;
                

            
        }
        return c;
        
    }
};