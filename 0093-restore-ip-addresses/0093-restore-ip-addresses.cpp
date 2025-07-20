class Solution {
private:
    bool isValid(string str) {
        if(str[0] == '0') {
            return false; 
        }
        int val = stoi(str); 
        if(val > 255) {
            return false;
        }
        return true;
    }
    void solve(int idx, string& s, string curr, int parts, vector<string>& result) {
        if(idx == s.length() && parts == 4) {
            curr.pop_back();
            result.push_back(curr); 
            return;
        }
        if((idx + 1) <= s.length()) {
            solve(idx + 1, s, curr + s.substr(idx, 1) + ".", parts + 1, result);
        }
        if(((idx + 2) <= s.length()) && (isValid(s.substr(idx, 2)))) {
            solve(idx + 2, s, curr + s.substr(idx, 2) + ".", parts + 1, result);
        }
        if(((idx + 3) <= s.length()) && (isValid(s.substr(idx, 3)))) {
            solve(idx + 3, s, curr + s.substr(idx, 3) + ".", parts + 1, result);
        }
    }
public:
    vector<string> restoreIpAddresses(string s) {
        if(s.empty()) return {}; 

        string curr = ""; 
        int parts = 0; 
        vector<string> result; 
        solve(0, s, curr, parts, result); 
        return result;
    }
};