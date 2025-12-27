class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res1 = 0; 
        int res2 = nums[0];
        int n = nums.size();

        for(int i = 1; i <= n; i++) {
            res1 = res1 ^ i;
        }

        for(int i = 1; i < n; i++) {
            res2 = res2 ^ nums[i];
        }

        int res = res1 ^ res2;
        return res;
    }
};