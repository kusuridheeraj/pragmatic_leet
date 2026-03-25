class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>set(nums.begin(),nums.end());
        int sol = 0;
        for(auto n : set){
            if(!set.count(n-1)){
                                            int length = 1;
                while(set.count(n+length)){
                    length++;
                }
                            sol = max(sol,length);

            }
        }
        return sol;
    }
};