class Solution {
public:
    int bin(vector<int> a,int target)
    {
        
        int l=0;
        int h=a.size()-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(a[mid]==target)
            {
                return mid;
            }
            else if(a[mid]>target)
            {
                h=mid-1;
            }
            else
                l=mid+1;
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
       
        if (matrix[0][0] > target || matrix[n - 1][m - 1] < target) {
            return false;
        }
        for(int i=0;i<n;i++)
        {
            if (target >= matrix[i][0] && target <= matrix[i][m - 1])
            {
            if(bin(matrix[i],target)!=-1)
                return true;
            
        }
        }
        return false;
        
    }
};