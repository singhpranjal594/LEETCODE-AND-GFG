class Solution {
public:
    void reverseString(vector<char>& s) {
        // reverse(s.begin(),s.end());
        int i=0;
        int j=s.size()-1;
        char temp=' ';
        while(i<j)
        {
             temp=s[j];
            s[j]=s[i];
            s[i]=temp;
            i++;
            j--;
        }
        
    }
};