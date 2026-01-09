// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        bool seen[256] = {false}; 
        int idx = 0;
    
        for (char c : s) {
            if (!seen[(unsigned char)c]) {
                seen[(unsigned char)c] = true;
                s[idx++] = c;
            }
        }
    
        s.resize(idx);
        return s;
    }

};