class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int ans=0;
        while(startValue<target)
        {
            if(target%2==0)
            {
                target/=2;
                ans++;
            }
            else
            {
                target++;
                ans++;
            }
        }
        return ans+abs(target-startValue);
        
    }
};