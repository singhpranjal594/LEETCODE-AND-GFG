class Solution {
public:
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        int suma=accumulate(nums1.begin(),nums1.end(),0);
        int sumb=accumulate(nums2.begin(),nums2.end(),0);
        int max1=0;
        int max2=0;
        int temp1=0,temp2=0;
        int n=nums1.size();
        for(int i=0;i<n;i++)
        {
            temp1+=(nums2[i]-nums1[i]);
            if(temp1<=0)
                temp1=0;
            max1=max(temp1,max1);
            temp2+=(nums1[i]-nums2[i]); 
            if(temp2<=0)
                temp2=0;
            max2=max(temp2,max2);
        }
        return max(max1+suma,max2+sumb);
        
    }
};