class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         int s=1;
        int r1=0,r2=n-1,c1=0,c2=n-1;
        vector<vector<int>> a(n,vector<int>(n));
       while(r1<=r2 && c1<=c2){
           for(int i=c1;i<=c2;i++)        
               a[r1][i]=s++;
           r1++;
           for(int i=r1;i<=r2;i++)          
               a[i][c2]=s++;
           c2--;
           for(int i=c2;i>=c1;i--)          
               a[r2][i]=s++;
          r2--; 
           for(int i=r2;i>=r1;i--)          
               a[i][c1]=s++;
          
           c1++;
           
           
       }
        return a;
    }
};