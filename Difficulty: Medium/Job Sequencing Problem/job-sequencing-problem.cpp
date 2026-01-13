class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        int n = deadline.size();
    
        vector<int> idx(n);
        for (int i = 0; i < n; i++) idx[i] = i;
    
 
        sort(idx.begin(), idx.end(), [&](int a, int b) {
            return profit[a] > profit[b];
        });
    
        int maxi = *max_element(deadline.begin(), deadline.end());
   
        vector<int> parent(maxi + 1);
        for (int i = 0; i <= maxi; i++) parent[i] = i;
  
        function<int(int)> find = [&](int x) {
            if (parent[x] == x) return x;
            return parent[x] = find(parent[x]);
        };
    
        int countJobs = 0, jobProfit = 0;
    
        for (int i = 0; i < n; i++) {
            int job = idx[i];
            int availableSlot = find(deadline[job]);
    
            if (availableSlot > 0) {
                countJobs++;
                jobProfit += profit[job];
                parent[availableSlot] = find(availableSlot - 1); // union
            }
        }
    
        return {countJobs, jobProfit};
    }


};