class Solution {
private:
    void generateSubsets(vector<int>& nums, vector<int>& temp, int i, vector<vector<int>>& result) {
        if(i == nums.size()) {
            result.push_back(temp); 
            return;
        }
        temp.push_back(nums[i]); 
        generateSubsets(nums, temp, i + 1, result); 
        temp.pop_back(); 
        generateSubsets(nums, temp, i + 1, result);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp; 
        vector<vector<int>> result; 
        generateSubsets(nums, temp, 0, result); 
        return result;
    }
};