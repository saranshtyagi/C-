class Solution {
private:
    vector<string> result; 
    void solve(int idx, string currSentence, unordered_set<string>& st, string& s) {
        if(idx >= s.length()) {
            result.push_back(currSentence);
            return;
        }

        for(int i = idx; i < s.length(); i++) {
            string tempWord = s.substr(idx, i - idx + 1); 
            if(st.count(tempWord)) {
                string tempSentence = currSentence; 
                if(!currSentence.empty()) {
                    currSentence += " ";
                }
                currSentence += tempWord;
                solve(i + 1, currSentence, st, s);
                currSentence = tempSentence;
            }
        }
    }
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>st(wordDict.begin(), wordDict.end()); 
        solve(0, "", st, s);
        return result;
    }
};