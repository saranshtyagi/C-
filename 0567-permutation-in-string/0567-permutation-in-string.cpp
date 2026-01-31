class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(); 
        int m  = s2.size(); 

        unordered_map<char, int> freqS1; 
        unordered_map<char, int> freqS2; 

        for(int i = 0; i < n; i++) {
            freqS1[s1[i]]++;
        }

        for(int i = 0; i < m; i++){
            freqS2[s2[i]]++;

            if(i >= n) {
                freqS2[s2[i - n]]--;
                if(freqS2[s2[i - n]] == 0) {
                    freqS2.erase(s2[i - n]);
                }
            }

            if(i >= n - 1 && freqS1 == freqS2) {
                return true;
            }
        }
        return false;
    }
};