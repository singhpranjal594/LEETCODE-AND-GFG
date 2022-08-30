class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
         for(int i=0;i<mat.size()-1;i++){
            for(int j=0;j<mat.size()-1;j++){
                for(int k=0;k<mat[i].size()-1;k++){
                    if(mat[j][k]>mat[j+1][k+1]){
                        swap(mat[j][k],mat[j+1][k+1]);
                    }
                }
            }
        }
        return mat;
    }
};