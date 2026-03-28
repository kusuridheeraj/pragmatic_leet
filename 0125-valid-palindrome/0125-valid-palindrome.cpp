class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(
            remove_if(s.begin(),s.end(), [](unsigned char c){
                return !isalnum(c);
            }), s.end()
        );

        transform(s.begin(),s.end(),s.begin(),[](unsigned char c){
            return tolower(c);
            });

        string sol = s;
        reverse(sol.begin(),sol.end());

        return sol == s;
    }
};