class Solution {
  public:
    vector<string> result;
    void solve(int i, int j, vector<vector<int>>& maze, string path) {
        if(i < 0 || i >= maze.size() || j < 0 || j >= maze.size() || maze[i][j] == 0) {
            return;
        }
        if(i == maze.size() - 1 && j == maze.size() - 1) {
            result.push_back(path); 
            return;
        }
        
        maze[i][j] = 0; 
        solve(i, j - 1, maze, path + 'L'); 
        solve(i + 1, j, maze, path + 'D'); 
        solve(i, j + 1, maze, path + 'R'); 
        solve(i - 1, j, maze, path + 'U'); 
        
        maze[i][j] = 1;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        string path = ""; 
        solve(0, 0, maze, ""); 
        sort(result.begin(), result.end());
        return result;
    }
};