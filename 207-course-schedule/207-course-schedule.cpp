class Solution {
public:
    bool cycle(int node,vector<vector<int>>&adj,vector<int>&vis,vector<int>&dfs)
    {
        vis[node]=1;
        dfs[node]=1;
        for(auto it:adj[node])
        {
            if(vis[it]==0)
            {
                if(cycle(it,adj,vis,dfs))return true;
            }
            else if(dfs[it]==1)
                    return true;
            
        }
        dfs[node]=0;
        return false;
        
    }
    bool canFinish(int n, vector<vector<int>>& p) {
        
        vector<int>vis(n,0);
        vector<int> dfs(n,0);
        
        vector<vector<int>>adj(n);
        for(auto it:p)
        {
            adj[it[0]].push_back(it[1]);
        }
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i] && cycle(i,adj,vis,dfs))
                    return false;
            }
        return true;
        
    }
};