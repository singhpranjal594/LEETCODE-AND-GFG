class Solution {
public:
    bool cycle(int node,vector<vector<int>>&adj,vector<int>&vis)
    {
        if(vis[node]==2)
            return true;
        
        vis[node]=2;
        for(auto it:adj[node])
        {
            if(vis[it]!=1)
            {
                if(cycle(it,adj,vis))
                    return true;
            }
        }
        vis[node]=1;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& p) {
        
        vector<int>vis(n,0);
        
        vector<vector<int>>adj(n);
        for(auto it:p)
        {
            adj[it[0]].push_back(it[1]);
        }
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]!=1){
                if(cycle(i,adj,vis))
                    return false;
            }
        }
        return true;
        
    }
};