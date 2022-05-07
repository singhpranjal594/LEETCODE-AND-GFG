class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> s;
        int n=nums.size();
        int p=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]<p)
                return true;
            while(!s.empty() && s.top()<nums[i])
            {
                p=s.top();
                s.pop();
            }
            s.push(nums[i]);
        }
        return false;
        
    }
};