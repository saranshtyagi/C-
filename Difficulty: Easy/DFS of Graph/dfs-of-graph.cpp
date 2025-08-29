class Solution {
  private:
    void DFS(vector<vector<int>>& adj, int u, vector<int>& visited, vector<int>& result) {
        if(visited[u]) return; 
        visited[u] = 1; 
        result.push_back(u); 
        
        for(auto &it : adj[u]) {
            if(!visited[it]) {
                DFS(adj, it, visited, result);
            }
        }
    } 
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> result; 
        vector<int> visited(V, 0); 
        
        DFS(adj, 0, visited, result);
        return result;
    }
};