class Solution {
private:
    long long calculateTotalHours(vector<int>& piles, int speed) {
        long long totalH = 0;  
        for(int banana : piles) {
            totalH += (long long)(banana + speed - 1) / speed;
        }
        return totalH;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile = *max_element(piles.begin(), piles.end()); 

        int low = 1, high = maxPile; 
        int ans = maxPile; 

        while(low <= high) {
            int mid = low + (high - low) / 2;
            long long totalHours = calculateTotalHours(piles, mid);  

            if(totalHours <= h) {
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
