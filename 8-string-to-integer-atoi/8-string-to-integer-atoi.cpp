class Solution {
public:
    int myAtoi(string s) {
        long res = 0;
        int i = 0;
        while(i<s.length() && s[i] == ' '){
            i++;
        }
        
        int neg = 1;
        if(s[i] == '-') {
            neg*=-1;
            i++;
        }
        else if(s[i] == '+') i++;
        
        int base = 1;
        while(i<s.length() && (s[i]-'0' >=0 && s[i]-'0'<10)){
            res = res*base+((s[i] - '0')*neg);
            if(res<-2147483648) {
                res = -2147483648;
                break;
            }
            else if(res>2147483647){
                res = 2147483647;
                break;
            }
            base=10;
            i++;
        }
        return res;
    }
};