class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sz = nums.size();
        for(int i=0;i<nums.size();i++){
            sz ^= i^nums[i];
        }
        return sz;
    }
};