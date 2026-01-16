class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(), costs.end(), [](const auto &a, const auto &b){
            return ((a[0]-a[1]) < (b[0]-b[1]));
        });

        int cost = 0;

        int n = costs.size();
        int i = 0; 

        while(i < n / 2) {
            cost += costs[i][0]; 
            i++;
        }
        while(i < n) {
            cost += costs[i][1];
            i++;
        }
        return cost;
    }
};