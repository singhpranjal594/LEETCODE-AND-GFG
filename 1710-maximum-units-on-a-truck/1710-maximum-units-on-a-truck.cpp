class Solution {
public:
    static bool cmp(vector<int> &a ,vector<int> &b)
    {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int res=0;
        for(int i=0;i<boxTypes.size();i++)
        {
            int mini=min(truckSize,boxTypes[i][0]);
            truckSize-=mini;
            res+=(mini*boxTypes[i][1]);
            if(truckSize==0)
                break;
        }
        return res;
        
        
        
    }
};