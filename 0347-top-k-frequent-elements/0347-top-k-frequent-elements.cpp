class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        for(auto num : nums){
            map[num]++;
        }
        vector<pair<int,int>>res(map.begin(),map.end());

        sort(res.begin(),res.end(), [](auto &a, auto &b){
         return a.second > b.second;}
        );
        vector<int>ans;
        for(int i=0 ;i<k;i++){
            ans.push_back(res[i].first);
        }
        return ans;

    }
};