class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>target_map(128,0),window_map(128,0);
        for(char c : t)target_map[c]++;

        int left = 0, right = 0, matched = 0;
        int required = 0;
        for(int count : target_map) if(count>0) required++;
        int min_len = INT_MAX, min_start = 0;
        int sz = s.size();
        while(right<sz){
            char c = s[right];
            window_map[c]++;
            if(target_map[c]>0 && target_map[c]==window_map[c]){
                matched++;
            }
            while(matched == required){

                if(right-left + 1 < min_len){
                    min_start = left;
                    min_len = right - left + 1;
                }
                char left_char = s[left];
                window_map[left_char]--;
                if(target_map[left_char]>0 && window_map[left_char]<target_map[left_char]){
                    matched--;
                }
                left++;
            }
            right++;
        }
        return min_len == INT_MAX ? "" : s.substr(min_start, min_len);
    }
};