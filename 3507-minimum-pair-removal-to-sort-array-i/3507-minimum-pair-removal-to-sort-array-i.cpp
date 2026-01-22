class Solution {
    bool sorted(vector<int>& a) {
        for(int i = 1; i < a.size(); i++) {
            if(a[i] < a[i - 1]) {
                return false;
            }
        }
        return true;
    }
public:
    int minimumPairRemoval(vector<int>& nums) {
        if(sorted(nums)) {
            return 0;
        }
        int cnt = 0; 

        while(!sorted(nums)) {
            int minSum = INT_MAX;
            int index = -1;
            for(int i = 0; i < nums.size() - 1; i++) {
                if((nums[i] + nums[i + 1]) < minSum) {
                    index = i; 
                    minSum = nums[i] + nums[i + 1];
                }
            }
            nums[index] = nums[index] + nums[index + 1]; 
            nums.erase(nums.begin() + index + 1);
            cnt++;
        }
        return cnt;
    }
};