class Solution {
public:
    
    int f(vector<vector<int>>& grid, int i, int j)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size())
            return 0;
        if(grid[i][j]==0)
            return 0;
       
        grid[i][j]=0;
         
            
        return (1+ f(grid, i+1, j) + f(grid, i, j+1) + f(grid, i-1, j) + f(grid, i, j-1));
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0, x =0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(grid[i][j])
                    x = f(grid, i, j);
                
                ans = max(ans, x);
            }
        return ans;
    }
};