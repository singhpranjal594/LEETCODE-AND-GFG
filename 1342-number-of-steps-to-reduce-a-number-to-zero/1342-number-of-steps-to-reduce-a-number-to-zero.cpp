class Solution {
public:
    int numberOfSteps(int n) {
        int c=0;
        while(n)
        {
            if(n%2)
                n--;
            else
                n>>=1;
            c++;
        }
        return c;
        
    }
};