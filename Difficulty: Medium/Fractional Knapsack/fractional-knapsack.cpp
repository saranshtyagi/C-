class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n = val.size();
        vector<pair<int, int>> arr(n);
        
        for(int i = 0; i < n; i++) {
            arr[i] = {val[i], wt[i]};
        }
        
        sort(arr.begin(), arr.end(), [](const auto &a, const auto &b) {
            return (double)a.first / a.second > (double)b.first / b.second;
        });
        
        double totalVal = 0; 
        
        for(int i = 0; i < n; i++) {
            if(arr[i].second <= capacity) {
                totalVal += arr[i].first;
                capacity -= arr[i].second;
            }
            else {
                totalVal += ((double)arr[i].first/arr[i].second) * capacity;
                break;
            }
        }
        return totalVal;
    }
};
