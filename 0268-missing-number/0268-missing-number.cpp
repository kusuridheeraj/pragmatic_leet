class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int val = n; 
        for(int i = 0; i<n;i++){
            val ^= nums[i]^i; 
        }
        return val;
    }
};