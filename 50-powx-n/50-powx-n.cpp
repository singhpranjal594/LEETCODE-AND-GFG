class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n==1)   return x;
        long long temp=n;
        if(temp<0)
        {x=1/x;
            temp=-temp;
        }
        if(n%2)
            return x*myPow(x*x,temp/2);
            else
         return myPow(x*x,temp/2);
                      
    }
};