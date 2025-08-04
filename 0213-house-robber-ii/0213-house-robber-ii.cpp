class Solution {
private:
    int dp(vector<int>& nums, int start, int end) {
        vector<int> t(nums.size(), -1);
        for (int i = end; i >= start; --i) {
            int steal = nums[i] + (i + 2 <= end ? t[i + 2] : 0);
            int skip = (i + 1 <= end ? t[i + 1] : 0);
            t[i] = max(steal, skip);
        }
        return t[start];
    }

public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        return max(dp(nums, 0, n - 2), dp(nums, 1, n - 1));
    }
};