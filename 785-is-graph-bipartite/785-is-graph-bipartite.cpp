class Solution {
public:
    bool co(int n,vector<int>&color,vector<vector<int>>& graph)
    {
        if(color[n]==-1)
            color[n]=1;
        for(auto it:graph[n])
        {
            if(color[it]==-1)
            {
                color[it]=1-color[n];
                if(!co(it,color,graph))
                    return false;
            }
            else if(color[it]==color[n])
                return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color(graph.size(),-1);
//         for(int i=0;i<graph.size();i++)
//         {
//             for(int j=0;j<graph[0].size();j++)
//             {
//                 cout<<graph[i][j];
                
//             }
//             cout<<endl;
//         }
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