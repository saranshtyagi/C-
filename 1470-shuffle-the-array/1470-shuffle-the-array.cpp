class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);

        vector<int> xArray(n); 
        vector<int> yArray(n);

        int i = 0; 

        while(i < n) {
            xArray[i] = nums[i];
            i++;
        }

        while(i < 2*n) {
            yArray[i%n] = nums[i];
            i++;
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