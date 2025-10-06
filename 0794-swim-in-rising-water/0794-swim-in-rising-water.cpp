class Solution {
private:
    vector<vector<int>> directions{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}; 
    int n;
    bool possibleToReach(vector<vector<int>> &grid, int i, int j, int t, vector<vector<bool>>& vis) {
        if(i < 0 || i >= n || j < 0 || j >= n || vis[i][j] == true || grid[i][j] > t) {
            return false;
        }
        vis[i][j] = true; 

        if(i == n - 1 && j == n - 1) {
            return true;
        }

        for(auto &dir : directions) {
            int i_ = i + dir[0]; 
            int j_ = j + dir[1]; 

            if(possibleToReach(grid, i_, j_, t, vis)) {
                return true;
            }
        }
        return false;
    }
public:
    int swimInWater(vector<vector<int>>& grid) {
        n = grid.size(); 
        int l = grid[0][0];
        int r = n*n - 1;
        int res = 0; 
        while(l <= r) {
            int mid = l + (r - l)/2;
            vector<vector<bool>> vis(n, vector<bool>(n, false));

            if(possibleToReach(grid, 0, 0, mid, vis)) {
                res = mid; 
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return res;
    }
};