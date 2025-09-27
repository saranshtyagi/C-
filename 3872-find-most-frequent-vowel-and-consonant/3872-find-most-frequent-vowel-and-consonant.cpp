class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> vowelMp; 
        unordered_map<char, int> consonantMp; 

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                vowelMp[s[i]]++;
            }
            else {
                consonantMp[s[i]]++;
            }
        }
        int maxVowelCnt = 0; 
        int maxConstCnt = 0; 

        for(auto it : vowelMp) {
            maxVowelCnt = max(maxVowelCnt, it.second);
        }
        for(auto it : consonantMp) {
            maxConstCnt = max(maxConstCnt, it.second);
        }
        return maxVowelCnt + maxConstCnt;
    }
};