class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        vector<int> fre(100005,0);
        for(auto i:arr)
            fre[i]++;
        sort(fre.begin(),fre.end(),greater<int>());
        
        int c=0;
        int ans=0;
        int j=0;
        for(int i=0;i<n&&c<n/2;i++)
        {
            c+=fre[i];
            ans++;
            
            
        }
        return ans;
        
    }
};