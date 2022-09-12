class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int n = tokens.size();
        int i=0, j=n-1, score = 0, ans = 0;
        
        while(i<=j){
            if(power >= tokens[i]){
                power-= tokens[i++]; 
                score++;
                ans = max(ans, score);
            }else{
                if(score == 0) break;
                power += tokens[j--];
                score--;
            }
        }
        return ans;
    }
};