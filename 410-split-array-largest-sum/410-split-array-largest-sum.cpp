class Solution {
public:
    int count(vector<int> a,int mid)
    {
        int c=1,sum=0;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(sum+a[i]<=mid)
            {
                sum+=a[i];
            }
            else
            {
                c++;
                sum=a[i];
            }
        }
        return c;
    }
    int splitArray(vector<int>& nums, int m) {
        int i=*max_element(nums.begin(),nums.end());
        int j=accumulate(nums.begin(),nums.end(),0);
        cout<<j;
        int ans;
        while(i<=j)
        {
            int mid=(i+j)/2;
            int c=count(nums,mid);
            if(c<=m)
            {
                j=mid-1;
                ans=mid;
            }
            else
            {
                i=mid+1;
            }
        }
        return ans;
        
        
    }
};