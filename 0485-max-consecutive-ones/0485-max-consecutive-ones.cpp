class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, maxOne = 0; 

        for(int i = 0; i < nums.size(); i++) {
            if(!nums[i]) {
                cnt = 0;
            }
            else {
                cnt++;
                maxOne = max(maxOne, cnt); 
            }
        }
        return maxOne;
    }
};