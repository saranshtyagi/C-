class Solution {
private:
    int rows, cols;
    int nonObstacles = 0, result = 0;
    void solve(vector<vector<int>>& grid, int count, int i, int j) {
        if(i < 0 || j < 0 || i >= rows || j >= cols || grid[i][j] == -1) {
            return;
        }
        if(grid[i][j] == 2) {
            if(count == nonObstacles) {
                result++;
            }
            return;
        }
        grid[i][j] = -1; 
        solve(grid, count + 1, i - 1, j); 
        solve(grid, count + 1, i + 1, j); 
        solve(grid, count + 1, i, j - 1); 
        solve(grid, count + 1, i, j + 1); 
        grid[i][j] = 0;
    }
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        rows = grid.size(); 
        cols = grid[0].size(); 
        nonObstacles = 0; 
        int start_x, start_y;

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(grid[i][j] == 0) {
                    nonObstacles++;
                }
                if(grid[i][j] == 1) {
                    start_x = i; 
                    start_y = j; 
                }
            }
        }
        nonObstacles += 1; 
        solve(grid, 0, start_x, start_y); 
        return result;
    }
};