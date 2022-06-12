class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int ans = 0;
        
        unordered_set<int> st;
        
        for (int i = 0, j = 0, sum = 0; i < nums.size(); ++i) {
            sum += nums[i];
            
            if (!st.count(nums[i])) {
                st.insert(nums[i]);
            } else {
                while (nums[j] != nums[i]) {
                    sum -= nums[j];
                    st.erase(nums[j++]);
                }
                
                sum -= nums[j++];
            }
            
            ans = max(ans, sum);
        }
        
        return ans;
    }
};