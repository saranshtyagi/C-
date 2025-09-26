class Solution {
private:
    int binarySearch(vector<int>& nums, int start, int end, int target) {
        int thirdSideIdx = -1;
        while(start <= end) {
            int mid = start + (end - start)/2;

            if(target > nums[mid]) {
                thirdSideIdx = mid; 
                start = mid + 1;
            }
            else end = mid - 1;
        }
        return thirdSideIdx;
    }
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size(); 
        sort(nums.begin(), nums.end()); 
        int count = 0; 

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int sum = nums[i] + nums[j]; 
                int thirdSideIndex = binarySearch(nums, j + 1, n - 1, sum);
                if(thirdSideIndex != -1) {
                    count += (thirdSideIndex - j);
                }
            }
        } 
        return count;
    }
};