class Solution {
private:
    void solve(vector<int>& temp, int start, int n, int k, vector<vector<int>>& result) {
        if (k == 0) {
            result.push_back(temp);
            return;
        }

        for (int i = start; i <= n; i++) {
            temp.push_back(i);
            solve(temp, i + 1, n, k - 1, result);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp; 
        vector<vector<int>> result; 
        solve(temp, 1, n, k, result); 
        return result;
    }
};