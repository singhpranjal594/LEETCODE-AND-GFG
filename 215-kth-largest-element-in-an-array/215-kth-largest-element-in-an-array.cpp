class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> p;
        for(int i=0;i<nums.size();i++)
        {
            p.push(nums[i]);   
        }
        while(k-->1)
        {
            p.pop();
        }
        return p.top();
        
    }
};