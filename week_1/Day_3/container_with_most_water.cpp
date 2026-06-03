class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=0;
        int s=0;
        int e= height.size()-1;
        int currentArea;
        while(s<e)
        {
            int width=e-s;
            int ht=min(height[s],height[e]);
            currentArea= width*ht;
            if(currentArea>maxarea)
            {
                maxarea=currentArea;
            }
            height[s]<height[e]?s++:e--;
        }
        return maxarea;
        
    }
};