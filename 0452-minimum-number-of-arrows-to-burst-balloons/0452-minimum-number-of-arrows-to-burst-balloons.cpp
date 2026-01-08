class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size(); 
        sort(points.begin(), points.end(), [](const auto &a, const auto &b){
            return a[1] < b[1];
        });

        int noOfArrows = 1; 
        int lastFinishTime = points[0][1]; 

        for(int i = 0; i < n; i++) {
            if(points[i][0] > lastFinishTime) {
                noOfArrows++;
                lastFinishTime = points[i][1];
            }
            else {
                lastFinishTime = min(lastFinishTime, points[i][1]);
            }
        }
        return noOfArrows;
    }
};