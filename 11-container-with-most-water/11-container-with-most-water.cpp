class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int water =0;
        while(i<j)
        {
            int mini=min(height[i],height[j]);
            int w=j-i;
            water=max(water,w*mini);
            if(height[i] < height[j]){
                i++;
            }
            else if(height[i] > height[j]){
                j--;
            }
            else{
                i++;
                j--;
            }
            
        }
        return water;
        
    }
};