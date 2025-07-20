class Solution {
private:
    void solve(int n, vector<vector<int>>& requests, vector<int>& transfers, int count, int idx, int& result) {

        if(idx >= requests.size()) {
            bool allZero = true; 

            for(auto it : transfers) {
                if(it != 0) {
                    allZero = false; 
                    break;
                }
            }

            if(allZero) {
                result = max(result, count);
            }
            return;
        }

        int from = requests[idx][0]; 
        int to = requests[idx][1]; 

        transfers[from]--; 
        transfers[to]++; 
        solve(n, requests, transfers, count + 1, idx + 1, result); 
        transfers[from]++; 
        transfers[to]--; 
        solve(n, requests, transfers, count, idx + 1, result);
    }
public:
    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector<int>transfers(n, 0); 
        int result = INT_MIN;
        solve(n, requests, transfers, 0, 0, result);
        return result;
    }
};