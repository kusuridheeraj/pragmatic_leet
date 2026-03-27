class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mapping;

        for(auto str: strs){
            string key = str;
            sort(key.begin(),key.end());
            mapping[key].push_back(str);
        }

        vector<vector<string>>sol;

        for(auto& [key,group] : mapping){
            sol.push_back(group);
        }

        return sol;
    }
};