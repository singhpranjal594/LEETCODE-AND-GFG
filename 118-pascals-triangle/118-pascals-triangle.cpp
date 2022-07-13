class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> p;
        vector<int> prev;
        for(int i=1;i<=numRows;i++)
        {
            vector<int> cur;
            cur.push_back(1);
            for(int j=1;j<i-1;j++)
            {
                cur.push_back(prev[j-1]+prev[j]);
            }
            if(i>1)cur.push_back(1);
            p.push_back(cur);
            prev=cur;
        }
        for(int i=0;i<p.size();i++)
        {
            for(auto j:p[i])
                cout<<j<<" ";
            cout<<endl;
        }
        return p;
        
        
    }
};