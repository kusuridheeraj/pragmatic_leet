class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>romanVal;
        romanVal = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

        int sz = s.length();
        int val=0;
        for(int i=0;i<sz;i++){
            if(i<sz-1 && romanVal[s[i]]<romanVal[s[i+1]]){
                val -= romanVal[s[i]];
            }else{
                val += romanVal[s[i]];
            }
        }
    return val;
    }
};