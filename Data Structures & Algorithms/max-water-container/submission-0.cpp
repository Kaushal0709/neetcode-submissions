class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = INT_MIN;
        int len = heights.size();
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                int height = min(heights[i],heights[j]);
                int width = j-i;
                area = max(area,height*width);

            }
        }
        return area;
        
    }
};
