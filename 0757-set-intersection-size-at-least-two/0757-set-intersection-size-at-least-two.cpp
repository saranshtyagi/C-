class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        int n = intervals.size(); 

        sort(intervals.begin(), intervals.end(), [](const auto &a, const auto &b){
            if(a[1] != b[1]) {
                return a[1] < b[1];
            }
            return a[0] > b[0];
        });

        int result = 0; 
        int first = -1; 
        int second = -1; 

        for(int i = 0; i < n; i++) {
            int l = intervals[i][0];
            int r = intervals[i][1];
            if(l <= first) {
                continue;
            }
            else if(l <= second) {
                first = second; 
                second = r; 
                result += 1;
            }
            else {
                first = r - 1; 
                second = r; 
                result += 2;
            }
        }
        return result;
    }
};