class Solution {
private:
    void solve(int idx, string& digits, unordered_map<char, string>& mpp, string& temp, vector<string>& result) {
        if(idx >= digits.length()) {
            result.push_back(temp); 
            return;
        }
        char ch = digits[idx]; 
        string str = mpp[ch]; 

        for(int i = 0; i < str.length(); i++) {
            temp.push_back(str[i]); 
            solve(idx + 1, digits, mpp, temp, result); 
            temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {}; 
        unordered_map<char, string> mpp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        string temp;
        vector<string> result;
        solve(0, digits, mpp, temp, result); 
        return result;
    }
};