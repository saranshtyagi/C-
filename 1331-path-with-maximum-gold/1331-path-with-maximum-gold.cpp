class Solution {
private:
    int rows, cols; 
    int result;
    void solve(vector<vector<int>>& grid, int i, int j, int gold) {
        if(i < 0 || j < 0 || i >= rows || j >= cols || grid[i][j] == 0) {
            result = max(result, gold); 
            return;
        }
        int temp = grid[i][j]; 
        grid[i][j] = 0;
        gold += temp;

        solve(grid, i - 1, j, gold); 
        solve(grid, i + 1, j, gold); 
        solve(grid, i, j - 1, gold); 
        solve(grid, i, j + 1, gold); 

        grid[i][j] = temp;
    }
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        rows = grid.size(); 
        cols = grid[0].size(); 

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(grid[i][j] != 0) {
                    solve(grid, i, j, 0);
                }
            }
        }
        return result;
    }
};