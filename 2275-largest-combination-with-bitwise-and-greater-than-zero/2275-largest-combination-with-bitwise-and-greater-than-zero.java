class Solution {
    public int largestCombination(int[] arr) {
        
        int n=arr.length;int no=0;
        int max[]=new int[55];
        for(int i=0;i<n;i++)
        {
            no=arr[i];int f=1;int bit=1;
            while(no > 0)
            {
                if((no & f) > 0){
                    max[bit]++;
                }
                bit++;
                no=no >> 1;
            }
        }
        int ans=Integer.MIN_VALUE;
        for(int i=0;i<max.length;i++){
            ans=Math.max(ans,max[i]);
        }
        return ans;
    }
}