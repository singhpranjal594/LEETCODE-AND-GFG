class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int ans=0;
        int mul=9;
        int ans1=9;
        if(n==0)
            return 1;
        for(int i=n;i>1;i--)
        {
            if(mul!=0)
            {
                ans1*=mul--;
                cout<<ans1<<endl;
                ans+=ans1;
            }
        }
        return ans+10;
        
    }
};