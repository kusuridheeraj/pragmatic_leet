class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>hash;
        for(auto num : nums){
            hash[num]++;
        }
        return (nums.size()!=hash.size());
    }
};