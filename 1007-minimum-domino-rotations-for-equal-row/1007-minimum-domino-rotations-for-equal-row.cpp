class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        int ans = A.size()+1;
        for (int i = 1; i <= 6; ++ i) {
            int top = 0, bottom = 0, k = 0;
            while (k < A.size() && (A[k] == i || B[k] == i)) {
                if (B[k] != i) ++ bottom;
                if (A[k] != i) ++ top;
                ++ k;
            }
            if (k == A.size()) ans = min(ans, min(bottom, top));
        }
        if (ans == (A.size()+1)) return -1;
        else return ans;
        
    }
};