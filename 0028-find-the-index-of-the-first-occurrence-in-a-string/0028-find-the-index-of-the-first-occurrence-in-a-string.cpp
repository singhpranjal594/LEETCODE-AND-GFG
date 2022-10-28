class Solution {
public:
    int strStr(string haystack, string needle) {
        bool flag=false;
        int ind=INT_MIN;
        int nl=needle.size();
        int hl=haystack.size();
        for(int i=0;i<hl- nl+1;i++){
            if(haystack[i]==needle[0])
            {
                ind=i;
                if(nl==1) //base case
                {
                    return ind;
                }
                int j=1;
                while(j<nl)
                {
                    if(haystack[i+j]==needle[j])
                    {
                        j++;
                        flag=true;
                    }
                    else
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag==true)
                {
                    return ind; 
                }
            }
        }
        return-1;
    }
};