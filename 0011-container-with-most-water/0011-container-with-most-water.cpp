class Solution {
public:
    int maxArea(vector<int>& height) {
        int sz = height.size();
       int max_water = 0, water_height =0, width=0;
        int left =0, right = sz-1;
        while(left<right){
            water_height = min(height[left],height[right]);
            width = right-left;
            max_water = max(max_water,water_height * width);

            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return max_water;
    }
};