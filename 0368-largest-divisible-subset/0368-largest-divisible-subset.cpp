class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n, 1);
        vector<int>prevIdx(n, -1);
        int lastChosenIndexForMaxLIS = 0; 
        int maxLIS = 1;
        sort(nums.begin(), nums.end());
        
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < i; j++) {
                if(nums[i] % nums[j] == 0) {
                    if(dp[i] < dp[j] + 1) {
                        dp[i] = dp[j] + 1; 
                        prevIdx[i] = j;
                    }
                    if(dp[i] > maxLIS) {
                        maxLIS = dp[i];
                        lastChosenIndexForMaxLIS = i;
                    }
                }
            }
        }
        vector<int> result;  
        while(lastChosenIndexForMaxLIS != -1) {
            result.push_back(nums[lastChosenIndexForMaxLIS]);
            lastChosenIndexForMaxLIS = prevIdx[lastChosenIndexForMaxLIS];
        }
        return result;
    }
};