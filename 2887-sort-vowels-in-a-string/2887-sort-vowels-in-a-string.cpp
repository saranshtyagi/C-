class Solution {
private:
    bool checkVowels(string s) {
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                return true;
            }
        }
        
        return false;
    }
public:
    string sortVowels(string s) {
        if(!checkVowels(s)) {
            return s;
        }
        vector<int> vowelsAsciiVals;  
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                vowelsAsciiVals.push_back(int(s[i]));
            }
        }
        sort(vowelsAsciiVals.begin(), vowelsAsciiVals.end());
        vector<char> vowelsChar;
        for(int i = 0; i < vowelsAsciiVals.size(); i++) {
            vowelsChar.push_back(char(vowelsAsciiVals[i]));
        }
        vector<int> ans;
        int idx = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                if(idx < vowelsChar.size()) {
                    ans.push_back(vowelsChar[idx]);
                }
                idx++;
            }
            else {
                ans.push_back(s[i]);
            }
        }
        string res;
        for(int i = 0; i < ans.size(); i++) {
            res += ans[i];
        }
        return res;
    }
};