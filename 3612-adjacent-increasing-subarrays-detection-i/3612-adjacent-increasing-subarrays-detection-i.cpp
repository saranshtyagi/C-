class Solution {
private:
    bool incSubarrays(vector<int>& nums, int i, int j) {
        for (int k = i; k < j; ++k) {
            if (nums[k + 1] <= nums[k]) {
                return false;
            }
        }
        return true;
    }
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        for (int i = 0; i <= nums.size() - 2 * k; ++i) {
            if (incSubarrays(nums, i, i + k - 1)) {
                if (incSubarrays(nums, i + k, i + 2 * k - 1)) {
                    return true;
                }
            }
        }
        return false;
    }
};
