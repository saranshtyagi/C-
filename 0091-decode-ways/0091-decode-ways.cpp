class Solution {
private:
    int t[101];
    int solve(int i, string &s) {
        if(i == s.length()) {
            return 1;
        }
        if(s[i] == '0') {
            return 0;
        }
        if(t[i] != -1) {
            return t[i];
        }
        int ways = 0; 
        ways += solve(i + 1, s);

        if(i + 1 < s.size()) {
            int num = stoi(s.substr(i, 2));
            if(num >= 10 && num <= 26) {
                ways += solve(i + 2, s);
            }
        }
        return t[i] = ways;
    }
public:
    int numDecodings(string s) {
        memset(t, -1, sizeof(t));
        return solve(0, s);
    }
};