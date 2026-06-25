class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = INT_MIN;
        int len = heights.size();
        int left =0;
        int right = len-1;
        while(left<right){
            int height = min(heights[left],heights[right]);
            int width = right-left;
            area = max(area,height*width);
            if(heights[left]>heights[right]) right--;
            else
                left++;

        }
        // for(int i=0;i<len;i++){
        //     for(int j=i+1;j<len;j++){
                
        //         int width = j-i;
        //         area = max(area,height*width);
        //     }
        // }
        return area;
        
    }
};
