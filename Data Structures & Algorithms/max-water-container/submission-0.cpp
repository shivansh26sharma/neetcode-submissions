class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int start=0;
        int end=n-1;
        int maxWater=0;
        while(start<end){
            int width=end-start;
            int h;
            if(heights[start]<heights[end]){
                h=heights[start];
            }
            else{
                h=heights[end];
            }
            int water=width*h;
            if(water>maxWater){
                maxWater=water;
            }
            if(heights[start]<heights[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return maxWater;
    }
};
