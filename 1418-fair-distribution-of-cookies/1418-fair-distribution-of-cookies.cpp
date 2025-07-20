class Solution {
private:
    int result = INT_MAX; 
    void solve(vector<int>& cookies, int k, vector<int>& children, int idx) {
        if(idx >= cookies.size()) {
            int unfairness = *max_element(children.begin(), children.end()); 
            result = min(result, unfairness); 
            return;
        }

        for(int i = 0; i < k; i++) {
            children[i] += cookies[idx]; 
            solve(cookies, k, children, idx + 1); 
            children[i] -= cookies[idx];
        }
    }
public:
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>children(k, 0); 
        solve(cookies, k, children, 0); 
        return result;
    }
};