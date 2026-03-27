class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>sol;
        int n = strs.size();
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            if(v[i])continue;
            string s1 = strs[i];
            vector<string> group;
            group.push_back(s1);
            for(int j=i+1;j<n;j++){
                if(v[j])continue;
                int charArr[26]={0};
                string s2 = strs[j];
                int len = s2.length();
                bool isAnagram = true;
                if(i!=j && (s1.length()==s2.length())){
                    for(int k=0;k<len;k++){
                        charArr[s1[k]-'a']++;
                        charArr[s2[k]-'a']--;
                    }
                    for( int k =0; k < 26; k++){
                        if(charArr[k]!=0){
                            isAnagram = false;
                        }
                    }
                    if(isAnagram){
                        group.push_back(s2);
                        v[j]=true;
                    }
                }
            }
            sol.push_back(group);
        }
        return sol;
    }
};