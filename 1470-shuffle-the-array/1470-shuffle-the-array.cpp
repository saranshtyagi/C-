class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);

        vector<int> xArray(n); 
        vector<int> yArray(n);

        int i = 0; 

        for(int i = 0; i < 2*n; i++) {
            if(i < n) {
                xArray[i] = nums[i];
            }
            else {
                yArray[i%n] = nums[i];
            }
        }

        int xIndex = 0; 
        int yIndex = 0;
        for(int i = 0; i < 2*n; i++) {
            if(i%2 == 0) {
                ans[i] = xArray[xIndex];
                xIndex++;
            }
            else{
                ans[i] = yArray[yIndex];
                yIndex++;
            }
        }
        return ans;
    }
};