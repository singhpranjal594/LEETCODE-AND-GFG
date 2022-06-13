class Solution {
    private:
        static bool cmp(vector<int>& a, vector<int>& b){
        if(a[0]==b[0]) return a[1] > b[1];
        return a[0] < b[0];
    }
public:
	int maxEnvelopes(vector<vector<int>>& envelopes) {
		int n = envelopes.size();
		sort(envelopes.begin(), envelopes.end(), cmp);
		vector<int> lis;
        lis.push_back(envelopes[0][1]);
		for (int i = 1; i < n; ++i) {
			int e = envelopes[i][1];
			int ind = lower_bound(lis.begin(), lis.end(), e) - lis.begin();
			if (lis.back() < e) lis.push_back(e);
			else lis[ind] = e;
		}
		return lis.size();
	}
};