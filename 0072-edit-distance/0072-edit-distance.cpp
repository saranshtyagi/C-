class Solution {
private:
    int m, n; 
    int t[501][501];
    int solve(string& w1, string& w2, int i, int j) {
        if(j == n) {
            return m - i;
        }
        else if(i == m) {
            return n - j;
        }

        if(t[i][j] != -1) {
            return t[i][j];
        }
        
        if(w1[i] == w2[j]) {
            return t[i][j] = solve(w1, w2, i + 1, j + 1);
        }
        
        int insertC = 1 + solve(w1, w2, i, j + 1); 
        int replaceC = 1 + solve(w1, w2, i + 1, j + 1); 
        int delte = 1 + solve(w1, w2, i + 1, j);
        
        return t[i][j] = min({insertC, replaceC, delte});
    }
public:
    int minDistance(string word1, string word2) {
        m = word1.length(); 
        n = word2.length();
        memset(t, -1, sizeof(t));
        return solve(word1, word2, 0, 0);
    }
};