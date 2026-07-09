class Solution {
    vector<vector<int>> result;
    void solve(vector<int>& nums, vector<int>& temp, int i) {
        if(i == nums.size()) {
            result.push_back(temp);
            return;
        }
        solve(nums, temp, i + 1); 
        temp.push_back(nums[i]);
        solve(nums, temp, i + 1); 
        temp.pop_back();
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp; 
        solve(nums, temp, 0); 
        return result;
    }
};