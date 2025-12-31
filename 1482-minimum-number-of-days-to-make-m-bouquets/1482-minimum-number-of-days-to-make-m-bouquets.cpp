class Solution {
private:
    bool isPossible(vector<int>& bloomDay, int days, int m, int k) {
        int cnt = 0; 
        int boquets = 0; 

        for(int i = 0; i < bloomDay.size(); i++) {
            if(bloomDay[i] <= days) {
                cnt++;
                if(cnt == k) {
                    boquets++;
                    cnt = 0;
                }
            }
            else {
                cnt = 0;
            }
        }
        return boquets >= m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total = 1LL * k * m;

        if(total > bloomDay.size()) return -1;

        int maxi = *max_element(bloomDay.begin(), bloomDay.end()); 
        int mini = *min_element(bloomDay.begin(), bloomDay.end()); 

        int low = mini, high = maxi; 
        int ans = -1;

        while(low <= high) {
            int mid = low + (high - low)/2;

            if(isPossible(bloomDay, mid, m, k)) {
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