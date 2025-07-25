class Solution {
private:
    int t[46];
    int solve(int n) {
        if(n < 0) {
            return 0;
        }
        if(n == 0) {
            return 1;
        }
        if(t[n] != -1) {
            return t[n];
        }
        int take_one_step = solve(n - 1); 
        int take_two_step = solve(n - 2); 

        return t[n] = take_one_step + take_two_step;
    }
public:
    int climbStairs(int n) {
        memset(t, -1, sizeof(t));
        return solve(n);
    }
};