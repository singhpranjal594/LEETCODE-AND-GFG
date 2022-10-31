class Solution {
public:
    bool isValid(int row, int col, int rr, int cc)
    {
        return row >= 0 && row < rr && col >=0 && col < cc;
    }
    
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rr = matrix.size();
        int cc = matrix[0].size();
        
        for(int row = 1; row < rr; row++) // No need to check for the 1st (index: 0) row. As new_row = 0 - 1 = -1; which will always be invalid. 
        {
            for(int col = 0; col < cc; col++)
            {
                int new_row = row - 1;
                int new_col = col -1;
                
                if(isValid(new_row, new_col, rr, cc))
                {
                    if(matrix[row][col] != matrix[new_row][new_col])
                    {
                        return false;
                    }
                }
            }
        }
        
        return true;
    }
};