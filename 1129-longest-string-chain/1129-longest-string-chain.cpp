class Solution {
private:
    int t[1001][1001];
    bool checkPredecessor(string &word1, string &word2) {
        if (((word2.length() - word1.length()) != 1) || (word1.length() > word2.length())) {
            return false;
        }
        
        int i = 0, j = 0;
        bool skipped = false;

        while (i < word1.length() && j < word2.length()) {
            if (word1[i] == word2[j]) {
                i++;
            }
            j++;
        }
        return i == word1.length(); 
    }
    int solve(vector<string>& words, int currIdx, int prevIdx) {
        if(currIdx >= words.size()) {
            return 0;
        }
        if(prevIdx != -1 && (t[currIdx][prevIdx] != -1)) {
            return t[currIdx][prevIdx];
        } 
        int take = 0; 
        if(prevIdx == -1 || checkPredecessor(words[prevIdx], words[currIdx])) {
            take = 1 + solve(words, currIdx + 1, currIdx);
        } 
        int skip = solve(words, currIdx + 1, prevIdx);
        if(prevIdx != -1) {
            t[currIdx][prevIdx] = max(take, skip);
        }
        return max(take, skip);
    }
public:
    int longestStrChain(vector<string>& words) {
        memset(t, -1, sizeof(t));
        sort(words.begin(), words.end(), [](const string &s1, const string &s2) {
            return s1.length() < s2.length();
        });
        return solve(words, 0, -1); 
    }
};