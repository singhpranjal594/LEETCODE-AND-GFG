class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    
        sort(nums.begin(),nums.end());
        int count=1;
        set<int>s;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
         for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                v.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(count)==s.end())
            {
                v.push_back(count);
                break;
            }
            count++;
        }
       
        return v;
        
    }
};