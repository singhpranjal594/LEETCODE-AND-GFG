class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        int n=num.size();
        int flag =0;
        for(int i=0;i<n;i++)
        {
            int ind=num[i]-'0';
            if((ind)<change[ind])
            {
                num[i]=char(change[ind]+'0'); 
                flag = 1;
                            
             }else if(flag == 1 && num[i] - '0' > change[ind])return num;
                            
                    
            }
            return num;

        
    }
};