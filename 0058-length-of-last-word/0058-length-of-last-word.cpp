class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size(); 
        int endIndex = n - 1; 

        while(endIndex >= 0 && s[endIndex] == ' ') {
            endIndex--;
        }

        int startIndex = endIndex; 
        while(startIndex >= 0 && s[startIndex] != ' ') {
            startIndex--;
        }
        
        int lengthOfLastWord = endIndex - startIndex;
        return lengthOfLastWord;
    }
};