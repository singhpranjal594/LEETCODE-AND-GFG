class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int mh=0;
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        for(int i=0;i<horizontalCuts.size();i++)
        {
            if(i==0)
                mh=max(horizontalCuts[i],mh);
            else
                mh=max(horizontalCuts[i]-horizontalCuts[i-1],mh);  
        }
        int mw=0;
        for(int i=0;i<verticalCuts.size();i++)
        {
            if(i==0)
                mw=max(verticalCuts[i],mw);
            else
                mw=max(verticalCuts[i]-verticalCuts[i-1],mw);  
        }
        mh=max(mh,h-horizontalCuts[horizontalCuts.size()-1]);
        mw=max(mw,w-verticalCuts[verticalCuts.size()-1]);
        int ans=(1LL*mh*mw)%1000000007;
        return ans;
        
        
    }
};