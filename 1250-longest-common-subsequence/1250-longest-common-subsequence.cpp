class Solution {
private:
    int t[1001][1001];
    int lcs(int i, int j, string& text1, string& text2) {
        if(i >= text1.length() || j >= text2.length()) {
            return 0;
        }
        if(t[i][j] != -1) {
            return t[i][j];
        }
        if(text1[i] == text2[j]) {
            return t[i][j] = 1 + lcs(i + 1, j + 1, text1, text2);
        }
        else {
            return t[i][j] = max(lcs(i + 1, j, text1, text2), lcs(i, j + 1, text1, text2));
        }
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        memset(t, -1, sizeof(t));
        return lcs(0, 0, text1, text2);
    }
};