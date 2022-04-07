class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q(stones.begin(),stones.end());
        while(!q.empty())
        {
            int x=q.top();
            q.pop();
            if(q.empty())
                return x;
            int y=q.top();
            q.pop();
            q.push(x-y);
        }
        return 0;
    }
};