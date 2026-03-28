class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> hash_map;
        int sz = numbers.size();

        for (int i = 0; i < sz; i++) {
            int val = target - numbers[i];
            if (hash_map.find(val) != hash_map.end()) {
                return {hash_map[val], i + 1};
            }
            hash_map[numbers[i]] = i + 1;
        }
        return {};
    }
};