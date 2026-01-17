class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        int n = tasks.size();
        sort(tasks.begin(), tasks.end(), [](const auto &a, const auto &b) {
            return (a[1] - a[0]) > (b[1] - b[0]);
        });

        int total = 0;
        for (auto &task : tasks) {
            total += task[0];
        }

        int initialEnergyNeeded = 0;
        int currentEnergy = total;
        
        for (auto task : tasks) {
            if (task[1] > currentEnergy) {
                initialEnergyNeeded += task[1] - currentEnergy;
                currentEnergy = task[1];
            }
            currentEnergy -= task[0];
        }
        return initialEnergyNeeded + total;
    }
};
