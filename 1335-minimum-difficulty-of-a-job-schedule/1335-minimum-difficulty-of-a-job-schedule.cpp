class Solution {
private:
    vector<vector<int>> mat = vector<vector<int>>(301, vector<int> (1001, -1));
public:
    int solve(vector<int>& jobDifficulty, int start, int d, int n){
        if(mat[start][d]!=-1) return mat[start][d];
        if(n-start<d) return -1;
        else if(d==1){
            int mx = INT_MIN;
            for(int i=start; i<n; ++i){
                mx = max(jobDifficulty[i],mx);
            }
            return mx;
        }
        else if(start==n-1 && d>1) return -1;
        int mx = INT_MIN;
        int mn = INT_MAX;
        int temp_ans;
        for(int i=start; i<n-1; ++i){
            mx = max(mx, jobDifficulty[i]);
            if(mat[i+1][d-1]==-1) temp_ans = mat[i+1][d-1] = solve(jobDifficulty, i+1, d-1, n);
            else temp_ans = mat[i+1][d-1];
            if(temp_ans!=-1) mn = min(mn, mx + temp_ans);
        }
        mat[start][d] = mn;
        return mn;
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        return solve(jobDifficulty, 0, d, n);
    }
};