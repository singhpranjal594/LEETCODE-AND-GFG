class Solution {
public:
    int concatenatedBinary(int n) {
        int MOD = 1000000007;
        long long int sum = 0, length = 0;
        for(int i = 1; i <= n; i++) {
            if((i & (i - 1)) == 0) length++;    
            sum = ((sum << length) | i) % MOD;
        }
        return int(sum);    
    }
};