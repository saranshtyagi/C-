class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(begin(nums), end(nums)); 
        int n = nums.size();

        for(int i = n - 1; i >= 2; i--) {
            if(nums[i - 1] + nums[i - 2] > nums[i]) {
                return (nums[i - 1] + nums[i - 2] + nums[i]);
            }
        }
        return 0;
    }
};