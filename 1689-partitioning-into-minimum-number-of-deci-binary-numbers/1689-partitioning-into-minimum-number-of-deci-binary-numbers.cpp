class Solution {
public:
    
    int minPartitions(string n) {
        int maxi=0;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]=='9')
                return 9;
            maxi=max(n[i]-'0',maxi);
        }
        return maxi;
            
        
    }
};