class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
      int n = matrix.size();
     int m = matrix[0].size();

     if(n==m){
        for(int i = 0;i<n;i++){
            for(int j =i+1;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
         return matrix;
     }else{
       vector<vector<int>> sol(m,vector<int>(n,0));
         for(int i = 0;i<n;i++){
            for(int j =0;j<m;j++){
                sol[j][i] = matrix[i][j];
            }
        }
         return sol;
     }
    }
};