class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int m = baskets.size();
        vector<int>fruitsVis(n, 0);
        vector<int>basketsVis(m, 0); 

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!fruitsVis[i] && !basketsVis[j] && (fruits[i] <= baskets[j])) {
                    fruitsVis[i] = 1; 
                    basketsVis[j] = 1;
                }
            }
        }
        int count = 0; 
        for(auto it : fruitsVis) {
            if(it == 0) {
                count++;
            }
        }
        return count;
    }
};