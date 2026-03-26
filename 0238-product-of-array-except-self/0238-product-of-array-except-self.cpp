class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,1);
        for(int i=1;i<n;i++){//left to right
            ans[i] = nums[i-1] * ans[i-1];
        }

        int right = 1;
        //right to left 

        for(int i = n-1; i>=0;i--){
            ans[i]= ans[i]*right;
            right = right * nums[i];
        }
        return ans;
    }
};