class Solution {
  public:
    vector<int> findOriginalArray(vector<int>& changed) {
      if (changed.size() % 2)
        return {};
      unordered_map<int, int> c;
      int zero = 0;
      sort(changed.begin(), changed.end());
      while (zero < changed.size() && changed[zero] == 0)
        zero++;
      vector<int> ans(zero/2, 0);
      for (int i = zero; i < changed.size(); i++)
        c[changed[i]]++;
      for (int i = zero; i < changed.size(); i++) {
        int n = changed[i];
        if (c.count(n) && c[n] == 0)
          continue;
        if (!c.count(n*2) || c[n*2] < c[n])
          return {};
        c[n*2]--;
        c[n]--;
        ans.push_back(n);
      }
      return ans;
    }
};