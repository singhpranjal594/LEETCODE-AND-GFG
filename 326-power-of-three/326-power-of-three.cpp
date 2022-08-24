class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
            return false;
        float ans=log(n)/log(3);
        cout<<ans;
        return pow(3,ans)==n;
        
    }
};