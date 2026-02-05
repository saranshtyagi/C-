class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> result(n);

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                result[i] == nums[i];
            }
            else if(nums[i] < 0) {
                int toMoveLeft = abs(nums[i]);
                int index = i;
                while(toMoveLeft) {
                    index = (index - 1 + n) % n; 
                    toMoveLeft--;
                }
                result[i] = nums[index];
            }
            else if(nums[i] > 0) {
                int toMoveRight = nums[i]; 
                int index = i; 
                while(toMoveRight) {
                    index = (index + 1) % n;
                    toMoveRight--;
                }
                result[i] = nums[index];
            }
        }
        return result;
    }
};