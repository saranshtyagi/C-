class Solution {
private:
    int t[51][51];
    int solve(vector<int>& values, int start, int end) {
        if(end - start + 1 < 3) {
            return 0;
        }
        if(t[start][end] != -1) {
            return t[start][end];
        }
        int res = INT_MAX; 
        for(int k = start + 1; k < end; k++) {
            int wt = values[start] * values[k] * values[end] + solve(values, start, k) + solve(values, k, end);
            res = min(res, wt);
        }
        return t[start][end] = res;
    }
public:
    int minScoreTriangulation(vector<int>& values) {
        memset(t, -1, sizeof(t));
        int n = values.size(); 
        return solve(values, 0, n - 1);
    }
};