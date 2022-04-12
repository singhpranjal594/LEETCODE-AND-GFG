class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
         int n=board.size();
    int m=board[0].size();
   
    int hd[]={0,-1,0,1,1,1,-1,-1};
    int vd[]={1,0,-1,0,1,-1,1,-1};
    
    vector<pair<int,int>> zero,one;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int sum=0;
            for(int k=0;k<8;k++)
            {
                int x=i+hd[k];
                int y=j+vd[k];
                
                if(x<0 || y<0 || x>=n|| y>=m) continue;
                if(board[x][y]==1)
                    sum++;
            
            }
             if(board[i][j]==1 && sum<2)
                 zero.push_back({i,j});
            else if(board[i][j]==1 && sum>3)
                 zero.push_back({i,j});
             else if(board[i][j]==0 && sum==3)
                    one.push_back({i,j});
        }
    }
    for(auto x:zero)
        board[x.first][x.second]=0;
    
    for(auto x:one)
        board[x.first][x.second]=1;
    
    }
};