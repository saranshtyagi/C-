class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); 

        int n = nums.size(); 

        int ans = nums[n - 1] - nums[0]; 

        for(int i = 1; i < n; i++) {
            int minVal = min(nums[0] + k, nums[i] - k);
            int maxVal = max(nums[n - 1] - k, nums[i - 1] + k);

            ans = min(ans, maxVal - minVal);
        }
        return ans;
    }
};