class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        string temp=s;
        sort(temp.rbegin(),temp.rend());
        char maxi=s[0];
        // int ind=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
                maxi='0';
                int ind=0;
                if(s[i]!=temp[i])
                {
                    
            for(int j=i+1;j<n;j++)
            {
                     if(s[j]>=maxi)
            {
                maxi=s[j];
                ind=j;
            }
            
                }swap(s[i],s[ind]);
                    break;
           
        }
        }
        
        return stoi(s);
        
        
    }
};