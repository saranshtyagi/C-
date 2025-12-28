class Solution {
private:
    int firstOcc(vector<int>& nums, int target) {
        int n = nums.size(); 
        int low = 0, high = n - 1;
        int ans = -1; 

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target) {
                ans = mid; 
                high = mid - 1;
            }
            else if (target > nums[mid]) low = mid + 1;
            else high = mid - 1;
        }
        return ans;
    }
    int lastOcc(vector<int>& nums, int target) {
        int n = nums.size(); 
        int low = 0, high = n - 1; 
        int ans = -1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] == target) {
                ans = mid; 
                low = mid + 1;
            }
            else if(target > nums[mid]) {
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans; 
        int firstOccurence = firstOcc(nums, target);
        int lastOccurence = lastOcc(nums, target); 
        ans.push_back(firstOccurence); 
        ans.push_back(lastOccurence);
        return ans;
    }
};