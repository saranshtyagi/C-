class Solution {
public:
    int maxSum(vector<int>& nums) {
        int neg = INT_MIN; 
        int sum = 0; 
        unordered_set<int>st(nums.begin(), nums.end());
        bool zero = false;;

        for(auto it : st) {
            if(it > 0) {
                sum += it;
            }
            if(it < 0) {
                neg = max(neg, it);
            }
            if(it == 0) zero = true;
        }
        if(sum == 0 && zero) return 0;
        return (sum == 0) ? neg : sum;
    }
};