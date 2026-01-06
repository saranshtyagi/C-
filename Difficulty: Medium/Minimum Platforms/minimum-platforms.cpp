class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        sort(arr.begin(), arr.end()); 
        sort(dep.begin(), dep.end());
        
        int m = arr.size(), n = dep.size();
        int platforms = 1; 
        int i = 1, j = 0; 
        int result = 1;
        
        while(i < m && j < n) {
            if(arr[i] <= dep[j]) {
                platforms++;
                i++;
            }
            else {
                platforms--;
                j++;
            }
            result = max(result, platforms);
        }
        return result;
    }
};
