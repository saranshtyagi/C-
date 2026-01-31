class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = p.length(); 
        int m = s.length(); 

        unordered_map<char, int> freqP; 
        unordered_map<char, int> freqQ; 

        for(int i = 0; i < n; i++) {
            freqP[p[i]]++;
        }

        vector<int> ans;

        for(int i = 0; i < m; i++) {
            freqQ[s[i]]++;

            if(i >= n) {
                freqQ[s[i - n]]--;
                if(freqQ[s[i - n]] == 0) {
                    freqQ.erase(s[i - n]);
                }
            }

            if(i >= n - 1 && freqQ == freqP) {
                ans.push_back(i - n + 1);
            }
        }
        return ans;
    }
};