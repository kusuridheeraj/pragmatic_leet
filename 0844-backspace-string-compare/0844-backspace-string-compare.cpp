class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int lenS = processString(s);
        int lenT = processString(t);
        if(lenS!=lenT) return false;

        for(int i=0;i<lenS;i++){
            if(s[i]!=t[i]) return false;
        }
        return true;
    }

private: 
    int processString(string& s){
        int anchor = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#'){
                s[anchor]=s[i];
                anchor++;
            }else if(anchor>0){
                anchor--;
            }
        }
        return anchor;
    }
};