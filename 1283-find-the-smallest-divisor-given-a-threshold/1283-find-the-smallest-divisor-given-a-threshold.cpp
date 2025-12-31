class Solution {
private:
    bool checkSum(vector<int>& nums, int divisor, int threshold) {
        int sum = 0; 

        for(int i = 0; i < nums.size(); i++) {
            sum += ((nums[i] + divisor - 1)/divisor); 
        }
        if(sum <= threshold) return true; 
        return false;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxElement = *max_element(begin(nums), end(nums));
        int low = 1, high = maxElement;
        int ans = -1;

        while(low <= high) {
            int mid = low + (high - low)/2;
            if(checkSum(nums, mid, threshold)) {
                ans = mid; 
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};