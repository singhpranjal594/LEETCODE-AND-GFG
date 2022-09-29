class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x){
        int n=arr.size();
        int i=0;
        int j=n -1;
        vector<int> ans;
        
        while(j-i>=k)
        {
            if(abs(arr[i]-x)>abs(arr[j]-x))
            {
             i++;
            }
            else
                j--;
                
        }
        for(int lp=i;lp<=j;lp++)
        {
            ans.push_back(arr[lp]);
        }
        return ans;
    }
};