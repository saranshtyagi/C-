class Solution {
private:
    vector<vector<int>> result; 
    unordered_set<int> st;

    void solve(vector<int>& nums, vector<int>& temp) {
        if (nums.size() == temp.size() && st.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!st.count(nums[i])) {  
                temp.push_back(nums[i]);
                st.insert(nums[i]);
                solve(nums, temp);
                temp.pop_back();
                st.erase(nums[i]);
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        solve(nums, temp); 
        return result;
    }
};
