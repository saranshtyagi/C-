class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        // code here
        sort(intervals.begin(), intervals.end(), [](const auto &a, const auto &b){
            return a[1] < b[1];
        });
        
        int n = intervals.size(); 
        int cnt = 0;
        int lastFinishTime = intervals[0][1];
        
        for(int i = 1; i < n; i++) {
            if(intervals[i][0] < lastFinishTime) {
                cnt++;
            }
            else {
                lastFinishTime = intervals[i][1];
            }
        }
        return cnt;
    }
};
