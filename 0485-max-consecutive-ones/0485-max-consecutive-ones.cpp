class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, oneCount = 0; 
        for(int i = 0; i < nums.size(); i++) {
            if(!nums[i]) {
                cnt = 0; 
            }
            else {
                cnt++;
                oneCount = max(oneCount, cnt);
            }
        }
        return oneCount;
    }
};