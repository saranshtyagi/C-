class Solution {
private:
    int t[1001][1001];
    bool checkPal(string &s, int i, int j) {
        if(i > j) {
            return true;
        }
        if(t[i][j] != -1) {
            return t[i][j];
        }
        if(s[i] == s[j]) {
            return t[i][j] = checkPal(s, i + 1, j - 1);
        }
        return false;
    }
public:
    int countSubstrings(string s) {
        int n = s.length(); 
        int cnt = 0; 
        memset(t, -1, sizeof(t)); 

        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if(checkPal(s, i, j)) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};