class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(const auto num : nums){
            freq[num]++;
        }
        int sol=0;
        for(const auto &p : freq){
            if(p.second == 1){
                sol = p.first;
            }
        }
        return sol;
    }
};