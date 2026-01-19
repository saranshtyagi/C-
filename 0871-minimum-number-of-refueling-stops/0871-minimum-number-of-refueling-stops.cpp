class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n = stations.size(); 

        int maxReach = startFuel; 
        priority_queue<int> maxHeap; 

        int count = 0; 
        int i = 0;

        while(maxReach < target) {
            while(i < n && stations[i][0] <= maxReach) {
                maxHeap.push(stations[i][1]);
                i++;
            }

            if(maxHeap.empty()) return -1;
            count++;
            maxReach += maxHeap.top(); 
            maxHeap.pop();
        }
        return count;
    }
};