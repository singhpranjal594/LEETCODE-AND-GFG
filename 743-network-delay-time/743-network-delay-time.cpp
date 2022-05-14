class Solution {
public:

int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<vector<pair<int,int>>> grp(n+1);
    vector<int> chk(n+1,INT_MAX);
    
    for(int i=0;i<times.size();i++){
        int j = times[i][0];
        grp[j].push_back({times[i][1],times[i][2]});
    }
    
    queue<int> q;
    q.push(k);
    chk[k]=0;
    
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(pair<int,int> p : grp[curr]){
            int next = p.first;
            int time = p.second;
            int tTime = chk[curr] + time;
            if(chk[next] > tTime){
                chk[next] = tTime;
                q.push(next);
            }
        }
    }
    int maxi = 0;
    for(int i=1;i<=n;i++){
        if(chk[i]==INT_MAX)
            return -1;
        maxi = max(maxi,chk[i]);
    }
    return maxi;
}
};