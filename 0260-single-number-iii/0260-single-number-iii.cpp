class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xoR = 0, res1 = 0, res2 = 0;

        for(int i = 0; i < nums.size(); i++) {
            xoR = xoR ^ nums[i];
        }
        
        unsigned int rsb = static_cast<unsigned int>(xoR) & ~(static_cast<unsigned int>(xoR) - 1);

        for(int i = 0; i < nums.size(); i++) {
            if((nums[i] & rsb) != 0) {
                res1 = res1 ^ nums[i];
            }
            else {
                res2 = res2 ^ nums[i];
            }
        }
        return {res1, res2};
    }
};
