class Solution {
private:
    int t[1001][1001];
    int solve(vector<vector<int>>& pairs, int currIdx, int prevIdx) {
        if(currIdx >= pairs.size()) {
            return 0;
        }

        if((prevIdx != -1) && (t[currIdx][prevIdx] != -1)) {
            return t[currIdx][prevIdx];
        }

        int take = 0;
        if(prevIdx == -1 || (pairs[currIdx][0] > pairs[prevIdx][1])) {
            take = 1 + solve(pairs, currIdx + 1, currIdx);
        }

        int skip = solve(pairs, currIdx + 1, prevIdx);
        if(prevIdx != -1) {
            t[currIdx][prevIdx] = max(take, skip);
        }
        return max(take, skip);
    }
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        memset(t, -1, sizeof(t));
        sort(pairs.begin(), pairs.end());
        return solve(pairs, 0, -1);
    }
};