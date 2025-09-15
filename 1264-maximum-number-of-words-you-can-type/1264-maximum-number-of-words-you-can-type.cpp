class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> letters(brokenLetters.begin(), brokenLetters.end()); 
        bool canType = true; 
        int result = 0;

        for(auto ch : text) {
            if(ch == ' ') {
                if(canType) {
                    result++;
                }
                canType = true;
            }
            else if(letters.find(ch) != letters.end()) {
                canType = false;
            }
        }
        if(canType) {
            result++;
        }
        return result;
    }
};