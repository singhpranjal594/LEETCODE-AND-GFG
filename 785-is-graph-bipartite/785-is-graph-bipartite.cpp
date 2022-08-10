class Solution {
public:
    bool co(int n,vector<int>&color,vector<vector<int>>& graph)
    {
        queue<int> q;
        q.push(n);
        color[n]=1;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(int it:graph[node])
            {
                if(color[it]!=1)
                {
                    color[it]=1-color[node];
                    q.push(it);
                }
                else if(color[it]==color[node])
                    return false;
                
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color(graph.size(),-1);
        for(int i=0;i<graph.size();i++)
        {
            if(color[i]==-1)
            {
            if(!co(i,color,graph))
                return false;
            }
            
            
        }
        return true;
        
        
    }
};