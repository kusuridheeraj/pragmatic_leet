class Solution {
public:
    int trap(vector<int>& height) {
        int sz = height.size();
        int trapped_water =0, leftMax=0, rightMax=0;
        int left = 0, right = sz-1;
        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>=leftMax){
                    leftMax = height[left];
                }else{
                    trapped_water += leftMax-height[left];
                }
                                    left++;
            }else{
                if(height[right]>=rightMax){
                    rightMax = height[right];
                    
                }else{
                    trapped_water += rightMax-height[right];
                }
                                    right--;

            }
        }
        return trapped_water;
    }
};