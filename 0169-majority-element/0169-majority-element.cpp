class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> freq;
        for(int x : nums){
            freq[x]++;
        }
        int n = nums.size(),value, count;
        for(auto x : freq){
            value = x.first;
            count = x.second;
            if(count > n/2){
                return x.first;
            }
        }
        return 0;
    }
};