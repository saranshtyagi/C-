class Solution {
public:
    bool hasSameDigits(string s) {
        string str;
        while(s.length() != 2) {
            str = "";
            for(int i = 0; i < s.length() - 1; i++) {
                int sum = (s[i] - '0') + (s[i + 1] - '0');
                int modu = sum % 10; 
                str += to_string(modu);
            }
            s = str; 
        }
        if(s[0] == s[1]) return true; 
        else return false;
    }
};