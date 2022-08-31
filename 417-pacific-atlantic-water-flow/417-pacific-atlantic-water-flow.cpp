class Solution {
    vector<vector<int>> dir={{0,1}, {0,-1}, {1,0}, {-1,0}};
private: 
    void dfs(vector<vector<int>>&matrix, int row, int col, int prev, vector<vector<bool>>&temp){
        if(row<0 || col<0 || row>=matrix.size() || col>=matrix[0].size()){
            return;
        }
        if(matrix[row][col]<prev || temp[row][col]==true){
            return;
        } 
        temp[row][col]=true;
        for(auto itr: dir){
            dfs(matrix, row+itr[0], col+itr[1], matrix[row][col], temp);
        }
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
        vector<vector<int>> res;
        if(matrix.size()==0 || matrix[0].size()==0){ 
            return res; 
        }
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        vector<vector<bool>>pacific(row, vector<bool>(col,false));
        vector<vector<bool>>atlantic(row, vector<bool>(col,false));
        
        for(int itr=0; itr<col; itr++){
            dfs(matrix, 0, itr, -1e9, pacific);
            dfs(matrix, row-1, itr, -1e9, atlantic);
        }
        
        for(int itr=0; itr<row; itr++){
            dfs(matrix, itr, 0, -1e9, pacific);
            dfs(matrix, itr, col-1, -1e9, atlantic);
        }
        
        for(int itr_row=0;itr_row<row;itr_row++){
            for(int itr_col=0;itr_col<col;itr_col++){
                if(pacific[itr_row][itr_col] && atlantic[itr_row][itr_col]){
                    res.push_back({itr_row, itr_col});
                }
            }
        }
        
        return res;
    }
};