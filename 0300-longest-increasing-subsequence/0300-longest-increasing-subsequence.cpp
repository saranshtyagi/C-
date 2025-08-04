class Solution {
private:    
    int t[2501][2501];
    int solve(int prevIdx, int currIdx, vector<int>& nums) {
        if(currIdx >= nums.size()) {
            return 0;
        }
        if(t[prevIdx][currIdx] != -1 && prevIdx != -1) {
            return t[prevIdx][currIdx];
        }
        int take = 0;
        if(prevIdx == -1 || (nums[currIdx] > nums[prevIdx])) {
            take = 1 + solve(currIdx, currIdx + 1, nums);
        }
        int skip = solve(prevIdx, currIdx + 1, nums);
        if(prevIdx != -1) {
            t[prevIdx][currIdx] = max(take, skip);
        }
        return max(take, skip);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        memset(t, -1, sizeof(t)); 
        return solve(-1, 0, nums);
    }
};