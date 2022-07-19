class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        int n1=-1;
        int n2=-1;
        int c1=0;
        int c2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==n1)
                c1++;
            else if(nums[i]==n2)
                c2++;
            else if(c1==0)
            {n1=nums[i];
             c1++;
            }
            else if(c2==0)
            { n2=nums[i];c2++;
            }
            else
            {
                c1--;
                c2--;
            }
            
            
            
        }
         c1 = c2 = 0;
  for (int i = 0; i < n; i++) {
    if (nums[i] == n1)
      c1++;
    else if (nums[i] == n2)
      c2++;
  }
        if(c1>n/3)
            v.push_back(n1);
        if(c2>n/3)
            v.push_back(n2);
        return v;
        
    }
};