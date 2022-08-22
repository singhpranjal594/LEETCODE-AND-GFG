class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        
        if(n%3!=1)
        {
            return false;
        }
        return (n&(n-1))==0;
    }
};