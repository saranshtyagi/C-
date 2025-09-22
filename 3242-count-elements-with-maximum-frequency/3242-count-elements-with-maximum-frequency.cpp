class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freqMap; 
        for(auto it : nums) {
            freqMap[it]++;
        }
        int maxFreq = 0; 
        int ans = 0; 
        for(auto it = freqMap.begin(); it != freqMap.end(); it++) {
            if(it->second >= maxFreq) {
                maxFreq = it -> second; 
            }
        }
        for(auto it = freqMap.begin(); it != freqMap.end(); it++) {
            if(it -> second == maxFreq) {
                ans += it -> second;
            }
        }
        return ans;
    }
};